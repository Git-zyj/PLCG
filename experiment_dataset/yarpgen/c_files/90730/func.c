/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90730
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
    var_13 = ((/* implicit */long long int) (~(((((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))) + (2147483647))) >> (((min((var_10), (var_10))) - (1631212209)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) min(((+(((/* implicit */int) var_9)))), (((/* implicit */int) min(((!(((/* implicit */_Bool) var_8)))), ((!(((/* implicit */_Bool) var_12)))))))));
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)43))) * (1U))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (arr_3 [i_0] [i_1] [i_1]))) : ((((~(((/* implicit */int) arr_1 [i_0])))) % (((/* implicit */int) ((short) arr_2 [i_0])))))));
            }
        } 
    } 
    var_14 |= ((/* implicit */int) var_9);
}
