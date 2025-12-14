/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((((((4294967282 ? 18446744073709551613 : 3))) && -var_13)))));
    var_16 |= (min(58356, 2832092645430488957));
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (min(var_18, ((min((min(((var_12 ? 13 : var_1)), var_14)), (arr_1 [17]))))));
        var_19 = (((arr_0 [i_0]) << ((((var_4 ? (((max(var_14, 187)))) : var_9)) - 6417))));
    }
    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_20 = 28376;
                        var_21 = (((arr_10 [i_1] [i_2] [2] [i_4]) == -78));
                        var_22 = -124;
                    }
                }
            }
            var_23 = ((~(arr_3 [i_1 - 4] [i_1 - 4])));
            arr_15 [i_1] [i_2 - 1] |= ((((75029860 && (arr_13 [i_2] [i_2] [i_1 - 4]))) ? (arr_12 [i_1 - 3] [3]) : var_12));
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_24 = (min(var_24, (((arr_4 [i_1 + 1]) ? (arr_11 [3]) : (arr_17 [i_1])))));

            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                var_25 = ((((((arr_4 [3]) - -119))) ? 18446744073709551613 : var_11));
                var_26 -= ((((((arr_5 [i_1] [i_6 + 1]) ? (arr_21 [i_1]) : var_4))) ? (((arr_13 [3] [3] [i_6]) ? (arr_16 [4]) : 65535)) : 0));
                var_27 = (((arr_7 [i_1 - 3] [i_1 - 2] [i_6 + 1]) ? (arr_8 [i_1 - 3]) : (var_9 != var_3)));
                var_28 = (((arr_16 [i_1 + 2]) ? (arr_13 [i_1] [i_6 - 1] [i_6 - 1]) : ((63114 ? (arr_20 [10] [i_5] [14] [14]) : var_9))));

                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    arr_24 [i_6] [i_6] [i_6] [i_5] [i_6] [i_1] = 1;

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_28 [i_6] [4] [i_7 - 1] [i_6] [i_6] [i_5] [i_6] = var_3;
                        var_29 |= (arr_5 [i_6] [i_5]);
                    }
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        var_30 = arr_18 [i_5];
                        var_31 ^= 4294967292;
                        arr_32 [i_6] [i_5] = ((64 ? 120 : ((92 ? 0 : -120))));
                        var_32 -= var_3;
                    }
                }
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    var_33 = var_3;
                    var_34 = (((arr_18 [i_6]) * 13));
                    var_35 = (arr_34 [i_6] [i_6] [i_6 + 1] [i_6 + 1] [i_6] [i_6]);
                }
                for (int i_11 = 2; i_11 < 16;i_11 += 1)
                {
                    var_36 = (((arr_25 [i_1] [i_5] [i_6] [i_6] [i_5] [i_1]) ? var_14 : 7203280880815840552));
                    arr_37 [i_6] [i_11] [1] [i_5] [i_6] [i_6] = ((0 ? (arr_9 [i_1 + 1] [i_1 - 3] [8] [i_11 + 1]) : (arr_9 [16] [i_1 - 2] [i_1 - 2] [i_11 - 1])));
                    arr_38 [i_1] [i_6] [16] [7] = arr_1 [i_11];
                }
            }
            for (int i_12 = 1; i_12 < 16;i_12 += 1)
            {
                var_37 |= (arr_8 [i_12]);
                arr_42 [i_5] = (((arr_22 [1] [i_12 - 1] [1] [i_12] [i_12 - 1] [i_5]) / (arr_17 [i_1 + 1])));
            }
            for (int i_13 = 2; i_13 < 15;i_13 += 1)
            {
                arr_46 [i_1] [i_1] = 187;
                var_38 = (!118532770);
                var_39 ^= 4152987555;
                arr_47 [i_13] [i_5] [i_13] = (arr_20 [i_13 - 1] [i_5] [i_1 - 3] [i_1 - 3]);
            }
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 3; i_15 < 14;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        {
                            arr_56 [3] [i_16] [i_1 - 4] [i_1 - 4] [i_14] [i_5] [i_1 - 4] = ((58828 ^ (~3142)));
                            var_40 |= -var_13;
                        }
                    }
                }
                arr_57 [i_5] = 13;
            }
        }
    }
    #pragma endscop
}
