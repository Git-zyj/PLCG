/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] |= ((127 * (arr_0 [i_1])));
                arr_8 [19] [2] &= (((arr_3 [i_0 + 1] [i_0 - 1]) * (min((arr_3 [i_0] [i_0 + 1]), var_8))));
            }
        }
    }
    var_14 = ((((((!var_10) ? var_8 : (((3785524719 ? -28 : var_12)))))) && ((max(var_0, var_10)))));
    var_15 = ((((var_2 ? var_13 : (!var_9)))) ? ((var_5 ? 194 : 2218691647)) : (((min(var_0, 1129976156)) - var_13)));
    #pragma endscop
}
