# pragma once

#include <iostream>
#include <string>

class Brain
{
    public:
        // Brain stores 100 short strings called ideas
        Brain();
        Brain(const Brain& other);
        ~Brain();

        Brain& operator=(const Brain& other);

        // Store an idea at a given index (0..99). Out-of-range indices are ignored
        void setIdea(int index, const std::string& idea);
        // Read an idea at a given index (0..99). Returns empty string if out of range
        std::string getIdea(int index) const;

    protected:    
        std::string ideas[100];
        
};
