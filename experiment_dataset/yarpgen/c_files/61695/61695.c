/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(268419072, (120 >= var_5)));
    var_16 = ((((~(max(var_3, var_10))))) ? var_2 : var_1);
    var_17 = (((((var_14 - (min(var_0, var_2))))) ? (((max(var_14, var_9)) - 98)) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (!6199816229888634480)));
                arr_6 [i_0] [i_0] = ((!(arr_1 [i_0])));
                var_19 = (((!120) ? (arr_1 [i_0]) : (16 > -268419073)));
            }
        }
    }
    #pragma endscop
}
