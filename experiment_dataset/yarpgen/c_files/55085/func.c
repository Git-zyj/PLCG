/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55085
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
    var_13 = ((((/* implicit */int) ((((12201671817965519514ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) == (((/* implicit */unsigned long long int) ((2068067925) & (((/* implicit */int) (unsigned short)15414)))))))) & (((((/* implicit */_Bool) max((12201671817965519514ULL), (((/* implicit */unsigned long long int) var_9))))) ? (var_6) : (var_7))));
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551603ULL))))) : (((int) (short)28374))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (((((/* implicit */_Bool) var_8)) ? (var_5) : (var_12))))) : (((/* implicit */unsigned long long int) min((var_2), (var_10)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [0ULL] = ((/* implicit */unsigned short) ((28ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_1] [i_0]);
                var_15 = arr_4 [i_0] [i_0];
            }
        } 
    } 
    var_16 *= ((/* implicit */unsigned short) ((short) ((unsigned short) var_3)));
    var_17 *= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) 1ULL)) && (((/* implicit */_Bool) var_11))))), (((short) 0ULL))))) && (((/* implicit */_Bool) var_1))));
}
