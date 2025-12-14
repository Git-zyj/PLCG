/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81736
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (arr_2 [i_2 + 1]) : (arr_2 [i_2 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2 - 1])) || (((/* implicit */_Bool) arr_2 [i_2 - 1])))))));
                    var_11 -= ((/* implicit */unsigned long long int) (-2147483647 - 1));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (var_9)))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_5) : (var_9))))))) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((var_0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))) : (min((((/* implicit */long long int) var_5)), (var_3)))))));
}
