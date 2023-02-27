#include <stdio.h>
#include <raylib.h>

int main()
{
    InitWindow(800, 800, "Raytracing");
    SetTargetFPS(10);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);
        DrawText("Hello world!", 300, 300, 20, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}