#ifndef InterpolationExceptionH
#define InterpolationExceptionH

#include <exception>
#include <string>

class InterpolationException : public std::exception {
    public:
        InterpolationException(const std::string& reason) throw();
        const char* what() const throw();
    private:
        std::string reason;
};

#endif

