/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92727
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
    var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-64)))) + (2147483647))) >> (((var_3) - (2730896489635567654ULL)))))) && (((/* implicit */_Bool) max((((((/* implicit */int) (short)28356)) << (((((/* implicit */int) (short)-28340)) + (28341))))), (((/* implicit */int) var_4)))))));
    var_21 = ((/* implicit */_Bool) var_16);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) arr_6 [i_0 - 1] [i_0 - 2] [(signed char)7]))), (((((/* implicit */int) arr_5 [i_0 + 1])) * (((/* implicit */int) arr_5 [i_0 - 2]))))));
                var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((arr_7 [i_0] [i_0]) << (((((/* implicit */int) arr_2 [i_1])) + (34))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                arr_9 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) max((var_7), (((/* implicit */short) arr_2 [i_1]))))), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_2 [i_1]))))));
            }
        } 
    } 
}
