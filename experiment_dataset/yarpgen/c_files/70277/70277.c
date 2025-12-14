/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [6] [i_0] = ((((arr_1 [i_0] [16]) << (((var_6 + 12698) - 4)))));
        var_14 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [13] [i_1] = -1981013253;
        arr_8 [i_1] = (~var_11);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 19;i_3 += 1)
            {
                {
                    arr_13 [i_2] [0] [i_2] = -var_9;
                    arr_14 [i_1] [i_2] [i_2] = ((~((var_10 ? (arr_9 [i_1] [i_3]) : var_1))));
                    arr_15 [i_1] [i_2] [i_1] = (min(((-var_3 | (arr_11 [i_1] [i_2] [i_2] [i_3]))), (((((arr_12 [i_2]) ? (arr_3 [8]) : (arr_4 [3])))))));
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_15 = ((((((var_12 ? var_11 : var_2)))) & var_8));
        var_16 = (max(var_16, ((max((min(((var_0 ? (arr_12 [1]) : var_11)), ((max((arr_1 [i_4] [i_4]), (arr_3 [i_4])))))), ((var_13 ? ((((arr_11 [i_4] [14] [14] [0]) ^ var_8))) : (((arr_12 [1]) | var_11)))))))));
        var_17 = (min(var_8, ((((arr_16 [i_4]) != (arr_11 [i_4] [i_4] [i_4] [i_4]))))));
        var_18 = var_1;

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_22 [i_4] [i_5] = ((((-1981013253 * (arr_12 [i_4]))) * (arr_12 [i_4])));
            var_19 = (min(var_19, var_13));
        }
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {

            for (int i_7 = 3; i_7 < 12;i_7 += 1)
            {
                var_20 *= var_4;
                arr_28 [1] [i_6] [i_6] [1] &= (min((((((~(arr_21 [i_6] [i_6]))) == (arr_21 [12] [2])))), (arr_4 [0])));

                /* vectorizable */
                for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                {
                    var_21 ^= var_4;

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_22 *= var_1;
                        var_23 ^= (arr_9 [i_4] [i_4]);
                        arr_33 [i_4] [i_8] &= (((arr_31 [i_7 - 3] [i_9] [i_7 + 1] [i_7 - 2] [i_7 - 2]) + (arr_24 [i_8])));
                    }
                    for (int i_10 = 2; i_10 < 11;i_10 += 1)
                    {
                        arr_36 [9] [8] [i_4] [i_7] [i_7] [i_8] [i_10] = (var_2 ? (arr_16 [i_4]) : var_6);
                        arr_37 [i_4] [i_4] [i_6] [i_4] [i_7] [i_8] [i_10] &= (!var_11);
                        arr_38 [i_4] [i_6] [i_7] [i_8] [i_4] = ((((-1981013274 ? (arr_5 [i_4] [i_4]) : var_8))) ? (!var_11) : (((arr_35 [i_10 - 1] [i_6] [i_8] [i_7 + 1] [i_6] [i_4 + 2] [i_4]) ? var_5 : var_4)));
                        arr_39 [i_4] [10] [i_8] [10] [i_7] [i_6] [i_4] = var_4;
                    }
                    for (int i_11 = 2; i_11 < 12;i_11 += 1)
                    {
                        var_24 = (min(var_24, (arr_3 [i_11])));
                        var_25 ^= (((arr_34 [12] [i_11] [i_7 - 3]) - var_8));
                    }
                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        arr_45 [i_12] [i_4] [8] [i_4] [i_4] = (arr_26 [12] [i_6]);
                        arr_46 [i_4] [i_4] [i_7] [10] [i_4] = ((!((((arr_31 [i_4] [i_4] [i_4] [i_4] [3]) ^ var_6)))));
                    }
                    arr_47 [i_8] [i_8] [i_7] [i_8] [i_4] |= (((arr_44 [i_8] [10] [i_6 + 2] [12] [i_6 - 2] [i_8]) - (arr_9 [i_4 + 2] [i_4 + 1])));
                    arr_48 [i_4] [i_6] [i_6] [i_6] [6] [6] = (((var_6 != var_7) && (arr_40 [i_7 - 3] [i_7 - 2] [i_4] [i_7] [i_7 - 1])));
                    var_26 *= (arr_23 [i_4] [i_6 - 2] [i_7 - 3]);
                }
                for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                {
                    arr_51 [i_4] [8] [i_7] [i_6 + 2] [i_4] [i_4] = (((var_10 - var_8) - ((((((arr_0 [i_4] [i_7 - 1]) ? var_8 : var_10)) + (var_12 + var_12))))));
                    var_27 = (arr_26 [i_7 - 2] [i_13]);
                    arr_52 [i_4] [i_6] [i_6] [i_6] = (arr_6 [i_7]);
                    var_28 = (((((var_8 ? -1270970809 : (arr_6 [i_13])))) % (arr_12 [i_4])));
                }
            }
            arr_53 [i_4] [i_6 - 3] = 13557512196531291657;
        }
    }
    for (int i_14 = 1; i_14 < 10;i_14 += 1) /* same iter space */
    {
        var_29 ^= ((((arr_19 [i_14] [i_14 + 2]) - var_10)));
        arr_57 [i_14] [i_14] = ((-((((max(8636960477905946553, 281474976710655))) ? var_5 : (min((arr_49 [i_14 - 1] [i_14] [i_14] [8]), var_4))))));
        arr_58 [i_14 + 3] = (((-(arr_24 [6]))));

        /* vectorizable */
        for (int i_15 = 1; i_15 < 9;i_15 += 1)
        {
            arr_61 [0] = (arr_26 [7] [i_15]);
            arr_62 [i_14 + 2] [i_15] = var_2;
            arr_63 [6] [i_14] = (((var_6 ? var_7 : var_9)));
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 24;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 21;i_17 += 1)
        {
            {

                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    var_30 -= ((((arr_68 [12] [i_17] [i_17]) != -4889231877178259959)));
                    arr_70 [i_16] [i_17] [i_17] [i_18] = ((((arr_67 [i_17] [i_17 + 1] [i_17 + 3]) / var_9)));
                    arr_71 [i_16] [i_18] [i_18] = ((-((var_7 | (((arr_68 [i_16] [i_17] [i_18]) ? var_11 : var_5))))));
                    var_31 *= (!(~110));
                }
                var_32 *= (((arr_69 [i_16] [i_16] [i_17] [i_17]) ^ ((~(arr_67 [18] [i_17] [i_17 + 2])))));
                arr_72 [1] = var_2;
                var_33 = var_7;
            }
        }
    }
    #pragma endscop
}
