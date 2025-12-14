/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85105
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
    var_13 &= ((long long int) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_14 ^= (+(var_0));
                arr_6 [i_0] = ((long long int) arr_5 [i_1] [i_0]);
                var_15 = (-(((long long int) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) var_12))))));
                arr_7 [6LL] [i_0] |= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1]))))), (((((/* implicit */_Bool) max((arr_1 [i_0]), (-1947760424349636843LL)))) ? (var_2) : (((long long int) arr_0 [i_0]))))));
            }
        } 
    } 
}
