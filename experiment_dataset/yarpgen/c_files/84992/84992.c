/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_3 ? var_10 : var_4));
    var_14 = (min(((min(var_4, var_2))), var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = ((!(((var_11 ? (arr_4 [i_0] [i_0]) : var_4)))));
                var_16 = (((arr_2 [i_1]) ? ((max(var_5, (arr_4 [i_0] [i_1])))) : (!var_10)));
                arr_6 [i_0] [i_1] [i_1] = (((arr_3 [i_1] [i_0] [i_0]) ? (((arr_3 [i_1] [i_0] [i_0]) ? var_8 : var_12)) : var_2));
                arr_7 [i_0] [i_1] = var_8;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_17 = (((var_7 ? (arr_13 [i_3]) : (arr_13 [i_3]))));
                    var_18 = (max(var_18, (((var_0 <= (~var_6))))));
                }
            }
        }
    }
    var_19 = ((!((min(((var_1 ? var_4 : var_8)), var_9)))));
    #pragma endscop
}
