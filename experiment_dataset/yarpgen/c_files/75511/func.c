/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75511
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4095U)) ? (((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) max(((-((~(((/* implicit */int) var_8)))))), (max((var_6), (var_2)))));
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) ((18446744073709551610ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))), (((((/* implicit */unsigned long long int) max((-1854819644), (((/* implicit */int) var_5))))) - (max((((/* implicit */unsigned long long int) -1054511394)), (2959960486168652581ULL))))))))));
                }
            } 
        } 
    } 
}
