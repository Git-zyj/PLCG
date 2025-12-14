/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= (~var_6);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0 - 1] = arr_3 [i_0];
        var_20 = var_3;
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_11 [i_1] [11] [i_3] = (min(var_14, (((!((min(52, (arr_2 [i_1])))))))));
                    var_21 = max((((-((min(109, var_10)))))), (var_4 + var_13));
                    var_22 *= (arr_6 [i_1]);
                }
            }
        }
        arr_12 [i_1 - 2] = ((-((min(-52, -83)))));
    }
    for (int i_4 = 4; i_4 < 11;i_4 += 1)
    {
        arr_15 [9] = ((((min((arr_10 [i_4 + 3] [i_4] [i_4] [i_4 - 3]), (arr_10 [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4 - 1])))) || ((((min(var_5, (arr_0 [i_4]))) << (((860359031 % var_5) - 41)))))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_23 += (!860359008);
            arr_18 [i_5] = (!-2075883968);
        }
        var_24 = (min((arr_0 [i_4]), ((((arr_10 [i_4] [i_4 + 1] [i_4 - 1] [i_4 - 2]) ? (arr_10 [0] [i_4 + 1] [i_4 - 1] [i_4 - 2]) : (arr_10 [i_4] [i_4 + 1] [i_4 - 1] [i_4 - 2]))))));
        arr_19 [i_4] = ((-3720504293 != ((((arr_1 [i_4 - 4] [11]) ? 204 : (arr_2 [i_4 - 2]))))));
    }
    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_25 [i_6 + 4] [i_6 + 4] [i_7] = ((max((arr_8 [i_6 + 3] [i_7]), var_6)));
            var_25 = (max(var_25, ((min((((-((-83 ? 103 : -682607571))))), (((arr_21 [i_6 + 3]) ? ((((arr_5 [i_7]) ? 58 : var_11))) : 3720504290)))))));
            var_26 = ((!((min((min(14, 3434608264)), ((3720504293 ? var_12 : var_6)))))));
        }
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_27 = 6;
            var_28 = (max((((arr_5 [i_6 - 1]) ? -51 : 190)), (((arr_5 [i_6 + 1]) ? var_5 : 69))));
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 18;i_10 += 1)
                {
                    {
                        var_29 += 220;
                        arr_34 [18] [i_6 - 1] [9] [i_9] [i_10] &= (min(((~(arr_23 [i_6 - 1] [i_10 + 2]))), ((min(218, -37)))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {

            for (int i_12 = 1; i_12 < 18;i_12 += 1)
            {
                var_30 = ((~(((arr_38 [i_11]) ? (arr_24 [i_6]) : -1546496752))));
                var_31 ^= (~(arr_37 [i_6] [i_6 - 1] [i_12] [i_12]));
                var_32 ^= 52;
                var_33 = (max(var_33, ((((!860359016) > -16)))));
            }
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        {
                            arr_45 [i_6] [19] [i_13] [i_14] [i_15] = ((46 / var_11) ? var_7 : ((-56 ? (arr_36 [14] [i_14]) : (arr_9 [i_6] [i_6] [i_6] [0]))));
                            var_34 += (-83 != -45);
                            var_35 = (min(var_35, var_13));
                            var_36 |= ((((((var_16 ? var_7 : var_1)) + 2147483647)) >> (var_14 - 1641025115)));
                            arr_46 [i_6] [i_6] [i_6] [i_15] = (((arr_41 [i_6 + 2] [i_6] [i_6 + 3] [i_14 - 1] [i_14 - 1] [i_15]) ? var_1 : var_0));
                        }
                    }
                }
                arr_47 [i_6 + 1] [i_11] [i_11] [i_11] = var_13;
                var_37 = ((184 / (arr_35 [i_6 - 1] [i_11] [i_13])));
            }
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                var_38 = (max(var_38, var_2));
                var_39 = (min(var_39, (((var_6 / ((3235204832 ? (arr_9 [i_6] [i_6] [i_6] [i_16]) : var_8)))))));
            }
            for (int i_17 = 1; i_17 < 18;i_17 += 1)
            {
                var_40 = ((-((var_11 ? (arr_3 [i_11]) : var_13))));
                var_41 = (min(var_41, (((arr_49 [i_6 + 1] [i_11] [i_17 + 1]) ? ((246 ? (arr_51 [i_6] [i_6] [i_17 + 2]) : var_4)) : (((!(arr_30 [i_6 + 1] [12] [19] [19]))))))));
                var_42 = ((~(arr_29 [i_6] [i_6 + 4] [i_17 + 1] [i_17 + 1])));
                var_43 = ((arr_1 [i_6 + 3] [i_6]) ? (arr_1 [i_6 + 1] [i_11]) : (arr_1 [i_6 + 3] [i_11]));
            }

            for (int i_18 = 1; i_18 < 19;i_18 += 1)
            {

                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    var_44 &= var_1;
                    var_45 ^= (var_1 | var_1);
                }
                for (int i_20 = 0; i_20 < 20;i_20 += 1)
                {
                    arr_59 [i_6] [i_6] [i_18 - 1] [14] |= ((!(arr_22 [i_6 + 1] [i_18 + 1])));
                    arr_60 [i_6 + 4] [i_11] [i_18] [i_20] = ((var_13 ? -40 : 226));
                    arr_61 [i_18] = 253;
                }
                for (int i_21 = 4; i_21 < 17;i_21 += 1)
                {
                    arr_64 [i_6 + 4] [i_18] [i_18] [i_18] [19] = 5;
                    arr_65 [i_18] [i_18] [i_18] [i_21 + 2] = ((-(arr_38 [i_6 - 1])));
                }
                arr_66 [i_18] [i_18] = ((var_18 ? var_15 : (arr_50 [i_6 - 1] [i_6 - 1] [i_18 - 1])));
            }
        }
        var_46 = (max(var_46, (arr_33 [i_6 + 2] [i_6] [12] [i_6 - 1])));
    }
    #pragma endscop
}
