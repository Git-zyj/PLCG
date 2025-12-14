/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((min((var_13 != var_4), (68 / -5359088964605616843))))));
                var_15 = (min(var_15, (((((min(-2952358266, -112))) ? (-72 - -5359088964605616843) : var_3)))));
                var_16 |= ((var_12 ^ (arr_1 [i_0] [i_0 + 3])));
                var_17 = ((((((arr_5 [i_0] [i_0 + 3] [i_0]) || var_11))) >= (arr_1 [i_0] [i_1])));
            }
        }
    }
    var_18 = ((~(var_13 | -4294967295)));
    #pragma endscop
}
