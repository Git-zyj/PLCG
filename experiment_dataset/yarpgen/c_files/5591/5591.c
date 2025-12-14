/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 14;
        arr_3 [i_0] [i_0] = (((arr_0 [17] [0]) ? (((min(6668100154427197177, 31)) - (((arr_0 [i_0] [6]) & (arr_1 [i_0] [i_0]))))) : var_0));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 18;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_2] [1] = ((((((arr_4 [12]) || (((-5974301686998342284 & (arr_10 [12] [i_2] [i_3 - 1]))))))) | (((-7933246747061895691 == (max((arr_11 [i_1] [i_2] [i_3 + 2] [13]), (arr_0 [i_1] [i_2]))))))));
                    arr_14 [7] [i_2] [i_2] [i_2] = (((arr_10 [i_2] [i_3 - 2] [i_3 + 1]) / (arr_10 [i_2] [i_3 - 2] [i_3 + 1])));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = var_1;
                                var_16 = (arr_19 [i_1] [i_1] [i_1] [19] [i_1]);
                                var_17 = var_1;
                                var_18 = (((((((((arr_15 [i_1] [i_1] [i_3] [i_4] [i_4] [8]) % 1))) ? ((26367 ? 743210528 : (arr_5 [i_3]))) : (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (arr_6 [i_1]) : (((arr_16 [i_4 + 1] [i_4 - 1] [i_4] [i_3 - 4] [i_3]) & var_13))));
                            }
                        }
                    }
                }
            }
        }
        arr_21 [i_1] [9] = var_3;
        arr_22 [i_1] [i_1] = var_8;

        /* vectorizable */
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            arr_25 [i_6] [i_6] [i_6] = (arr_7 [1] [1] [i_6]);

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                arr_28 [i_7] [i_6] [i_6] [i_7] = var_11;
                var_19 = ((!(arr_15 [4] [i_6] [i_7] [i_7] [i_1] [i_1])));
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    arr_35 [4] [i_6] [i_8] [i_6] [i_1] = (((arr_7 [i_1] [i_6 + 2] [i_8]) & (~743210528)));
                    arr_36 [i_1] [i_6] [i_6 + 1] [15] [i_6] [i_9] = (((arr_6 [i_1]) != (arr_10 [i_6 + 2] [i_6 + 2] [i_6])));
                    arr_37 [i_6] [i_6 - 1] = ((~(arr_29 [i_6] [i_6] [i_6 - 1] [i_6])));

                    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                    {
                        arr_41 [17] [i_6] [16] [i_8] [i_6] [17] = (arr_27 [2] [i_6 - 1] [i_6] [i_10]);
                        arr_42 [i_1] [i_6] [1] [i_6] [9] [i_6] [6] = ((~((((arr_9 [i_9] [i_10]) || (arr_34 [i_1] [i_1]))))));
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                    {
                        arr_46 [i_6] [i_9] [i_6] [i_6] [i_6] = (((arr_5 [17]) - ((743210528 ? (arr_19 [i_11] [i_9] [i_8] [i_6] [i_1]) : (arr_24 [i_6])))));
                        arr_47 [i_1] [i_1] [i_6] = ((var_0 / ((~(-127 - 1)))));
                    }
                    arr_48 [i_6] [i_6] [i_8] [i_8] [i_9] = var_11;
                }
                var_20 = (((arr_16 [i_1] [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 + 2]) < 0));
            }
        }
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            var_21 = -7933246747061895691;
            arr_51 [i_1] = (min((!var_8), ((-(arr_10 [i_1] [i_1] [i_1])))));
            arr_52 [i_12] = ((((((arr_24 [i_1]) ? var_3 : (arr_44 [i_1] [i_1] [4] [i_1] [2] [i_1]))) == (arr_38 [i_1] [i_12]))) ? (((~(arr_38 [i_1] [i_12])))) : ((+(((arr_29 [14] [i_12] [18] [i_1]) / (arr_18 [1] [i_12]))))));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            arr_55 [i_13] = ((!(arr_31 [2] [i_1] [i_1])));
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 19;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 17;i_15 += 1)
                {
                    {
                        arr_62 [i_14] = 666021208;
                        var_22 = (((arr_7 [i_14 + 1] [1] [i_15 - 1]) / (arr_7 [i_14 - 2] [i_15 - 2] [i_15 - 2])));
                        arr_63 [i_1] [i_14] [i_14 - 2] [i_14 - 2] = (((-127 - 1) | var_9));
                    }
                }
            }
        }
    }
    #pragma endscop
}
