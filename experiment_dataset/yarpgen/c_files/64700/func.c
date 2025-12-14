/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64700
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 -= ((/* implicit */unsigned short) var_5);
    var_12 = ((/* implicit */long long int) (+((-((-(((/* implicit */int) var_1))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)170))))))))));
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (+(((((/* implicit */int) var_2)) & (((/* implicit */int) (unsigned short)23609)))))))));
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (+(((/* implicit */int) min(((unsigned short)4618), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60918))) < (var_0))))))))))));
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) << (((var_8) - (4150016854U)))))));
}
