#include <string>

namespace { // Avoid cluttering the global namespace.
    
    // A couple of simple C++ functions that we want to expose to Python.
    std::string greet() { return "hello, world"; }
    int square(int number) { return number * number; }
}


#include <boost/python.hpp>
using namespace boost::python;

BOOST_PYTHON_MODULE(getting_started1)
{
    // Add regular functions to the module.
    def("greet", greet);
    def("square", square);
}
