/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~((((max(var_11, 32743))) ? (((min(-100, -70)))) : (min(64833, var_8))))));
    var_15 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
        var_16 = (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])));
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = (26671 ? 0 : 38858);
            arr_8 [i_0] [i_1] [i_0] = -22695;
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_17 = ((75 ? 4294967295 : var_4));
                            arr_18 [i_0] [i_1] [i_2] [i_3 + 1] [i_0] [i_0] = (((1 % 1036448246) > (arr_10 [i_0] [i_3 + 1] [i_0])));
                            arr_19 [i_2] [i_2] = (((31064 + 22716) ? var_6 : ((22687 ? var_6 : var_12))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_22 [i_5] [i_5] = (arr_2 [i_5]);
            var_18 = ((-(arr_2 [i_0])));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                var_19 = (((4611686018427387904 <= 17749) ? -1 : (arr_6 [i_7])));
                arr_30 [i_7] [i_6] [i_7] = 423926121;
            }
            for (int i_8 = 2; i_8 < 9;i_8 += 1)
            {
                arr_33 [i_8] [i_6] [i_8] = ((4131051098599686674 ? (arr_26 [i_6] [i_6]) : ((1 ? -61 : 60119))));
                var_20 = (arr_29 [i_0] [i_6] [i_8] [i_8 + 2]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_21 = ((534771534 ? (-9223372036854775807 - 1) : (arr_32 [i_0] [i_6])));
                            var_22 = (((-73 ? 18446744073709551615 : 1)));
                        }
                    }
                }

                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    arr_42 [i_8] [i_8] [i_8] [i_11] = var_7;
                    var_23 = 14;
                    var_24 = (arr_28 [i_11] [i_8 + 1] [i_6] [i_0]);
                }
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                var_25 = (var_4 % var_8);
                arr_46 [i_6] [i_0] = (((arr_15 [i_12]) != (((((arr_11 [i_0] [i_0]) + 2147483647)) << (939524096 - 939524096)))));
                arr_47 [i_0] [i_0] = (((arr_21 [i_0] [i_0]) % (arr_21 [i_6] [i_12])));
                arr_48 [i_0] [i_6] [i_12] = -54;
            }
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                arr_53 [i_13] = (((arr_10 [i_0] [i_6] [i_13]) ? (arr_10 [i_0] [i_6] [i_13]) : (arr_2 [i_6])));
                arr_54 [i_0] [i_6] = var_8;
            }

            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {
                var_26 = ((~(arr_16 [i_0] [i_0] [i_0] [i_6] [i_6] [i_14] [i_14])));

                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    arr_61 [i_14] = (arr_26 [i_0] [i_6]);
                    arr_62 [i_0] [i_0] [i_14] [i_15] [i_6] = ((31076 ? (-9223372036854775807 - 1) : 1));
                }
            }
        }
    }
    var_27 = var_2;
    var_28 = ((-var_10 % ((18431131442747923521 ? 1585119831533592450 : var_8))));
    #pragma endscop
}
