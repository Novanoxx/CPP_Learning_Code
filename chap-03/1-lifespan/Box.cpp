#include "Box.h"

#include <iostream>

int main() {

    // Programme de base :
    // std::cout << "box1 block begin" << std::endl;
    //{ Box box1 { "c1" }; }
    // std::cout << "box1 block end" << std::endl;

    //    std::cout << "----------------" << std::endl;

    //  std::cout << "box2 block begin" << std::endl;
    //{ Box box2 { "c2" }; }
    // std::cout << "box2 block end" << std::endl;

    // Exemple 1 pour la validité d'un objet :
    // std::cout << "Main begin" << std::endl;

    // Box* box = new Box("gift");
    // std::cout << box->get_content().name << std::endl;
    // delete box;

    // std::cout << "Main end" << std::endl;

    // Exemple 2 pour la validité d'un objet :
    // std::cout << "Main start" << std::endl;

    // Box*    box     = new Box("gift");
    // Content content = box->get_content();

    // std::cout << content.name << std::endl;

    // delete box;

    //  content.name = "chocolate";
    //  std::cout << content.name << std::endl;

    // std::cout << "Main end" << std::endl;

    // Exemple 3 poir la validité d'un objet :
    std::cout << "Main start" << std::endl;

    Box*     box         = new Box("gift");
    Content& content_ref = box->get_content();

    std::cout << content_ref.name << std::endl;

    delete box;

    content_ref.name = "chocolate";
    std::cout << content_ref.name << std::endl;

    std::cout << "Main end" << std::endl;

    return 0;
}
