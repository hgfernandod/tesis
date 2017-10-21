#ifndef FEATURES_H
#define FEATURES_H
#include<iostream>
#include<fstream>
#include "../dcm/dcm.h"
#include"../fp/fp.h"

namespace sdh
{

class features : public dcm, public fp
{
    public:
        features();
        features(int kp, int lp, int dp, float thetap);
        void                convertTo(std::string file, std::string dataset , std::string spliter  = "\t");
        void                vector2file( char *filename, std::vector<float> vector, float label, std::string spliter = "\t");
        std::vector<float>  getFeaturesv(cv::Mat image, int i, int j);
        void                ordenation(int *ValorS, int *ValorD, float *ProbS, float *ProbD);
        void                clean();


        virtual             ~features();
    protected:
    private:
        float vvariance;
        float vcorrelation;
        float ventropy;
        float vclus,vclusP;
        float vcontrast;
        float venerS,venerD;
        float vhomogeneity;
        double trainPercent;
        int opencvVersion = 0;
};
}
#endif // FEATURES_H
