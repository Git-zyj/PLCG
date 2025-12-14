/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92253
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_0 [(signed char)13] [i_1])) / (((/* implicit */int) (unsigned char)252)))), (((/* implicit */int) ((var_11) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))))))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((((/* implicit */unsigned long long int) var_11)) ^ (arr_3 [i_1 - 1] [i_1])))));
                arr_7 [i_0] [i_0] &= ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((arr_3 [i_0] [15]), (arr_3 [i_1] [i_0]))))) >> (((((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) arr_5 [i_0]))))) ? (arr_3 [i_1] [6U]) : (((/* implicit */unsigned long long int) var_11)))) - (11020220275480875781ULL)))));
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_14))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))) && (((/* implicit */_Bool) (~(var_5)))))) && (arr_0 [i_0] [i_0])));
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((var_16), (var_2)));
}
