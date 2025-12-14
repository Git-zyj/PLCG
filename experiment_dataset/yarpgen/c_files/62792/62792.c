/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((((30 + ((-10 ? 7 : 31416))))) - (max(((var_9 ? 10 : var_8)), (-1961528949 < var_11))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (min(var_14, (((-(arr_7 [i_1]))))));
                    var_17 = (max(var_17, (((((!((max((arr_5 [i_0] [i_1] [i_0]), -8723483431076255307))))) ? (((~((-(arr_4 [i_0])))))) : ((((14560553650634800200 << (var_2 + 150))) & (((((arr_7 [i_0]) == (arr_3 [i_2]))))))))))));
                    arr_9 [i_1] [i_1] [i_2] = ((~(((!((max(-486707867, 54))))))));
                }
            }
        }
        var_18 = (((max((-2147483647 - 1), (arr_1 [i_0]))) | (((arr_0 [i_0]) << (((arr_1 [i_0]) - 150))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = (arr_12 [i_3]);
        arr_14 [i_3] = ((+(((arr_10 [i_3] [i_3]) ? (-9223372036854775807 - 1) : (((((arr_1 [i_3]) < 48))))))));

        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_19 = (max(var_19, ((((((-32767 - (arr_1 [i_3])))) ? (arr_10 [i_5] [i_4]) : ((min(31, (arr_1 [i_3])))))))));
                        var_20 *= 0;
                        var_21 ^= (((arr_16 [i_5] [i_4] [i_5]) % ((~(arr_12 [i_5])))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_22 = (min(var_22, (arr_5 [i_5] [i_6] [i_3])));
                            var_23 = (((arr_20 [i_3] [i_6]) ? (arr_0 [i_5]) : (arr_15 [i_4])));
                            arr_24 [i_4] = (arr_20 [i_6] [i_5]);
                            var_24 = (((var_5 - var_12) ? ((-(arr_12 [i_5]))) : (0 && var_12)));
                            arr_25 [i_4] [i_3] [i_4] [i_4] = -19840;
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            var_25 = (min(var_25, (arr_28 [i_8 - 1] [i_8 + 1] [i_5] [i_8 - 1] [i_8 - 1])));
                            arr_29 [i_3] [i_4] [i_8] [i_8] [i_8 + 1] [i_4] = (((arr_27 [i_3] [i_8 - 2] [i_8 - 2] [i_8] [i_8]) - (arr_27 [i_4] [i_8 - 1] [i_4] [i_4] [i_4])));
                            arr_30 [i_4] [i_4] [i_4] [i_4] [i_4] = (((arr_0 [i_6]) > 2931254152));
                        }
                        for (int i_9 = 1; i_9 < 8;i_9 += 1)
                        {
                            arr_34 [i_4] = (arr_31 [i_3] [i_3] [i_3] [i_3] [i_3]);
                            arr_35 [i_5] [i_3] [i_5] [i_5] [i_9 + 2] |= ((-(max(var_11, (((~(arr_27 [i_9] [i_4] [i_5] [i_4] [i_3]))))))));
                            var_26 = (((arr_28 [i_9 + 1] [i_9 + 1] [i_4] [i_9 + 1] [i_4]) ? ((var_10 / (arr_21 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 + 2] [i_9 + 1]))) : ((max((max((arr_16 [i_3] [i_3] [i_4]), (arr_26 [i_4] [i_4]))), (~var_3))))));
                        }
                    }
                }
            }
            var_27 += (max(((((arr_3 [i_3]) * (arr_3 [i_3])))), (((arr_16 [i_3] [i_3] [i_3]) - (!var_5)))));
            var_28 = (((((arr_20 [i_3] [i_3]) <= ((var_5 * (arr_20 [i_3] [i_4]))))) ? ((139 ? (min(-604727793, (-127 - 1))) : (arr_20 [i_4] [i_4]))) : (((((((arr_11 [i_3] [i_4]) - -63))) < (arr_33 [i_3] [i_4]))))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {
                        var_29 = (min(var_29, (((((!(arr_20 [i_3] [i_3]))) ? (arr_20 [i_4] [i_3]) : (((!(arr_20 [i_3] [i_10])))))))));

                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            arr_44 [i_4] [i_4] [i_4] [i_11] [i_12] [i_10] |= (((arr_33 [i_10] [i_3]) < -443630739));
                            var_30 |= (arr_41 [i_3] [i_3] [i_10] [i_11] [i_3]);
                        }
                    }
                }
            }
            arr_45 [i_3] |= (max(1416022383, (arr_11 [i_3] [i_4])));
        }
        for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
        {
            arr_48 [i_13] = (((((arr_37 [i_3] [i_3] [i_13]) - (arr_37 [i_13] [i_13] [i_3]))) - (((arr_37 [i_3] [i_13] [i_3]) + (arr_37 [i_3] [i_3] [i_3])))));
            var_31 = (max(var_31, ((((((arr_6 [i_3] [i_3] [i_3]) ? -17010 : var_4)))))));
            /* LoopNest 3 */
            for (int i_14 = 1; i_14 < 8;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 7;i_16 += 1)
                    {
                        {
                            var_32 = (max(var_32, var_5));
                            var_33 = (((min((arr_42 [i_13] [i_14 + 2] [i_14 - 1] [i_14 - 1] [i_13]), (((8314 == (arr_7 [i_14])))))) == -1640920305));
                        }
                    }
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 21;i_17 += 1)
    {
        arr_62 [i_17] = var_1;
        var_34 += 222;
        arr_63 [i_17] = ((+(((arr_59 [i_17] [i_17]) - (arr_60 [i_17] [i_17])))));
        arr_64 [i_17] = var_0;
        arr_65 [i_17] = ((var_6 <= (arr_58 [i_17])));
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 11;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 11;i_19 += 1)
        {
            {
                arr_72 [i_18] = (max(((~((var_12 ? 0 : var_9)))), ((((-2147483647 - 1) == (!var_0))))));
                arr_73 [i_18] = ((((var_13 >> (11031056018975345650 - 11031056018975345610))) * (arr_67 [i_18])));
            }
        }
    }
    var_35 = var_9;
    #pragma endscop
}
