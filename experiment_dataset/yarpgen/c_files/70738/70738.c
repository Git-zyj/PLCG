/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = ((var_8 ? (arr_6 [i_0] [i_1] [i_1]) : ((var_8 ? -118 : 255))));
                    var_20 &= ((((-759134841 ? 1149332645671325347 : var_12)) > (-74 + 10)));
                    var_21 = (((arr_6 [i_2 + 1] [i_1] [i_2 - 1]) ? (arr_6 [i_0] [i_1 + 1] [i_2 - 4]) : (arr_6 [i_0] [i_2 + 1] [i_2])));
                }
            }
        }
        var_22 = (min(var_22, var_13));
    }
    var_23 = (min(var_23, (((17683 && (((var_10 ? (!var_6) : -4192358933462214508))))))));
    var_24 = (((((var_3 ? var_11 : 78))) ? var_7 : (min(var_18, var_14))));
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                arr_13 [i_3] = 2;
                var_25 = var_4;
            }
        }
    }
    #pragma endscop
}
