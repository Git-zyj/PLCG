/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_14 = (max(var_14, (((~(arr_3 [1]))))));
        arr_4 [i_0] = (((((arr_3 [i_0]) & (arr_0 [i_0])))) ? ((((var_13 < (arr_0 [12]))))) : (arr_2 [i_0] [i_0]));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = var_7;
        var_15 = 2047;
        var_16 = ((((arr_7 [i_1]) ? (arr_7 [i_1]) : var_0)));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_17 = (max((((-1728033023 != (min(var_9, (arr_10 [i_2])))))), (arr_9 [i_2])));
        var_18 *= (((((-(arr_2 [i_2] [i_2])))) ? ((~(~var_1))) : (((arr_7 [i_2]) & (arr_3 [0])))));

        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            arr_13 [i_3] [i_3] [i_2] = (min((((max(-7356898576930439100, (arr_6 [i_2]))) ^ (((max(1, 1)))))), (((-(((787318296 <= (arr_3 [i_3])))))))));
            var_19 = (((-(((arr_10 [i_2]) * (arr_11 [i_2]))))));
            var_20 = (min(var_20, ((max(var_10, (min((arr_5 [1]), (arr_5 [i_2]))))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            arr_16 [i_4] = ((((!(arr_3 [12]))) ? -var_5 : ((-(arr_15 [i_4] [i_2])))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_21 = (((arr_19 [i_2]) ? (arr_6 [i_6]) : (arr_7 [i_2])));
                        var_22 *= ((var_1 > (~var_10)));
                        arr_25 [i_6] [i_4] [i_5] [i_6] [i_2] = (arr_10 [i_2]);
                        var_23 = (arr_17 [i_4]);
                        arr_26 [i_6] = ((arr_12 [i_5]) * (((arr_9 [i_4]) ? (arr_24 [i_6]) : 1420613288)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_24 &= (((arr_27 [1] [i_7 - 1] [i_7 - 1]) ? var_9 : (arr_27 [0] [i_7 - 1] [i_7])));
                        var_25 += ((((((arr_28 [i_4] [i_7 - 1] [i_8]) >> (arr_3 [12])))) ? (arr_20 [i_2] [i_7 - 2] [i_8]) : (arr_22 [i_2] [i_2])));
                    }
                }
            }
            arr_31 [i_2] [i_4] = (arr_7 [i_2]);
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
        {
            var_26 = ((((arr_11 [i_2]) | (arr_11 [i_9]))));

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                arr_36 [i_2] [i_2] [i_9] [i_10] = var_2;
                var_27 = ((((min((arr_20 [i_2] [i_2] [i_10]), (arr_35 [i_2] [i_9] [i_10])))) ? ((min(5, (arr_23 [i_2] [i_9] [i_10] [i_10])))) : (arr_3 [i_10])));
                var_28 = (max(var_28, -var_0));
                arr_37 [i_2] [i_9] [i_9] [i_10] = (((arr_18 [i_10] [i_9] [i_10]) ? (((arr_18 [i_9] [i_9] [i_2]) * (arr_18 [i_2] [i_9] [i_10]))) : (((arr_18 [i_2] [i_2] [i_2]) ^ var_11))));
            }
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                arr_40 [i_2] [i_9] [i_11] [i_9] = (((~(((arr_22 [i_9] [i_11]) ? (arr_30 [6] [i_9]) : 15320)))));
                var_29 = arr_14 [i_11];
            }
        }
        /* vectorizable */
        for (int i_12 = 2; i_12 < 13;i_12 += 1)
        {
            var_30 = (max(var_30, (!var_13)));
            arr_43 [i_2] [i_12 - 1] = (arr_29 [i_2] [i_12] [i_12 - 1] [i_12 - 1] [i_2] [1]);
            var_31 *= (((arr_42 [i_12 - 1]) ? (arr_3 [4]) : var_13));
            var_32 = (arr_33 [i_12 - 1] [i_12 - 2]);
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                {
                    var_33 = (((((var_10 & var_7) ^ (arr_42 [i_13]))) ^ ((min(var_7, (arr_1 [i_2] [i_13]))))));
                    var_34 = (min(var_34, ((((((arr_42 [i_2]) ? var_0 : (arr_6 [i_2]))) << (((min((((arr_29 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) ? var_5 : 0)), var_11)) + 184904168)))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
    {
        arr_51 [i_15] = (((arr_5 [i_15]) & 3596812647));
        arr_52 [i_15] [8] = ((~(~var_3)));
        var_35 += 1;
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 16;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 15;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 16;i_18 += 1)
            {
                {
                    var_36 = (max(var_36, 7110309692828734385));

                    for (int i_19 = 3; i_19 < 13;i_19 += 1)
                    {
                        var_37 &= (max(var_9, 4188980898));
                        var_38 += ((((max(var_0, (max(1, (arr_6 [i_17 - 1])))))) ? (arr_45 [i_17 - 1] [i_18] [i_19]) : (((!((((arr_45 [i_17 + 1] [i_18] [i_19]) & var_5))))))));
                    }
                    var_39 ^= (((((-(~var_3)))) ? (((((~(arr_23 [i_17] [i_16] [i_16] [i_17])))))) : (((((1 ? 849919753 : 127))) ? (((var_5 + (arr_11 [i_17 - 1])))) : (arr_14 [i_16])))));
                }
            }
        }
    }
    var_40 = ((var_11 ? var_9 : ((((max(var_9, var_12))) ? ((1 ? 3445047512 : 9223372036854775807)) : var_5))));
    #pragma endscop
}
