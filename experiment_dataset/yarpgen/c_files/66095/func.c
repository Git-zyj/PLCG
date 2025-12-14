/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66095
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
    var_13 = ((/* implicit */short) (_Bool)0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((long long int) ((var_4) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [(_Bool)1])))))));
                var_14 = ((((arr_3 [i_0 + 1]) >= (arr_3 [i_0 - 1]))) ? (((((/* implicit */_Bool) var_11)) ? (-6695566958424985551LL) : (((/* implicit */long long int) arr_5 [i_0] [i_0 - 1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48749)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? ((+(((/* implicit */int) (short)-29908)))) : (((int) arr_5 [i_0] [i_0]))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) max((((long long int) arr_3 [i_0 - 1])), (((/* implicit */long long int) (+(-7743664))))));
                arr_8 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0] [i_0 + 1] [i_0 - 1]))));
            }
        } 
    } 
}
