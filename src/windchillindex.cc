//
// Created by luis_ on 12/10/2018.
//
#include<cfloat>
#include<math.h>
namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {
                double computeWindChillIndex(double t, double v) {
                    if (t > 10.0) return FLT_MIN;
                    double w = 33.0-((10*sqrt(v)-v)*(33.0-t))/23.1;
                    return (w);
                }
            }
        }
    }
}
