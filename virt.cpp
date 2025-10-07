#include <cstdlib>
#include <libvirt/libvirt.h>
#include <iostream>
#include <iostream>
#include "virt.h"

virt::virt() {}


void virt::testCommand()
{
    int result = system("echo Hello-World");
    std::cout << "Test command working\n";
}


int virt::createVM()
{
    //int result  = system("virt-install")
}
