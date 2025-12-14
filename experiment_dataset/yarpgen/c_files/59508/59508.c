/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 3145728;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((!(((((2147483647 && (arr_1 [i_1] [i_2]))) ? (arr_5 [i_0]) : ((max((arr_7 [7] [i_1] [i_2 - 3]), 14820))))))));
                    arr_9 [i_0] [i_1] [i_1] = (((((-((var_2 ? 4032 : -12))))) ? (min((((arr_2 [i_1]) ? var_18 : (arr_4 [i_0]))), (arr_6 [i_0] [i_0] [i_0]))) : (arr_6 [i_0 - 1] [i_1] [i_2])));
                }
            }
        }
        arr_10 [i_0] = var_15;

        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            var_20 = (!var_10);
            arr_13 [i_0] [i_0] [i_0] = arr_1 [i_3] [i_3 - 3];
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_18 [i_0] [i_3] [i_0] = (min((arr_6 [i_0] [i_0] [i_0]), (arr_1 [i_4] [i_4])));
                        var_21 = (max(var_13, (((max(var_16, (arr_3 [i_0] [i_5]))) ^ (((var_4 ? (arr_2 [11]) : var_15)))))));
                        var_22 = ((!(!-4023)));
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                arr_24 [i_0] [i_0] [9] [i_7 - 1] = ((((-635278028 ? var_16 : var_11))) ? (arr_4 [i_0]) : (arr_20 [13] [i_7]));
                var_23 = (max(var_23, (~var_9)));
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                var_24 = (max((arr_21 [i_0] [i_6] [i_0]), var_11));
                var_25 = ((!((!(arr_23 [i_0] [i_0 + 1] [i_0])))));
                var_26 -= (arr_5 [i_6]);
            }
            arr_28 [11] [i_0] = (14826 + -787);
            var_27 = (~((-25961 ? (arr_22 [i_0 - 1]) : (((!(arr_27 [i_0] [i_0] [i_6])))))));
            arr_29 [i_0 + 1] [i_0] [11] = var_8;
            var_28 = ((-((+(((arr_2 [i_0]) ^ (arr_20 [i_0 - 1] [i_0 - 1])))))));
        }
        var_29 = (((~-2147483638) ? ((0 - (((-127 - 1) ? var_2 : (arr_5 [i_0]))))) : var_11));
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
    {
        var_30 = 93499497;
        arr_32 [i_9] = ((32767 || 3599144034) ? (arr_31 [i_9] [i_9]) : (((arr_31 [i_9] [i_9]) & (arr_30 [i_9]))));
        var_31 = (~(((arr_31 [i_9] [i_9]) >> (2147483647 - 2147483643))));
        arr_33 [i_9] = (min((((!(arr_31 [20] [i_9])))), ((~((-(arr_30 [i_9])))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
    {
        var_32 = (arr_34 [1]);
        var_33 = (min(var_33, var_8));
    }
    var_34 = var_18;
    var_35 = var_9;
    #pragma endscop
}
