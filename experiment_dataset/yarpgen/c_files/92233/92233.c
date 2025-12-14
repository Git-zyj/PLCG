/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_18 = (((arr_5 [i_0] [i_1] [i_1] [i_1]) ? (9985974669930153817 & -1598298580) : (((~(arr_8 [i_2] [i_2 - 1] [i_2 + 1]))))));
                    var_19 = var_2;
                    var_20 = (max(var_20, 0));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_12 [i_0] = ((!(((arr_1 [i_0]) && (((1 ? 1 : 0)))))));
                    arr_13 [i_0] [i_0] [3] = (arr_8 [i_0] [i_0] [i_3]);
                }
                arr_14 [i_1] [i_0] [i_0] = ((((-(arr_1 [i_0]))) >> 1));
            }
        }
    }

    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        var_21 -= (min((((((arr_15 [i_4]) ? 1 : (arr_16 [i_4] [i_4 - 1]))))), (arr_16 [i_4] [i_4])));
        var_22 = (((!1) && ((max(((-123 ? 56 : 1)), 203)))));
        var_23 = ((1 ? (((2529564688 || ((((arr_17 [i_4] [i_4]) ? 1 : var_7)))))) : ((((1 ? var_6 : 3))))));
    }
    var_24 = (-1732263341 < var_14);
    #pragma endscop
}
