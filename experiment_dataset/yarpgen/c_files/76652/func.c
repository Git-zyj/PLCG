/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76652
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
    var_11 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 = ((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) var_5)))) * (min((((/* implicit */int) arr_2 [i_0 - 1])), (var_8))));
                var_13 = min((((/* implicit */unsigned char) ((signed char) var_1))), (min((((/* implicit */unsigned char) var_10)), (arr_0 [i_0]))));
            }
        } 
    } 
}
