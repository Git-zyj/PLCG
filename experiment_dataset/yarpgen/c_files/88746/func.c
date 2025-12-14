/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88746
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (arr_4 [i_2] [i_1])));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_2 [i_0] [i_1]))));
                    var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (min((var_1), (var_11))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_1]))))))) / (((((/* implicit */unsigned int) ((var_15) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_18))))) * (arr_6 [i_0 + 1] [i_0 - 1])))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((short) arr_6 [i_1] [i_0])))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) var_13);
    var_25 = ((/* implicit */unsigned short) ((var_12) >= (min((((/* implicit */unsigned int) max((var_16), (var_4)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_19))) & (var_12)))))));
}
