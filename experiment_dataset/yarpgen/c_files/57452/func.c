/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57452
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
    var_13 = ((/* implicit */int) max((((/* implicit */long long int) (signed char)108)), (((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)99)))))));
    var_14 = ((/* implicit */int) max((var_14), ((-(((/* implicit */int) max((var_12), (max((var_8), (var_8))))))))));
    var_15 -= ((/* implicit */long long int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))))), ((signed char)97)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_16 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [(short)19])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)86))) : (((long long int) var_4)))) * (((/* implicit */long long int) (+(var_9))))));
                var_17 ^= ((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)30))) <= (var_5))));
                arr_5 [i_1] = ((/* implicit */long long int) ((max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned int) 503316480)))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) & (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))));
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) var_8)), (arr_2 [i_0] [i_0] [i_0])))) >> (((((((/* implicit */int) arr_3 [i_0] [i_0] [(signed char)18])) ^ (var_10))) - (619458244))))))));
                var_19 |= ((/* implicit */short) 8190U);
            }
        } 
    } 
}
