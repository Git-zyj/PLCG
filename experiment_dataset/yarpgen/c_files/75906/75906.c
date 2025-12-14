/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_3));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_20 = (min((((((-1429074641 ? var_14 : var_15))) ? ((var_0 ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (!-19))), (((!((max((arr_1 [i_0]), (arr_0 [i_0])))))))));
        arr_2 [i_0] [i_0] = (((var_13 ? var_0 : 10)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_21 = (min(var_21, var_16));
                        var_22 = ((-((var_16 ? (arr_8 [i_1] [i_1] [i_1]) : (arr_13 [i_1] [i_2] [11] [3] [5])))));
                    }
                }
            }
        }
        arr_14 [i_1] = var_0;
    }

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
        {
            var_23 = (min(26, 5081140936111083662));
            var_24 = (((((((var_18 ? var_2 : (arr_15 [i_5]))) << (var_15 + 56)))) ? ((var_17 ? (arr_19 [i_6 + 1] [14]) : 16793306709619967535)) : 255));
        }
        for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
        {
            arr_23 [i_5] = ((1048575 ? 1 : (((19951 ? (min((arr_21 [i_7]), (arr_20 [i_5]))) : ((min(var_10, var_15))))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        arr_29 [i_5] [i_9] [i_5] [i_8] = ((-((-(arr_15 [i_7 - 1])))));
                        var_25 -= ((~((33554431 ? 3300682859484276928 : 1985026712818825070))));
                    }
                }
            }
        }
        for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
        {
            var_26 = (40 ? var_12 : (arr_22 [i_10] [i_5]));
            var_27 = (((max((arr_24 [i_10 + 1] [i_10 + 3]), var_10)) != var_14));
            arr_32 [i_5] [i_5] [i_10 - 1] = var_10;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    {

                        for (int i_13 = 2; i_13 < 24;i_13 += 1)
                        {
                            arr_41 [i_5] [i_10 + 1] [i_11] [i_11] [i_13] = (-((((min((arr_19 [i_5] [i_5]), var_12)) >= (~var_9)))));
                            arr_42 [i_5] [i_10] [i_11] [i_11] [i_11] [i_13 - 2] = ((-(min(9525135093541697598, -4))));
                            var_28 ^= (min(10, 25));
                            var_29 ^= ((!(((((max(var_10, var_4))) % (min(var_3, (arr_36 [i_12] [i_12]))))))));
                            var_30 = (max(var_30, ((min((min((arr_24 [i_10 + 2] [i_10 + 2]), var_5)), ((min(-37, 1859600185))))))));
                        }
                        var_31 = (((((arr_27 [i_10 + 3] [i_10 - 1] [i_10 + 3] [i_10 + 3] [i_10 + 2] [i_10 - 1]) || var_6)) ? (arr_22 [i_10 + 2] [i_10 + 3]) : var_2));
                        arr_43 [i_12] [i_11] [i_11] [i_5] = min(var_18, (((-1859600186 ? ((min(28, 1))) : 351951990))));
                        arr_44 [i_5] [i_11] [i_5] [i_10] [17] [i_12] = 16793306709619967548;
                    }
                }
            }
            var_32 = (min(var_32, ((max((max(var_8, var_12)), (arr_27 [i_5] [1] [i_10 + 1] [i_10] [i_10 - 1] [i_10]))))));
        }
        var_33 = ((19 ? 19 : 1859600198));
        arr_45 [i_5] = var_16;
        arr_46 [i_5] [i_5] = var_5;
    }
    for (int i_14 = 1; i_14 < 1;i_14 += 1)
    {

        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {
            arr_55 [i_15] [i_15] = ((-(!var_12)));
            arr_56 [12] = (((((((arr_50 [0]) & 1859600180)))) ? var_7 : (arr_54 [i_14 - 1] [i_14 - 1] [i_14 - 1])));
            arr_57 [i_14] [i_15] [i_14] = var_5;
        }
        for (int i_16 = 0; i_16 < 18;i_16 += 1)
        {
            arr_61 [i_16] [i_14] [i_16] = var_11;
            arr_62 [i_14 - 1] = min(-0, (-125 + 1859600180));
        }
        arr_63 [i_14 - 1] = (max(-var_9, (!var_1)));
        arr_64 [i_14] = (((((~(arr_36 [1] [1])))) ? (((((min(var_18, var_16))) ? (arr_33 [i_14 - 1] [i_14] [i_14] [i_14 - 1]) : (((!(arr_52 [0] [i_14] [14]))))))) : (min(-13, var_3))));
        var_34 = var_5;
        arr_65 [i_14] = (!var_18);
    }
    var_35 = ((var_8 ? ((var_9 ? var_7 : var_5)) : ((((min(var_17, 0))) ? (21 ^ var_1) : (!var_11)))));
    #pragma endscop
}
