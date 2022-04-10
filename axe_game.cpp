#include "raylib.h"
int main()
{
    // window dimensions
    int width{350};
    int height{500};
    InitWindow(width, height, "Zachary's Window");

    // circle coordinates
    int circle_x{175};
    int circle_y{250};

    // runs game
    SetTargetFPS(60);
    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // Game logic begins
        DrawCircle(circle_x, circle_y, 25, BLUE);
        if (IsKeyDown(KEY_D))
        {
            circle_x = circle_x + 10;
        }
        if (IsKeyDown(KEY_A))
        {
            circle_x = circle_x - 10;
        }

        // Game logic ends
        EndDrawing();
    }
}
