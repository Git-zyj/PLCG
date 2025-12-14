/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64434
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (18446744073709551615ULL)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_16 ^= ((/* implicit */signed char) max((9223372036854775802LL), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) arr_3 [6])) : (((/* implicit */int) arr_0 [i_1])))))))));
                var_17 = ((/* implicit */int) (short)-13984);
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [(signed char)12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 9223372036854775807LL)))) : (((arr_4 [15] [i_0]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-13973)))))))));
            }
        } 
    } 
}
