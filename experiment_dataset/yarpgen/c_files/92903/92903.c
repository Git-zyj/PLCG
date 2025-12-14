/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_5 ? 1 : 1));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 = (min(var_19, (((-(max((arr_0 [i_0 - 1]), 1946342657)))))));
        var_20 = var_11;
        var_21 -= (min((((!var_7) ? (0 < var_13) : ((var_12 ? (arr_1 [i_0]) : 114)))), ((-(!var_4)))));
        var_22 = (min(var_22, 1));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] [i_1] &= ((var_0 - (max(-var_2, (arr_1 [i_1])))));
        arr_9 [i_1] [i_1] &= ((((~(!var_2))) <= (var_3 & 228038231)));

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_23 = var_12;
            var_24 = (min(((((!var_10) <= (!var_15)))), ((~((min(9, (arr_7 [i_1]))))))));
        }
        var_25 = min((min((arr_3 [i_1] [i_1]), (min(-2147483643, var_15)))), 2147483647);
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        arr_14 [2] = min((((!((max(var_2, -1625005466)))))), var_11);
        var_26 += var_3;
        var_27 = var_10;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_28 = (207 ? 0 : 1262976962);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_29 = (!-32012);
                    var_30 = (min(var_30, ((-((var_2 / (-32767 - 1)))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                {
                    arr_27 [i_7] [i_7] = (~(arr_10 [i_4] [i_8 + 1] [i_7 + 1]));
                    var_31 = (max(var_31, (((arr_11 [i_4]) ? 1 : (arr_11 [i_7 + 1])))));
                    arr_28 [i_7] [i_7] [i_7] [i_4] = 1;
                    var_32 = ((!(arr_23 [i_8 + 3] [i_7 - 1] [i_7 + 1])));
                    var_33 = -14;
                }
            }
        }
        var_34 += ((2 ? 32012 : var_9));
    }
    #pragma endscop
}
