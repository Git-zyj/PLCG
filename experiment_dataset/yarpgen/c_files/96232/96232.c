/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= -var_2;
    var_11 |= var_4;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_12 = (var_6 / 42747);
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_13 -= var_5;
        var_14 ^= var_6;
        arr_5 [i_1] = (((arr_4 [i_1 + 2]) ? ((var_3 ? var_6 : 124)) : (arr_4 [i_1 + 1])));
        var_15 |= var_6;
    }

    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        arr_8 [i_2] = ((((var_3 ? (arr_1 [i_2 - 3] [i_2 + 1]) : (!var_3))) << (((((((((-66 / (arr_4 [1])))) ? (-9223372036854775807 - 1) : (9223372036854775807 | -60))) - -9223372036854775804)) + 29))));
        var_16 += (arr_6 [i_2] [i_2]);
        var_17 += (15 == var_2);
    }
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        var_18 ^= -126;

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_19 = -59;
            var_20 += (((var_8 ? var_6 : (arr_11 [i_4]))));

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_21 = ((((58354 / (((!(arr_9 [i_7])))))) & ((var_9 ? var_8 : (arr_12 [i_3] [i_3])))));
                            arr_21 [i_3] [i_3] [2] [i_6] [i_7] = var_4;
                        }
                    }
                }
                arr_22 [i_3] [i_3] [i_3] = (max((!var_5), (min((arr_3 [i_3]), var_1))));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                arr_27 [i_3] = (arr_24 [i_3] [i_4] [i_4] [i_3]);
                arr_28 [i_3] = (((((-(arr_7 [i_3 + 2])))) ? (((!(arr_7 [i_3 - 1])))) : -45));
                var_22 ^= 1;
                var_23 -= ((((((arr_9 [i_3 + 2]) == 127))) % (124 / -84)));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                {
                    arr_36 [i_3] [i_3] [i_3 + 2] [i_3] = 9223372036854775807;

                    for (int i_11 = 1; i_11 < 7;i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_3 + 1] [i_3] [i_3 - 1] [i_10] [i_11] = ((-(arr_38 [i_3] [i_4] [i_3] [7] [i_11] [i_3 + 1] [i_10])));
                        arr_40 [i_11] [i_11] [6] [i_11] [i_3] = (arr_29 [i_9] [i_10] [i_3]);
                        var_24 = (16753777833901239079 != 7);
                        arr_41 [i_3] [i_3] = var_4;
                    }
                    for (int i_12 = 1; i_12 < 7;i_12 += 1) /* same iter space */
                    {
                        var_25 ^= ((-(~var_7)));
                        var_26 ^= (arr_31 [i_3 + 2] [i_3] [i_3 + 2] [4]);
                    }
                    arr_45 [i_3] = ((!(arr_35 [i_3 + 1] [i_3 + 1])));
                }
                for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
                {
                    var_27 = (min(var_27, var_8));
                    arr_50 [i_4] [i_4] [i_9] [i_3] [i_4] = (((arr_44 [i_3] [i_9] [i_9] [i_3] [2] [7] [i_13]) * (((!(arr_10 [i_13]))))));
                }
                for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
                {

                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        var_28 ^= var_6;
                        var_29 = (min(var_29, (arr_49 [i_4] [4] [4] [4])));
                    }
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        var_30 = (min(var_30, -56));
                        var_31 ^= (((arr_13 [i_3 + 2] [i_3 - 1]) ? 54 : (arr_13 [i_3 + 2] [i_3 - 1])));
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_32 = (arr_13 [4] [i_9]);
                        var_33 = 67;
                        var_34 = ((((arr_30 [i_3]) + (arr_59 [i_3] [0] [i_4] [i_9] [i_14] [i_17]))));
                        var_35 ^= ((((var_1 * (arr_4 [i_9]))) * (arr_58 [i_3] [3] [i_9] [5] [i_9] [i_14] [i_17])));
                        var_36 += ((-(arr_47 [i_4])));
                    }
                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        var_37 *= (arr_32 [i_4]);
                        var_38 = (((arr_20 [i_3] [i_4] [i_4] [7] [i_9] [i_14] [i_18]) ? -59 : (arr_24 [i_3 - 1] [i_4] [i_18] [i_3])));
                    }
                    var_39 = (arr_58 [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_3 + 1]);
                    var_40 ^= (!-433107339549103519);
                }
                var_41 = ((~(arr_9 [i_3 - 1])));

                for (int i_19 = 0; i_19 < 10;i_19 += 1)
                {
                    var_42 = ((~(-62 | 1)));
                    var_43 += 155;
                }
                arr_72 [4] [i_3] [i_9] = var_3;
            }
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 0;i_20 += 1)
    {
        var_44 = (arr_73 [i_20]);
        var_45 = 0;
    }
    for (int i_21 = 0; i_21 < 22;i_21 += 1)
    {
        var_46 = (max(var_46, (!var_3)));
        var_47 = ((min((arr_77 [i_21]), (arr_75 [i_21]))));
        var_48 = (max((arr_78 [i_21]), ((((arr_76 [i_21] [i_21]) | (arr_78 [i_21]))))));
        var_49 = (arr_76 [i_21] [i_21]);
    }
    #pragma endscop
}
