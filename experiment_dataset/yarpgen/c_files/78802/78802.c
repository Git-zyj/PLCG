/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!-405303810);
    var_14 = -var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_15 &= (arr_0 [i_0]);
        arr_4 [i_0] = ((-405303807 ? 786184372 : 3508782924));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_13 [i_0] [5] [i_0] [i_3] [i_2] = (-123 * 12);
                        var_16 = (min(var_16, var_12));

                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_2 + 3] [i_2] [i_4] = (~8464);
                            arr_17 [i_0] [i_2] = (arr_6 [i_1]);
                            var_17 = 19883;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_18 &= ((~(arr_10 [i_2] [i_3] [i_3] [i_0])));
                            var_19 = (max(var_19, (((~(arr_12 [i_2 + 2] [i_2 - 1] [i_2] [i_5]))))));
                            var_20 = 3508782923;
                            var_21 = (((arr_6 [i_2 - 3]) ? (arr_9 [i_0] [i_2 - 1] [i_2]) : (arr_6 [i_2 - 1])));
                        }
                    }

                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_27 [i_0] [i_1] [i_2] [i_6] [15] = ((1 ? (arr_9 [i_0] [i_2 - 3] [i_2]) : (-9223372036854775807 - 1)));
                            arr_28 [i_2] [i_1] [i_2] = var_4;
                        }
                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            var_22 ^= ((((((arr_25 [i_0] [i_6] [i_8]) ? (arr_5 [i_8]) : (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_29 [i_8 - 1] [i_6 + 2] [i_2 + 3] [i_1]) : (arr_2 [i_2 + 1])));
                            var_23 = ((((7000108371026797226 ? 1 : 3508782924)) <= 3508782924));
                        }
                        arr_31 [i_2] [i_2] = 1;
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        arr_35 [i_0] [i_1] [i_1] [i_0] [i_2] [i_9] = (arr_22 [i_2] [i_2 + 1] [i_2] [i_2 - 2] [i_2 + 2]);
                        var_24 = var_5;
                        arr_36 [i_2] = (arr_15 [i_1] [i_1] [i_1] [i_1] [i_2]);
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        arr_39 [i_0] [i_1] [i_10] [13] [i_2] [i_2] = (arr_33 [i_0] [i_0] [i_0] [i_0]);

                        for (int i_11 = 1; i_11 < 15;i_11 += 1)
                        {
                            var_25 = (((((786184372 ? var_12 : var_10))) ? 0 : ((8973 ? 11860 : 16730945913698507819))));
                            var_26 = var_8;
                        }
                    }
                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {

                        for (int i_13 = 1; i_13 < 13;i_13 += 1)
                        {
                            var_27 = (((arr_43 [i_0] [i_1] [i_12 + 1] [i_12]) ? -11865 : (arr_25 [i_0] [i_1] [i_12 + 1])));
                            arr_46 [i_2] [i_12] = ((arr_33 [i_2 - 3] [i_2 + 3] [i_12 + 1] [i_13 + 1]) ? ((-(arr_8 [i_0] [i_0] [i_0]))) : (arr_22 [i_2] [i_2] [i_2 - 2] [15] [i_2]));
                            var_28 = (((arr_10 [i_0] [i_1] [i_2] [i_13]) <= (arr_10 [i_13 + 2] [i_2] [i_2] [i_1])));
                        }
                        var_29 = ((var_5 ? (arr_29 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1]) : (arr_2 [i_0])));
                    }
                }
            }
        }
        arr_47 [i_0] = (arr_32 [i_0]);
        var_30 = (arr_7 [i_0]);
    }
    for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
    {
        var_31 = arr_32 [i_14];
        var_32 = 3073820765;
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
    {
        arr_53 [i_15] = ((405303810 ? 1 : 1445616667));
        arr_54 [i_15] = -11869;
        var_33 = var_3;
    }
    #pragma endscop
}
