/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (max(var_19, (arr_0 [1] [1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_20 = ((((var_3 ^ ((((arr_4 [i_0] [i_0] [i_0] [i_0]) == (arr_1 [i_2] [9])))))) <= (arr_4 [i_2 - 1] [i_2] [i_2 - 1] [i_2])));
                    arr_6 [i_0] [i_0] = (arr_4 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2 + 1]);

                    for (int i_3 = 2; i_3 < 6;i_3 += 1) /* same iter space */
                    {
                        arr_9 [3] [i_0] [2] = (arr_8 [i_0] [i_0] [i_2 + 1] [i_3]);
                        var_21 *= (min((var_12 || var_11), (((arr_8 [i_0] [i_3] [i_2 - 1] [i_2 - 1]) ? (arr_8 [i_0] [i_3] [i_2] [i_2 + 2]) : var_17))));
                        arr_10 [i_0] [i_0] [i_0] [i_3 + 4] [i_0] [5] = min(var_9, ((!((var_11 == (arr_0 [i_3] [i_0]))))));
                        arr_11 [i_0] [i_0] [i_0] = ((!((((arr_5 [i_0] [i_3 + 2] [i_3 - 2] [i_3 + 4]) % ((min(var_16, var_6))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 6;i_4 += 1) /* same iter space */
                    {
                        var_22 = (((arr_4 [i_0] [i_1] [i_2 + 2] [i_4]) % ((39 ? (arr_13 [i_1] [i_0]) : (arr_3 [i_4 - 1] [i_0])))));
                        var_23 = (max(var_23, (arr_1 [i_0] [i_0])));
                    }
                    var_24 = var_0;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_25 &= ((((arr_18 [i_0]) && var_14)));
                    var_26 = (min(var_26, (((((((arr_12 [6] [6] [6] [i_6]) || var_0))) != 1)))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_24 [i_0] [i_5] [i_0] [i_0] [9] [1] = (max((((~(arr_8 [2] [i_0] [i_6] [i_7])))), (((arr_18 [i_6]) + (-1108050613175819573 - -9195483913971798165)))));
                                var_27 = -9223372036854775807;
                                var_28 |= var_8;
                                var_29 = (max(var_29, ((((((arr_1 [i_0] [i_5]) % var_13)) % (arr_5 [i_8] [i_8] [i_6] [i_6]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 18;i_9 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_30 *= (arr_32 [i_9] [i_11] [i_12]);
                            arr_38 [i_9 + 3] [i_10] [i_9 + 3] [i_9 + 3] [i_10] [i_11] [i_11] = 28904;
                        }
                        for (int i_14 = 3; i_14 < 21;i_14 += 1)
                        {
                            var_31 = (((arr_40 [i_9] [i_10 - 1] [i_11] [i_11] [i_12 + 1] [i_10 - 1] [i_14 - 3]) || (arr_40 [i_14 + 1] [i_12 + 1] [i_12 + 1] [i_12] [i_11] [i_10] [i_9])));
                            var_32 = (min(var_32, (254 / 1)));
                            var_33 = (arr_30 [i_9 + 2] [i_9]);
                            var_34 *= (((((arr_31 [i_10 - 1] [i_10 - 1] [i_9]) ? var_17 : var_2)) - ((var_1 * (arr_42 [i_9 + 4] [i_10 - 1] [1] [i_14 - 3] [i_9 + 4])))));
                        }
                        arr_43 [i_9] [1] &= (((arr_37 [16] [i_9] [i_9] [10] [i_9]) || (arr_35 [i_9 + 2] [16] [16] [10] [i_12 + 1])));
                        var_35 *= (arr_36 [14] [i_9 + 1] [i_9] [i_9] [14]);
                    }
                }
            }
        }
        arr_44 [i_9] [i_9] = ((var_9 ? (arr_36 [12] [i_9] [2] [12] [12]) : (arr_33 [i_9 + 1])));
        var_36 = var_17;
        var_37 = (arr_26 [i_9 + 2] [i_9 + 1]);
    }
    /* vectorizable */
    for (int i_15 = 1; i_15 < 18;i_15 += 1) /* same iter space */
    {
        var_38 = (arr_41 [i_15] [14]);
        var_39 = (-45 || -30);
        var_40 *= (((arr_30 [i_15 + 3] [i_15 + 3]) / var_1));
    }
    for (int i_16 = 1; i_16 < 18;i_16 += 1) /* same iter space */
    {
        var_41 = ((var_0 ^ (~9223372036854775807)));
        var_42 *= (arr_39 [i_16 + 2]);
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 24;i_17 += 1)
    {
        for (int i_18 = 2; i_18 < 23;i_18 += 1)
        {
            {
                var_43 = (arr_52 [i_17] [i_18] [21]);
                var_44 = ((((((max(var_4, var_14))))) / (arr_52 [i_17] [i_18] [i_18 - 2])));
            }
        }
    }
    var_45 = var_9;
    var_46 = (max(65535, var_4));
    #pragma endscop
}
