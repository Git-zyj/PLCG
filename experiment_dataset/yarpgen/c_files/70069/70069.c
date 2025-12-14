/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (((var_6 ^ (((var_9 ^ (arr_0 [i_0])))))));
        var_12 = (max(var_12, (((((arr_2 [i_0]) ? var_0 : (((arr_0 [i_0]) ^ (arr_2 [i_0]))))) - ((-(arr_2 [i_0])))))));
        var_13 = ((((var_1 ^ (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            var_14 = (max(var_14, (arr_1 [i_1] [i_2 + 2])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            arr_17 [i_1] [i_2] [i_1] [i_2] [i_2 - 1] [i_2] [i_2] = (arr_5 [i_2 + 1] [i_4 - 1]);
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_5] [i_4] = -486690306;
                            var_15 = ((var_2 != (arr_2 [i_1])));
                            var_16 = (((arr_16 [i_5] [i_4] [i_1] [i_1] [i_1]) ? (arr_9 [i_2 - 2] [i_2 - 3]) : (arr_1 [19] [23])));
                        }
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            var_17 ^= (arr_11 [i_1] [i_1] [i_1]);
                            var_18 = (~var_4);
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((-var_8 | (arr_12 [i_1])));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_19 *= 486690299;
                            arr_25 [i_1] = var_5;
                        }
                        var_20 -= ((-(((arr_19 [14] [i_2 - 1] [i_3] [i_3] [i_4]) ^ (arr_13 [i_1] [i_1] [i_1] [i_3])))));
                    }
                }
            }
            arr_26 [i_1] = ((-var_0 ? var_2 : (arr_9 [i_1] [i_2])));
            var_21 = (min(var_21, -var_5));
            var_22 &= (((arr_1 [i_1] [i_2]) / ((((arr_11 [i_2] [i_1] [i_1]) || (arr_24 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
        }
        var_23 = (arr_9 [i_1] [i_1]);
    }

    /* vectorizable */
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        arr_30 [i_8] = var_1;
        var_24 = (min(var_24, (arr_14 [i_8] [i_8 + 2] [i_8 + 1] [6] [6])));
        var_25 = 14112760110612736089;
    }
    for (int i_9 = 2; i_9 < 12;i_9 += 1)
    {
        arr_35 [i_9] = (min((arr_7 [i_9 - 1] [i_9]), (arr_21 [i_9 + 1] [i_9] [i_9] [i_9] [i_9 - 1] [i_9])));

        for (int i_10 = 2; i_10 < 14;i_10 += 1)
        {
            var_26 = (max((((var_1 > (arr_3 [i_9 + 3])))), (~1204998166)));
            var_27 = (arr_12 [i_9]);
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
        {
            var_28 = (arr_12 [i_9]);
            var_29 ^= ((-(arr_23 [i_9 + 3])));
            arr_43 [i_9] &= ((((((((arr_19 [i_9 + 3] [i_11] [1] [i_11] [19]) / var_3))) % (min((arr_12 [i_9]), -9223372036854775795)))) - (arr_8 [i_9] [i_9 - 2] [i_9])));
            var_30 += ((-((((min((arr_33 [i_9 - 1] [i_9 - 1]), (arr_32 [i_9 + 2] [i_11])))) ? var_3 : 22824))));
        }
        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_13 = 3; i_13 < 12;i_13 += 1)
            {
                arr_49 [i_9] [i_12] [i_9] [i_12] |= (603303030 && 55470);
                var_31 = ((-(arr_9 [i_13] [i_13 + 3])));
            }
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                var_32 = var_1;
                var_33 = (((((arr_51 [i_9] [i_9] [i_9] [i_9]) ? 59 : (arr_24 [i_14 - 1] [i_9 - 2] [i_14 - 1] [i_9 - 2] [i_9 - 2])))) ? (((var_4 != (((arr_24 [i_14] [i_12] [i_14] [i_12] [i_12]) ^ var_7))))) : ((max(var_3, (((var_8 >= (arr_46 [i_9] [i_12] [i_14]))))))));
                var_34 = (arr_33 [i_9 - 1] [i_12]);
            }
            for (int i_15 = 1; i_15 < 12;i_15 += 1)
            {
                var_35 = (min(var_35, ((((arr_13 [i_9] [i_9] [i_15 + 2] [i_9]) / (arr_3 [i_12]))))));
                var_36 = ((((var_1 | ((((arr_29 [i_9]) < (arr_23 [i_9]))))))) % (min((arr_52 [i_9] [i_12] [12]), (((var_7 ? var_7 : var_3))))));
            }
            for (int i_16 = 2; i_16 < 12;i_16 += 1)
            {
                arr_58 [i_9] [i_9] [i_12] [i_9] = (min((min(1, ((~(arr_54 [i_9] [i_9] [i_9]))))), ((((arr_3 [i_9]) >= (var_9 || var_8))))));
                var_37 = (max((((var_8 != (((arr_21 [i_9] [i_9] [i_9 + 1] [i_9] [i_9] [i_9]) ^ (arr_6 [i_9 + 1] [i_9] [i_9 + 1])))))), (((arr_45 [i_12] [i_12] [i_16]) / (arr_51 [i_9 - 1] [i_12] [i_12] [i_16])))));
                arr_59 [i_9] [i_9] [i_16] [i_16] |= (arr_40 [i_16]);
                arr_60 [i_9] [i_12] [i_16] = (min((arr_52 [i_9] [i_16] [i_16]), ((((max((arr_23 [i_9 + 2]), (arr_44 [i_16])))) ? ((((arr_37 [i_9] [i_12]) - (arr_36 [i_9] [i_9] [i_9])))) : ((var_5 ? (arr_39 [i_16] [i_12]) : (arr_4 [i_9] [i_9])))))));
            }
            var_38 = (arr_50 [i_9 + 1] [i_9 + 3]);
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    {
                        var_39 = var_4;
                        var_40 += ((-((-((min((arr_8 [i_9] [i_9] [i_9]), var_3)))))));
                    }
                }
            }
        }
        var_41 = (((arr_5 [i_9 + 3] [i_9 + 1]) >= ((var_5 ? (arr_5 [i_9 + 3] [i_9 + 1]) : (arr_5 [i_9 + 3] [i_9 + 1])))));
        var_42 *= (min((arr_3 [i_9 - 2]), var_3));
    }
    for (int i_19 = 0; i_19 < 24;i_19 += 1)
    {
        var_43 = var_9;
        var_44 |= (((arr_9 [i_19] [i_19]) ? var_7 : (((arr_16 [i_19] [i_19] [i_19] [i_19] [i_19]) ? var_3 : (arr_16 [i_19] [23] [23] [i_19] [i_19])))));
    }
    var_45 ^= (max(((min((max(var_3, var_1)), var_3))), ((var_2 ? var_4 : ((max(var_3, var_0)))))));
    #pragma endscop
}
