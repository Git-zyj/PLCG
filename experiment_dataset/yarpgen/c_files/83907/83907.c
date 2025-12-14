/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (~-91);

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_1] = -956883493;
            var_11 = ((+((82 ? (arr_3 [i_0] [i_0] [i_1]) : 971926802))));
            arr_6 [i_1] = -3590800245;
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_12 = (-25 == 21);
            arr_10 [i_0] [i_2] = -8;
            arr_11 [i_0] [i_2] = 1;
            var_13 = (((arr_8 [i_2] [i_0]) != -var_7));
            var_14 = ((704167067 ? (arr_8 [i_2] [i_0]) : (((-978993542 + 2147483647) >> 1))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        var_15 = (1 <= 704167051);
                        var_16 = var_0;
                        var_17 = arr_21 [i_0] [i_0] [1] [i_5];
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        var_18 = ((84 <= 262140) ? -1255065665 : (((arr_0 [i_0]) ? (arr_14 [i_0] [i_0] [i_6]) : 124)));
                        arr_30 [i_3] [i_7] [i_6] [i_7] = (!3590800249);
                        var_19 = 1;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_20 = (arr_31 [i_8]);
        var_21 = var_9;
        arr_34 [i_8] = ((!(arr_32 [i_8])));
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            {
                arr_39 [i_10] [10] [i_10] = ((((((var_2 + 2147483647) >> (var_8 - 1166667964)))) ? ((((-1699208400 > 3) & (~var_4)))) : 704167047));

                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    var_22 ^= (min(((max(var_1, 1))), 1));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                arr_46 [i_10] [4] [4] [i_10] [i_11] [4] [i_13] = min((1401635143 >> 24), ((min(var_4, (arr_45 [i_9] [i_10] [i_10] [i_9] [i_13])))));
                                arr_47 [i_9] [i_10] [i_11] [i_12] [i_10] [i_13] = (arr_40 [i_9]);
                                var_23 = ((((32256 && var_3) == (((arr_37 [i_10] [i_10] [i_11]) / (arr_42 [i_10]))))));
                                var_24 = (min(((4294967292 ? 1058587326 : -93)), -85));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_25 = var_9;
                        var_26 = ((1461619462 ? 1 : ((2480425684 ? -1045355784 : 3806698876))));
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        arr_53 [i_11] [i_10] [i_11] [i_11] [i_11] [i_11] = var_3;
                        arr_54 [i_15] [i_10] [i_11] [i_15] [i_11] [i_10] = (((arr_50 [i_9] [i_9] [i_11] [i_15] [i_10] [i_10]) ? (arr_50 [i_9] [9] [9] [i_9] [i_9] [i_9]) : 3590800264));
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {

                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            var_27 = (max(var_27, (~3590800229)));
                            var_28 ^= ((-437646105 ? (arr_60 [i_17] [i_10] [i_9] [i_16] [i_17] [i_16] [i_10]) : -704167018));
                        }
                        arr_61 [i_9] [i_10] [17] [i_10] = (arr_41 [i_9] [1]);
                    }
                }
                /* vectorizable */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    var_29 = (min(var_29, ((((var_2 | 3590800230) | (arr_41 [i_9] [i_10]))))));
                    var_30 = (!123);
                }
                /* vectorizable */
                for (int i_19 = 0; i_19 < 24;i_19 += 1)
                {
                    arr_67 [i_10] [i_10] [i_10] = var_9;
                    var_31 = (max(var_31, var_6));
                    arr_68 [i_9] [i_10] [i_19] = (((arr_66 [i_9] [i_10]) >= 0));
                }
                arr_69 [17] [i_10] = ((min(var_4, (arr_60 [i_9] [i_9] [i_9] [i_10] [i_10] [i_10] [i_10]))));
            }
        }
    }
    var_32 = 1;
    #pragma endscop
}
