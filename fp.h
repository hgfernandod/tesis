#ifndef FP_H
#define FP_H
#include<iostream>
#include<vector>
#include<fstream>
namespace sdh{
class fp
{
    public:
        fp();
        static bool isTXT(char * file);
        static bool isTXT(std::string file);
        static bool isCSV(char *file);
        static bool isCSV(std::string file);
        static void txt2csv(char *filename);
        static int  getCols(const char *file, const char spliter = '\t');
        static int  getRows(char *file);
        virtual ~fp();
    protected:
    private:
};
}
#endif // FP_H
