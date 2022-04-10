#include "raylib.h"
int main()
{
    int width = 350;
    InitWindow(width, 500, "Zachary's Window");
    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
    }
}
