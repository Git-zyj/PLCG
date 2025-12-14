/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63651
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
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = min((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1 - 1])) - (((/* implicit */int) arr_2 [i_0 + 1] [(unsigned char)13]))))), (((((((/* implicit */long long int) ((/* implicit */int) var_1))) + (var_7))) - (((/* implicit */long long int) arr_1 [i_0 + 1] [i_0 - 1])))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_6))) ? (var_11) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 - 1])) > (((((/* implicit */int) var_4)) << (((((/* implicit */int) var_15)) - (186))))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) max((((((((/* implicit */int) arr_0 [i_0 + 1])) + (2147483647))) << (((((/* implicit */int) arr_2 [i_1] [i_1 - 1])) - (1))))), (((((/* implicit */int) arr_2 [i_0 + 1] [1])) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (var_2))))))));
                var_18 = ((/* implicit */unsigned short) var_13);
                var_19 = ((/* implicit */signed char) ((var_11) / (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) var_4))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_1);
}
