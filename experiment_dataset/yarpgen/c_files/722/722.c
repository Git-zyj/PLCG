/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 = ((~((var_10 ? var_9 : 1))));
        arr_3 [i_0] [i_0] = 1;
        var_18 = (max(var_18, var_2));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_19 = (min(var_19, (((min((arr_4 [i_1]), var_1))))));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_20 = (min(var_20, (((((((((arr_5 [i_1] [i_2]) ? var_13 : var_2)) * (var_2 >= var_12)))) ? ((~(arr_4 [1]))) : ((min(1, (max(1, 1))))))))));
            arr_9 [i_2] [i_2] = (max((max(1, 8223435395603350763)), (((var_4 ? (arr_2 [i_1]) : var_13)))));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_21 = ((((-(1 == var_1))) << (var_6 - 61541)));
            var_22 = (min(var_22, ((max((!var_11), ((1 > (max(var_8, (arr_7 [i_3] [i_3]))))))))));
        }

        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            var_23 = ((!((min(1, var_0)))));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_24 [i_4] = ((4294967290 ? (arr_0 [12]) : (arr_0 [i_1])));
                            arr_25 [i_1] [i_1] [i_4] [i_4 - 1] [i_4] [i_6] [i_7] = (var_8 / 1);
                            var_24 = var_11;
                        }
                    }
                }
                var_25 = (max(var_25, 1));
                arr_26 [i_1] [i_1] [i_4 + 1] [i_4] = (((arr_4 [i_5]) ? (arr_4 [i_1]) : var_13));
            }
            arr_27 [i_1] [i_4] = (((var_8 - var_12) <= ((max(2147483647, (arr_12 [i_1] [i_4]))))));
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        arr_32 [i_8] = (((((var_4 << (var_5 - 2885)))) ? var_15 : ((((arr_0 [i_8]) ? var_1 : var_12)))));
        arr_33 [i_8] = 1;
        arr_34 [i_8] = ((1 << (((arr_31 [i_8] [15]) - 50200))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        arr_42 [i_10] [i_9] [i_10] [i_11] = ((2147483647 ? (((arr_28 [i_8]) + 5)) : (65408 % var_2)));
                        arr_43 [i_8] [i_10] [17] = -var_9;

                        for (int i_12 = 4; i_12 < 17;i_12 += 1)
                        {
                            arr_47 [i_10] [i_9] [i_10] = (arr_40 [i_9]);
                            var_26 = (var_2 / var_11);
                        }
                        arr_48 [i_10] [9] [1] = -24;
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 17;i_14 += 1)
                        {
                            {
                                var_27 = (max(var_27, (((var_10 != var_14) | (arr_28 [i_13 - 1])))));
                                var_28 = (max(var_28, (((arr_46 [i_8] [9] [17] [i_13] [i_14 - 2]) << (((arr_46 [i_8] [i_9] [i_10] [i_13 + 1] [i_14]) - 2844002357))))));
                            }
                        }
                    }
                }
            }
        }
        arr_53 [i_8] = (((-8223435395603350763 / 101) ? var_3 : (1 <= 22884)));
    }
    #pragma endscop
}
