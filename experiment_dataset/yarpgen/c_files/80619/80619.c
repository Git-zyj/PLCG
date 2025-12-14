/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = (var_4 ? (-5398 > 5397) : ((((-5411 ^ 12902) || ((min(var_9, var_6)))))));
    var_13 = (var_1 && var_7);

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_14 = ((-17350 > (((arr_0 [i_0] [i_0]) + (arr_1 [i_0])))));
        arr_2 [i_0] [i_0] = ((+(((arr_0 [i_0] [i_0]) ? 9577 : (arr_0 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_15 = (arr_1 [i_0]);
            var_16 = ((((((arr_0 [i_0] [5]) ? 1 : ((var_6 >> (((arr_1 [i_1]) + 1525546094))))))) ? (max(var_4, ((max(var_0, (arr_0 [i_0] [11])))))) : (((((arr_1 [i_1]) && var_10))))));
        }
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_17 = (min(var_17, (min(var_2, ((((arr_1 [i_0]) < (arr_6 [i_0] [i_2 - 1] [i_3]))))))));
                var_18 = (min(var_18, ((((arr_4 [1] [1] [1]) == (((arr_6 [i_2 + 1] [i_2] [i_2 - 1]) ? ((max((arr_3 [1]), var_10))) : (((!(arr_1 [3])))))))))));
            }
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                var_19 = (23744 * 1);
                var_20 = (206 / 1);
            }
            var_21 = (((arr_7 [i_2 - 1] [i_0]) | (arr_10 [i_0] [11] [11])));
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_22 = (min(var_22, ((((-(arr_5 [i_5] [6] [i_5])))))));
        var_23 = (arr_1 [i_5]);
        var_24 = ((((arr_12 [i_5]) / (arr_12 [i_5]))) + var_5);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        arr_25 [8] [i_6] [i_7] [i_8] = (((arr_24 [i_6]) - (arr_24 [i_6])));
                        var_25 = (arr_20 [i_6] [i_6] [i_6] [i_6]);
                        var_26 += ((-(arr_16 [i_9])));
                        var_27 ^= ((((((((arr_22 [12] [i_7]) + 2147483647)) << var_3))) ? (!var_2) : (arr_17 [i_9] [i_8] [i_8])));
                    }
                }
            }
        }

        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            arr_30 [i_6] [i_6] = (((arr_24 [i_6]) ? (((arr_17 [i_6] [21] [21]) * (arr_29 [i_6] [i_6] [i_6]))) : (((arr_29 [i_6] [i_6] [i_10]) ? (arr_15 [i_6]) : (arr_16 [i_6])))));

            for (int i_11 = 2; i_11 < 23;i_11 += 1)
            {
                arr_33 [i_6] = ((arr_23 [i_6] [i_10] [i_6] [i_11 - 1]) ? (arr_17 [i_6] [i_10] [i_11]) : (arr_16 [i_6]));
                var_28 = (((arr_23 [i_6] [i_11 - 2] [i_11] [i_6]) ? (arr_20 [i_11 + 2] [i_11 - 2] [i_11] [i_11 - 1]) : 47));
                var_29 = (((arr_27 [i_10] [i_11] [i_11 + 2]) ? var_9 : (arr_17 [i_6] [i_6] [i_11 + 1])));
                arr_34 [i_6] [i_11] [i_11] &= (arr_23 [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1]);
            }
        }
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            arr_39 [i_6] [i_12] [i_12] = (arr_19 [i_12] [i_6] [i_6]);
            arr_40 [i_6] = ((-(arr_31 [i_6] [i_12] [i_12])));
            arr_41 [i_6] [i_6] [i_6] = (((arr_38 [i_6] [i_6]) ? (arr_21 [i_6] [i_12]) : var_3));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 24;i_14 += 1)
                {
                    {
                        arr_48 [i_6] = (arr_46 [i_6] [i_6] [i_6]);
                        var_30 = 231;
                        var_31 = ((((var_7 - (arr_27 [i_6] [9] [22]))) + 1));
                    }
                }
            }
        }
        arr_49 [i_6] [i_6] = (arr_24 [i_6]);
    }
    var_32 = ((-var_4 / ((var_10 - ((max(var_0, var_4)))))));
    #pragma endscop
}
