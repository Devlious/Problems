#include <cstdlib>
#include "GLFW/glfw3.h"
#include "imgui.h"

void setup(GLFWwindow* window);
void renderer(ImDrawData* draw_data);

int main(void)
{
    if (!glfwInit())
    {
        exit(EXIT_FAILURE);
    }

    static GLFWwindow* window {
        glfwCreateWindow(320, 240, "Simple example", NULL, NULL) 
    };

    if (!window)
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(window);

    // Close window on pressing ESC
    glfwSetKeyCallback(window, [](GLFWwindow* window, int key, int scancode, int action, int mods) {
        if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
            glfwSetWindowShouldClose(window, GL_TRUE);
    });

    setup(window);

    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        glfwPollEvents();

        // Use ImGui functions between here and Render()
        ImGui::NewFrame();

        // This creates a window
        ImGui::Begin("Window Title Here");
        ImGui::Text("Hello, world!");
        ImGui::End();

        // ImGui functions end here
        ImGui::Render();

        glfwSwapBuffers(window);
    }

    glfwDestroyWindow(window);
    glfwTerminate();

    exit(EXIT_SUCCESS);
}
