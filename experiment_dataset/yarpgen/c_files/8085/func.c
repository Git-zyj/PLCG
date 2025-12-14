/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8085
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
    var_17 &= max((max((((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) ((unsigned short) var_10))))), (((/* implicit */unsigned int) max((((((/* implicit */int) var_6)) << (((((/* implicit */int) var_9)) - (12811))))), (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (signed char)122)))))))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((3221225472U) << (((((/* implicit */int) (signed char)-121)) + (126)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_11)))) : ((((_Bool)1) ? (987581737U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))) ? (((/* implicit */int) (unsigned short)18856)) : (((((/* implicit */int) (unsigned short)33311)) << (((max((((/* implicit */unsigned long long int) var_13)), (var_12))) - (9717029908823163187ULL)))))));
    var_19 = ((/* implicit */unsigned int) var_8);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_20 -= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (max((var_5), (((/* implicit */long long int) arr_5 [i_0] [i_1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned short)15343)) : (((/* implicit */int) var_14))))))));
                    var_21 -= ((/* implicit */unsigned char) min((56540855728809440ULL), (((/* implicit */unsigned long long int) (unsigned short)24139))));
                    var_22 = ((/* implicit */unsigned short) var_2);
                    var_23 -= ((/* implicit */unsigned int) min((((((/* implicit */int) ((unsigned short) (_Bool)1))) << (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) < (((/* implicit */int) var_3))))))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0] [i_0])), ((unsigned short)24139))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) 3834912867550717494ULL);
}
