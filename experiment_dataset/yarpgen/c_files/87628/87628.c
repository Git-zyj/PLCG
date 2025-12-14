/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max(var_10, (61764321 | var_0))) <= (((!(~var_5))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = var_2;
        arr_4 [i_0] [i_0] = ((~((((max((arr_1 [i_0]), (arr_2 [i_0])))) ? (arr_0 [i_0]) : ((min(1, var_6)))))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] = (max((((((arr_6 [i_1]) ? 5 : (arr_5 [i_1]))) ^ var_7)), ((((((arr_6 [i_1]) ? 20 : (arr_5 [i_1])))) ? (!14568) : (((arr_6 [i_1]) | (arr_5 [i_1])))))));
        var_12 = ((((-(0 <= 113))) != (arr_7 [i_1])));
        arr_9 [i_1] = ((((min((arr_7 [i_1]), (((var_4 || (arr_5 [i_1]))))))) == var_3));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    {
                        var_13 ^= ((11395 << (35993612646875136 >= 4294967292)));
                        arr_19 [i_2] [i_2] [i_3] [i_4] [i_3] = arr_15 [i_3];
                        var_14 = (arr_7 [i_2]);
                        arr_20 [i_2] [i_2] [i_3] [i_3] [i_4] [i_2] = (arr_16 [i_3 + 1] [i_3] [i_4] [i_3]);
                    }
                }
            }
        }

        for (int i_6 = 4; i_6 < 19;i_6 += 1)
        {
            var_15 = (min(var_15, ((((arr_16 [i_6 - 1] [i_6 - 3] [i_6 - 4] [i_6 - 3]) ? (arr_12 [i_2]) : (arr_18 [i_6 - 1] [i_6] [i_6] [i_6]))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_16 = ((+(((arr_13 [i_2] [i_2] [i_7]) ^ var_7))));
                        arr_29 [i_2] [i_6] [i_6] [i_7] [i_8] [i_8] = -0;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            arr_37 [i_11] [i_6] [i_9] [i_10] [i_9] = (((~53662) >= var_7));
                            var_17 = (((arr_27 [i_2] [i_2] [i_2] [i_9] [i_10] [i_11]) ? (arr_28 [i_6 - 3] [i_10] [i_10] [i_10] [i_10] [i_10 - 1]) : 38618));
                            arr_38 [i_2] [i_6] [i_9] [i_9] [i_6] [i_9] &= ((var_5 ? ((-(arr_30 [i_10]))) : -var_6));
                            var_18 = (min(var_18, ((((arr_17 [i_2] [i_6 + 2] [i_6] [i_10 - 1] [i_10 - 1] [i_10 - 1]) / 4294967276)))));
                            var_19 = (arr_13 [i_2] [i_6] [i_9]);
                        }
                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            var_20 = (((((0 ? (arr_32 [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_32 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? ((4294967295 % (arr_31 [i_6] [i_9] [i_12]))) : (1248504173 | -122)));
                            arr_41 [i_9] [i_12] [i_9] [i_10] [i_12] = (arr_31 [i_2] [i_6] [i_12]);
                        }
                        for (int i_13 = 1; i_13 < 19;i_13 += 1)
                        {
                            arr_44 [i_9] = (((arr_13 [i_2] [i_2] [i_2]) >= (((arr_31 [i_2] [i_2] [i_2]) ? (arr_24 [i_2] [i_2]) : var_10))));
                            arr_45 [i_2] [i_6] [i_9] [i_9] [i_10] [i_13] = (arr_15 [i_9]);
                        }
                        arr_46 [i_9] [i_9] [i_2] [i_2] = ((+(((arr_25 [i_2] [i_10] [i_9] [i_10]) ? (arr_6 [i_9]) : var_10))));
                    }
                }
            }
            arr_47 [i_2] [i_2] [i_6] = (61764321 / 61764323);
        }
        for (int i_14 = 1; i_14 < 20;i_14 += 1)
        {
            arr_52 [i_14] [i_14] [i_2] = (arr_33 [4] [i_14]);
            var_21 = ((((arr_11 [i_14]) ^ 1)));
            arr_53 [i_14] = (((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_14]) ? ((0 ? 1 : 20)) : (~var_4)));
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_22 = arr_42 [i_2] [i_2];
            var_23 = ((var_3 >= var_2) ? ((((arr_54 [i_2] [i_2] [i_2]) / (arr_18 [i_2] [i_2] [i_2] [i_2])))) : 0);
            var_24 = ((((20994 ? (arr_42 [i_2] [i_15]) : (arr_5 [i_15]))) / (arr_15 [4])));
            arr_58 [i_2] [i_2] [i_2] = 8039;
        }
        arr_59 [i_2] = (((!3762035745) ? var_6 : (arr_24 [i_2] [i_2])));
        var_25 = ((((3 ? 20 : -61764327)) + 1));
    }
    #pragma endscop
}
