
#include <stdio.h>
#include <math.h>

#define WIDTH 61
#define HEIGHT 25
#define PI 3.14159265

char screen[HEIGHT][WIDTH];

void putPixel(int x, int y, char symbol)
{
    if (x >= 0 && x < WIDTH &&
        y >= 0 && y < HEIGHT)
    {
        screen[y][x] = symbol;
    }
}

void drawLine(int x1, int y1, int x2, int y2)
{
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);

    int sx = (x1 < x2) ? 1 : -1;
    int sy = (y1 < y2) ? 1 : -1;

    int error = dx - dy;

    while (1)
    {
        putPixel(x1, y1, '*');

        if (x1 == x2 && y1 == y2)
            break;

        int e2 = 2 * error;

        if (e2 > -dy)
        {
            error -= dy;
            x1 += sx;
        }

        if (e2 < dx)
        {
            error += dx;
            y1 += sy;
        }
    }
}

int main(void)
{
    int centerX = WIDTH / 2;
    int centerY = HEIGHT - 3;

    // Clear the screen
    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            screen[y][x] = ' ';
        }
    }

    // Draw peacock feathers
    for (int i = 0; i <= 20; i++)
    {
        double angle = (200 + i * 7) * PI / 180.0;

        int length = 18;

        int tipX = centerX + cos(angle) * length;
        int tipY = centerY + sin(angle) * length;

        drawLine(centerX, centerY, tipX, tipY);

        // Draw small branches
        for (int j = 1; j <= 4; j++)
        {
            double t = j / 5.0;

            int branchX = centerX +
                (tipX - centerX) * t;

            int branchY = centerY +
                (tipY - centerY) * t;

            putPixel(branchX - 1, branchY - 1, '/');
            putPixel(branchX + 1, branchY - 1, '\\');
        }

        // Feather tip
        putPixel(tipX, tipY, 'O');
    }

    // Peacock body
    putPixel(centerX, centerY, '@');
    putPixel(centerX, centerY + 1, '|');
    putPixel(centerX, centerY + 2, '|');

    // Display the result
    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            printf("%c", screen[y][x]);
        }

        printf("\n");
    }

    return 0;
}
