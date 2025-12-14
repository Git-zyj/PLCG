/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (((!1) && ((((arr_2 [i_0]) * 0)))));

        for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
        {
            var_17 += ((((((!120) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_1 [i_0] [i_1])))) ? ((~(arr_6 [i_1 - 1] [i_1] [i_0]))) : 1708523271));
            arr_8 [i_0] = var_9;
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0] [i_2] = (arr_10 [i_2 + 1] [i_2]);
            var_18 = (max(var_18, (0 + 0)));
        }
        for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 24;i_5 += 1)
                {
                    {
                        var_19 = (max(var_19, (min((arr_12 [i_5 - 1] [i_3] [i_0]), 0))));
                        arr_20 [i_3 - 2] [i_3] [i_3 - 1] [i_4] [i_3] [i_3] = ((((max(var_6, var_15))) ^ (min(((var_1 ? (arr_9 [i_0] [i_3] [i_3]) : 1)), (arr_7 [i_3 + 2] [i_3 + 1] [i_3 + 1])))));
                    }
                }
            }
            arr_21 [i_3 - 2] = var_4;
        }
        arr_22 [i_0] = (max((((((1 ? (arr_4 [i_0] [i_0] [i_0]) : 1)) != (arr_7 [i_0] [i_0] [i_0])))), (arr_12 [i_0] [i_0] [i_0])));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_25 [i_6] = ((((1 ? (arr_9 [i_6] [i_6] [i_6]) : 111620599)) > 244));
        arr_26 [i_6] = ((((arr_1 [i_6] [i_6]) && (((arr_9 [i_6] [i_6] [i_6]) || -110)))));
        arr_27 [i_6] [i_6] = (arr_2 [i_6]);
        var_20 = (max(var_20, ((((((12753900689081295618 ? 3573013074 : 3958994773))) >= -4459103790485161986)))));
    }
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        var_21 = (min(var_21, ((((((1 ? (arr_16 [i_7 + 1] [i_7]) : -2050323806)) >> (((((arr_6 [i_7] [i_7] [i_7]) ? 4459103790485161985 : -4459103790485161998)) - 4459103790485161982))))))));

        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            arr_33 [i_7] [i_8 + 1] = (((max(2131798437, -49)) * (!var_2)));
            var_22 = (max(var_22, ((((((!-127) ? -50 : ((255 - (arr_13 [i_8] [i_7 + 1]))))) != -123)))));
            arr_34 [i_7] [i_7] [i_7] = 7;
            arr_35 [i_7] [i_7] = (arr_29 [i_7]);
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_23 |= (((arr_17 [i_7 + 2] [i_7] [i_7 + 2] [i_7 - 1] [i_9] [i_9]) <= (max((arr_9 [i_7 - 1] [i_7] [i_7 + 2]), (arr_17 [i_7 + 1] [i_7] [i_7 + 2] [i_7 + 2] [i_7 - 1] [i_9])))));
            arr_39 [i_7] [i_7] = 1;
            var_24 = (min(var_24, 8594241829570341804));
        }
        var_25 += (((~(((arr_38 [i_7 - 1] [i_7] [i_7 + 2]) | -127)))));
    }
    var_26 |= var_12;
    var_27 = (!-4459103790485161986);
    #pragma endscop
}
