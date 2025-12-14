/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_11 = (((4294967295 ? (((-(arr_3 [i_0]))) : ((0 ? var_2 : -2545431094059711825))))));
        arr_4 [i_0] = ((arr_2 [i_0 - 1]) ? var_7 : ((var_2 ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 2]))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                        {
                            arr_15 [7] [i_3] [i_0] [i_0] [i_1] [7] = ((1 / ((896 ? (arr_5 [i_0] [i_0 - 1]) : var_3))));
                            var_12 = (((((18446744073709551594 ? var_7 : (arr_2 [i_0])))) ? (max((arr_3 [i_0]), (((arr_6 [i_0]) ? var_9 : var_3)))) : (arr_10 [i_0] [i_1] [i_1])));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((~(arr_11 [i_0] [i_1])));
                            var_13 = (((((arr_1 [i_1]) * 18446744073709551609)) == -4294967295));
                            arr_17 [i_2] [i_0] = (arr_2 [i_2]);
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_2] [i_5] [i_0 - 1] = ((((4294967295 < 15) ? (41417 >= 4194303) : var_6)));
                            arr_21 [i_0] [i_3] [i_3] [i_3] [i_0] [i_2] = var_1;
                            var_14 = (arr_3 [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_15 = var_7;
                            var_16 = (((((1 << (16153 - 16141)))) && ((min((arr_7 [i_0]), var_4)))));
                        }
                        arr_24 [i_0] = ((((max((arr_2 [i_0 - 2]), 31))) + (130023424 - 18446744069414584320)));
                        var_17 = (min(((var_6 / (((arr_5 [i_0] [i_0]) ? (arr_1 [i_2]) : var_7)))), (arr_5 [i_0] [i_2])));
                    }
                }
            }
            arr_25 [i_0] [i_0] = var_4;
            arr_26 [i_0] = -16356;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_29 [i_7] [i_0] [i_0 - 2] = (arr_5 [i_0] [i_0]);

            for (int i_8 = 3; i_8 < 21;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    arr_34 [8] [i_7] [i_7] [i_7] [i_0] [i_7] = var_5;
                    var_18 = ((((arr_6 [i_0]) || var_2)) ? ((130023402 - (arr_23 [i_7] [i_7]))) : (13 > 255));
                    arr_35 [i_0] = (((arr_32 [i_0] [i_0] [i_0 - 2] [i_8 - 3] [i_9]) && (arr_32 [15] [16] [i_0 - 2] [i_8 - 2] [i_9])));
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_19 *= (((var_9 + 2147483647) >> (((arr_30 [i_8] [i_8 - 1] [i_8] [i_8 - 2]) - 8282))));
                        arr_41 [i_0] [9] [i_0] [i_0] [i_0] [i_10] = (((arr_39 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 2]) + (arr_9 [1] [i_0 - 2] [i_7] [i_7])));
                    }
                    for (int i_12 = 3; i_12 < 20;i_12 += 1)
                    {
                        var_20 = 93;
                        arr_44 [i_0] [11] [i_12] = (arr_28 [i_0] [i_0 - 2]);
                        arr_45 [i_0] [i_7] [i_8 - 2] [i_10] [i_12 - 2] = var_3;
                        arr_46 [i_0] [i_7] [i_0] = ((((var_8 ? var_7 : (arr_33 [i_0 - 1] [i_0] [i_0 - 1] [i_12]))) + -12));
                        arr_47 [i_0] [i_0] = (arr_32 [i_0] [i_0] [i_8] [i_0] [i_0 - 2]);
                    }
                    arr_48 [i_10] [i_10] [i_0] [i_0] [i_7] [i_0] = 0;
                }
                arr_49 [i_7] [i_7] [i_0] = (1 <= ((((arr_5 [i_0] [i_0]) <= var_7))));
            }
            arr_50 [i_0] [i_0] = (((((61440 ? 1 : var_8))) & (2285351877 * 2161727821137838080)));
        }
    }
    var_21 = 4294967287;
    var_22 = ((((var_8 >> (var_2 - 6242049006386420056))) <= (min((min(40655, var_1)), ((((var_3 + 2147483647) << (((var_3 + 27) - 3)))))))));
    #pragma endscop
}
