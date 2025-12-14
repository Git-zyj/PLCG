/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_3 && (var_0 || 743769250)))) & var_6));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_13 = (max(var_13, -9029740085472044010));
            var_14 = (max(var_14, 96));
            arr_5 [i_0] [i_0] = 1;
        }
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_15 *= (max(3290346929520807362, var_6));
            arr_10 [i_0] [i_0] [9] = (!124);
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_16 ^= (max(((max(43, var_9))), ((~(min(var_3, -56))))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                arr_16 [i_0] [i_3] [i_0] = (arr_3 [i_0] [i_0] [i_0]);

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_17 = ((var_7 / (arr_20 [i_0] [19] [i_4] [i_4] [i_5] [i_0])));
                        arr_22 [i_0] = ((var_1 - (arr_0 [i_3] [i_4])));
                    }
                    var_18 = (max(var_18, var_10));
                    arr_23 [i_0] [i_3] [7] [i_5] = ((var_0 * (arr_21 [i_0] [0] [i_0] [i_4] [i_5] [i_5] [i_5])));
                    var_19 = ((-(arr_11 [i_0] [i_3] [i_4])));
                }
                arr_24 [i_0] [i_3] = (arr_4 [i_0]);
            }
            arr_25 [i_0] = ((6714295145427336683 % (max((arr_1 [i_0]), (57 + -51)))));
            var_20 = (min(var_20, ((max((var_4 <= 984591286880375137), (min(var_0, 9628330153891345302)))))));
        }
        arr_26 [i_0] [i_0] = var_6;

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_21 = (max(var_21, 70368677068800));
            arr_29 [i_0] [15] = (min(43, (arr_2 [i_0] [i_7])));
        }

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            arr_41 [i_0] [5] [i_9] [i_10] [20] = (min(((((arr_31 [i_0] [i_10 + 1]) + 0))), (-561246459419178071 + var_11)));
                            arr_42 [i_0] [i_0] = var_0;
                            var_22 += (arr_36 [i_11] [i_10 - 1] [1] [i_10 - 1]);
                        }
                    }
                }
            }
            var_23 = ((((min((arr_28 [1] [i_0]), 185)) + ((max((arr_14 [18] [i_8] [i_8] [i_0]), 266287972352))))));
            arr_43 [i_0] [i_0] = (((((min(var_6, (arr_36 [i_0] [7] [i_8] [i_0]))))) ^ (max(174, (arr_35 [i_0] [i_0] [i_8] [i_8])))));
            arr_44 [i_0] [i_8] [i_8] = ((18046510354478905745 % (min((1 | 36), 3758096384))));
        }
        arr_45 [i_0] = 1590079385382788623;
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        arr_48 [19] = 9223372036854775792;
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 23;i_14 += 1)
            {
                {
                    var_24 = (max(var_24, (arr_46 [i_13])));

                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        var_25 = (max(var_25, ((((((((min((arr_50 [i_12]), (arr_51 [i_12] [i_12] [i_12]))) <= (var_11 < 20528))))) <= (arr_50 [17]))))));
                        arr_56 [i_15] = (((max(-6213011614640879657, (min((arr_54 [i_12] [i_13] [i_14] [i_15 - 1]), 6312249721650203718)))) * var_11));
                        var_26 = ((var_9 > (var_4 & var_6)));

                        for (int i_16 = 3; i_16 < 22;i_16 += 1)
                        {
                            var_27 -= -6312249721650203732;
                            var_28 ^= ((-(arr_49 [i_14 + 1])));
                        }
                        /* vectorizable */
                        for (int i_17 = 1; i_17 < 24;i_17 += 1)
                        {
                            arr_63 [i_15] = 5743819101898606412;
                            var_29 = (-51 + var_6);
                            arr_64 [i_12] [i_13] [i_15] [i_15 - 1] [i_17] = 955896482;
                            var_30 = ((arr_60 [i_13] [23]) >> (arr_60 [i_15 - 1] [1]));
                        }
                    }
                    arr_65 [i_12] [23] [i_13] [i_14 + 2] = (max((max((arr_51 [i_14 - 2] [i_14 + 2] [i_12]), (arr_51 [i_14 - 1] [i_14 + 2] [i_14]))), -10272));
                    var_31 ^= (1 / ((max(1, 2296835809958952960))));
                }
            }
        }
    }
    var_32 = (max(var_32, ((((var_1 & ((min(-52, 126)))))))));
    #pragma endscop
}
