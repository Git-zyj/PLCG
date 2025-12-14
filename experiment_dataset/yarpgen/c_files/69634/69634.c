/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0 - 1] [i_0] = (((((arr_3 [i_0 - 2]) ? var_4 : var_10))) && (((arr_2 [i_0 - 2]) && var_13)));
        var_19 = (arr_1 [i_0 + 1]);
        arr_5 [i_0] = (-32767 - 1);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 = ((221 ? (((arr_7 [i_1] [i_1]) ? -783004397028354716 : ((var_3 + (arr_6 [i_1]))))) : ((((arr_7 [i_1] [i_1]) - -var_7)))));
        var_21 = ((((((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1])))) ? (4042504550707491907 / -783004397028354706) : ((((!(arr_6 [i_1])))))));
        var_22 *= 225;
        arr_8 [i_1] [i_1] = var_5;
    }
    var_23 = (max(var_23, var_3));

    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        var_24 = var_15;
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    arr_16 [i_3] = (arr_12 [i_2] [i_3 - 1] [i_3]);

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_21 [i_5] [i_3] [i_3] [i_2] = (min(((((((arr_7 [i_2] [i_3 - 1]) ? var_11 : (arr_14 [i_3])))) ? var_13 : (arr_10 [i_4]))), (arr_11 [i_2] [i_4] [i_5])));
                        var_25 = (max(var_25, (arr_11 [i_2] [i_4] [i_5])));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_26 = ((min(1659675455, (((arr_20 [i_2] [i_4 + 3] [i_6]) ? (arr_22 [i_2] [i_3 + 1] [i_3] [i_6]) : (arr_13 [i_3]))))));
                        var_27 &= (3849451968461377526 / 227);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_27 [i_3] [i_3] [i_4] = ((var_15 ? ((var_12 ? var_12 : var_17)) : ((32 ? (arr_26 [i_2] [i_3] [i_4] [i_7]) : 35))));
                        var_28 = var_18;
                    }
                    var_29 |= (-1380078720 << (var_12 - 173));
                    var_30 -= var_14;
                }
            }
        }
    }
    var_31 = var_2;
    #pragma endscop
}
