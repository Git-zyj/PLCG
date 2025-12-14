/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7346
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
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)30386))));
    var_20 = ((/* implicit */unsigned char) (-(var_16)));
    var_21 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_14)), (var_11))))) - (var_16)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned char) max((79353488600092865ULL), (((/* implicit */unsigned long long int) arr_3 [23] [i_0]))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) max((var_12), (var_13)));
                var_23 |= ((/* implicit */unsigned int) max((((((/* implicit */int) (short)29796)) | (((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) arr_0 [i_1] [i_0]))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_18);
}
