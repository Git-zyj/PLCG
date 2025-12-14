/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((((arr_0 [i_0]) < (var_8 * var_9))) || (((arr_1 [i_0]) < ((-(arr_0 [i_0]))))));
        var_15 = (max(var_15, ((((((((max(11770, 51255))) + (arr_1 [i_0])))) ? ((((20 > var_6) || var_7))) : (((arr_1 [i_0]) % (arr_1 [i_0]))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] = (arr_2 [i_1]);
            var_16 = ((arr_1 [i_0]) ? (arr_1 [i_0]) : 92);

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                var_17 = (~(arr_2 [i_2 + 2]));
                var_18 = (min(var_18, (((((arr_2 [14]) & var_9)) <= var_3))));
                var_19 *= (((arr_4 [i_1]) | ((((arr_4 [i_1]) || var_10)))));
            }
            for (int i_3 = 4; i_3 < 13;i_3 += 1)
            {
                var_20 = (((arr_7 [i_3 + 2] [i_3 + 3]) % var_11));
                var_21 -= var_6;
                var_22 = (max(var_22, var_12));
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_23 = (max(var_23, -3932731226552177641));
                var_24 *= ((arr_9 [i_1]) >= (arr_9 [i_0]));
                arr_12 [i_0] [i_0] [i_4] = (((arr_9 [i_1]) && var_8));
            }
            arr_13 [i_0] [i_0] [i_0] = 3932731226552177641;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
        {
            var_25 = (((arr_8 [i_5] [i_5] [i_5] [i_5]) ? (arr_6 [i_0]) : var_9));
            var_26 = (~var_1);
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_27 = arr_16 [i_6];
        arr_18 [i_6] = (((arr_17 [i_6] [i_6]) | var_0));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_28 = (arr_2 [i_7]);
            var_29 -= (((arr_19 [i_8] [i_7]) == (arr_0 [i_7])));
        }
        arr_24 [i_7] = (((arr_21 [i_7]) * var_0));
        var_30 = var_5;
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    {
                        var_31 = (min(var_31, (arr_4 [i_7])));
                        var_32 -= (((var_12 & (arr_14 [i_7]))) >= (arr_32 [i_11 - 1] [i_11 - 1] [i_10] [i_11 - 1]));
                        var_33 -= ((arr_21 [i_11 - 1]) % (arr_21 [i_11 - 1]));
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        arr_35 [i_12] [1] = var_4;
        var_34 = ((((((arr_34 [i_12]) + (arr_34 [i_12])))) ? (((arr_34 [i_12]) ? (arr_34 [i_12]) : var_6)) : ((min((arr_34 [i_12]), var_12)))));
    }
    #pragma endscop
}
