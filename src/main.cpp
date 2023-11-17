#include <iostream>
#include "GLFW/glfw3.h"
int main(){
  if(!glfwInit())
    return -1;
  else
    std::cout<<"GLFW Init Successfully!"<<"\n";
  GLFWwindow* window =glfwCreateWindow(640,680,"Why You A Failure?",NULL,NULL);
  if(!window){
    glfwTerminate();
    return -1;
  }
  glfwMakeContextCurrent(window);
  while(!glfwWindowShouldClose(window)){
    glfwSwapBuffers(window);
    glfwPollEvents();
  }
  glfwTerminate();
}
