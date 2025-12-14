/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (((((arr_6 [i_2] [i_2] [i_1] [i_0]) ^ (arr_0 [i_0])))) ? (37 + 32539) : (arr_5 [i_0] [i_0]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [0] [i_2] [0] = ((((min(-16641, 3))) ? ((-(arr_9 [4]))) : (arr_0 [i_2])));
                                var_19 = ((((min(-71, (arr_10 [i_0] [i_0] [i_0] [i_2] [i_0])))) != ((var_9 | (arr_1 [i_1])))));
                                var_20 = (((arr_11 [i_0] [i_0] [i_2] [1] [i_0]) * (!var_4)));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 3; i_5 < 10;i_5 += 1)
    {
        var_21 = (((((arr_5 [i_5 + 2] [i_5]) + 9223372036854775807)) << (((((arr_5 [i_5 - 1] [i_5]) + 421170776989878444)) - 1))));
        var_22 = -var_12;

        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            var_23 = (((arr_13 [8] [i_5 - 1] [i_6] [i_6 - 1] [i_6]) ? (arr_13 [6] [i_5 - 1] [5] [i_5] [i_6]) : (arr_13 [i_6] [i_5 - 1] [i_6] [i_5 - 1] [i_6])));
            var_24 = (arr_3 [i_5 - 1] [i_5 + 2] [i_6 + 1]);
            var_25 = 0;
            var_26 = -16641;
            var_27 = 7;
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            arr_24 [0] [i_7] = -var_12;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 8;i_9 += 1)
                {
                    {
                        var_28 = (var_5 ? (arr_26 [i_5] [i_8]) : (arr_4 [11] [2] [i_9]));
                        var_29 |= var_3;

                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            var_30 = (arr_20 [i_8]);
                            var_31 = ((!(arr_3 [i_5 - 1] [i_7] [i_8])));
                            var_32 = ((var_2 ? ((var_5 ? var_0 : (arr_3 [i_5] [i_5] [i_5 - 1]))) : ((((arr_4 [1] [1] [1]) != (arr_10 [i_5] [i_5] [i_5 + 2] [i_8] [i_5 + 1]))))));
                            var_33 = (0 <= var_0);
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
    {
        var_34 = ((((var_15 ? (~var_14) : ((~(arr_33 [1] [i_11]))))) != (arr_33 [i_11] [i_11])));
        var_35 = (((((arr_33 [i_11] [i_11]) + (arr_32 [i_11]))) * (arr_33 [i_11] [i_11])));
    }
    for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_13 = 1; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_16 = 2; i_16 < 20;i_16 += 1)
                        {
                            var_36 = ((var_15 ? (18446744073709551615 != var_7) : (arr_45 [i_14] [i_15] [i_14] [i_13] [i_14])));
                            var_37 = (arr_32 [1]);
                            var_38 = var_14;
                        }

                        for (int i_17 = 0; i_17 < 21;i_17 += 1) /* same iter space */
                        {
                            var_39 = (arr_38 [i_12] [15]);
                            var_40 = ((((((arr_42 [i_13 + 3] [i_13 + 3] [i_13 + 4] [i_13 + 2]) << (var_5 + 123)))) && ((((min(-862736344, (arr_36 [i_17]))) / -var_1)))));
                            var_41 = 0;
                            arr_48 [i_17] [i_14] [1] [1] [i_14] [1] = (max(((32539 * ((min(var_13, var_10))))), ((((arr_42 [i_12] [i_12] [i_15] [i_17]) != ((min((arr_45 [i_12] [i_13] [i_13] [i_13] [i_14]), -6))))))));
                        }
                        for (int i_18 = 0; i_18 < 21;i_18 += 1) /* same iter space */
                        {
                            var_42 = (((var_9 ? 3 : ((~(arr_38 [i_13] [i_15]))))));
                            var_43 = (min(((((arr_37 [i_12] [i_13 + 4] [i_13 + 1]) || (arr_37 [i_15] [i_13] [i_13 - 1])))), (min((arr_37 [i_18] [i_15] [i_13 + 3]), (arr_37 [i_15] [i_15] [i_13 + 1])))));
                            var_44 = (((arr_37 [i_12] [i_12] [i_13 + 3]) ? 862736344 : 127));
                        }
                        var_45 = (arr_39 [i_14] [i_15]);
                        var_46 = -var_2;
                    }
                }
            }
        }
        var_47 = (min(var_47, -1513354507));
    }
    #pragma endscop
}
