/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66790
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
    var_10 ^= ((/* implicit */_Bool) ((unsigned int) ((signed char) var_9)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 1] [i_1] = ((/* implicit */signed char) arr_0 [i_0] [i_1]);
                var_11 = ((/* implicit */_Bool) ((min((arr_3 [i_1]), (arr_3 [i_1]))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) var_6))));
                var_12 = ((/* implicit */long long int) max((var_12), (max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1])) ? (-20LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_2 [i_0]))), (((/* implicit */long long int) arr_3 [i_0]))))));
            }
        } 
    } 
    var_13 &= ((/* implicit */long long int) var_2);
    var_14 = ((/* implicit */unsigned long long int) ((var_9) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1LL)) ? (-20LL) : (2671919361539078043LL)))) ? (min((33LL), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) var_3))));
}
