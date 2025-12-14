/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68998
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
    var_20 ^= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) ((((int) var_18)) - (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_2))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_3 [i_1])))) ? (((/* implicit */int) var_13)) : ((~(((/* implicit */int) ((signed char) arr_4 [i_1])))))));
                var_22 |= ((/* implicit */unsigned int) ((((_Bool) arr_3 [i_0 - 1])) ? (((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 1]))) : (((((/* implicit */_Bool) var_12)) ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 + 1])))));
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_2 [i_1] [i_0 + 1]))));
            }
        } 
    } 
}
