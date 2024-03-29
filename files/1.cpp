#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
    if (argc < 3)
    {
        std::cout << "Wrong input\n";
        return 1;
    }

    std::ifstream in(argv[1]);
    if (!in.is_open())
    {
        std::cout << "Input file open error\n";
        return 2;
    }
    std::cout << "Input file successfully opened\n";
    std::ofstream out(argv[2]);
    if (!out.is_open())
    {
        std::cout << "Output file open error\n";
        return 3;
    }
    std::cout << "Output file successfully opened\n";

    char c;
    bool curr = false;
    while ((c = in.peek()) != EOF) {
        c = in.get();
        if ((c == '$') && (in.peek() == '$')) {
            if (curr == false) {
                out << "<math>";
                curr = true;
            }
            else {
                out << "<\math>";
                curr = false;
            }
        }
        else if ((c == '$') && (in.peek() != '$')) {
            if (curr == false) {
                out << "<math>";
                curr = true;
            }
            else {
                out << "<\math>";
                curr = false;
            }
        }
        else
            out << c;
    }
    std::cout << "Successfully written data\n";
    out.close();
    in.close();
    std::cout << "Both files are closed\n";
    return 0;
}
