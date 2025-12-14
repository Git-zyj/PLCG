/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (max((var_16 + 127), -var_11));
        var_20 = (arr_0 [i_0]);
        arr_4 [i_0] = (min(var_8, (min(((max((arr_0 [i_0]), var_12))), (arr_1 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_21 = (max(var_21, (var_0 * -var_15)));
            arr_8 [i_0] = (max(((((max((arr_0 [i_0]), -15))) + var_15)), ((min(var_18, (arr_7 [i_0] [i_1]))))));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 7;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 2; i_4 < 6;i_4 += 1)
                {
                    var_22 = (((arr_15 [i_0]) == -2097152));
                    var_23 = ((!(arr_2 [i_0])));
                    var_24 = ((((((var_16 + 16) * (!-2097152)))) >= ((var_4 ? 2845062349 : 65509))));
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_25 = 26;
                    var_26 = 15;
                }
                var_27 -= (((((arr_17 [i_0] [i_0] [i_3 + 2] [i_3 + 1]) ? ((var_16 | (arr_6 [i_0]))) : (arr_13 [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3 - 1]))) / -2097152));
            }
            /* vectorizable */
            for (int i_6 = 2; i_6 < 7;i_6 += 1) /* same iter space */
            {
                var_28 &= (arr_17 [i_2] [i_0] [6] [6]);
                var_29 = (arr_21 [i_6 - 1] [i_6 - 1] [i_2]);
                arr_22 [i_0] [i_0] &= ((3508 ? (!-2097167) : ((var_6 + (arr_6 [i_2])))));
            }
            /* vectorizable */
            for (int i_7 = 2; i_7 < 7;i_7 += 1) /* same iter space */
            {
                var_30 = ((var_1 ? ((var_10 ? var_10 : (arr_9 [0] [0] [i_0]))) : ((var_18 ? -3526 : var_0))));
                var_31 = 3495;
            }
            var_32 = (arr_24 [i_2] [6] [6]);

            for (int i_8 = 3; i_8 < 9;i_8 += 1)
            {
                var_33 = var_13;

                for (int i_9 = 1; i_9 < 7;i_9 += 1)
                {
                    var_34 = (((((arr_17 [i_8] [i_2] [i_8] [i_8 + 1]) <= var_13))) + var_9);
                    var_35 ^= ((((((((var_2 ? (arr_11 [i_0]) : 65509))) ? (arr_20 [i_9] [i_0] [i_2]) : (((((arr_27 [i_0] [i_0]) > var_19))))))) ? ((((((arr_23 [0] [0] [0] [0]) ? var_15 : (arr_27 [i_0] [i_0])))) ? (min(-3508, var_17)) : (max(var_4, (arr_18 [i_0] [i_0] [i_8] [i_0]))))) : var_2));
                }
                for (int i_10 = 4; i_10 < 9;i_10 += 1) /* same iter space */
                {
                    var_36 = (min(var_36, (((37 ? -var_12 : (arr_14 [i_0]))))));
                    var_37 ^= ((var_0 | (max(((var_10 / (arr_30 [i_8] [i_8] [8] [i_0]))), ((max((arr_0 [i_0]), 13)))))));
                    var_38 = ((!(((max(var_3, (arr_28 [i_0] [i_0] [i_0] [i_0])))))));
                }
                /* vectorizable */
                for (int i_11 = 4; i_11 < 9;i_11 += 1) /* same iter space */
                {
                    var_39 = var_5;
                    var_40 = 2097158;
                    arr_35 [i_0] [i_0] [i_2] [i_0] [i_2] [i_2] = 2097141;
                    arr_36 [i_2] [i_2] [i_2] [i_2] [i_0] = ((15360 ? 15360 : var_19));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    var_41 = ((65481 | (arr_12 [i_8] [i_8 - 2] [i_8] [i_8 - 3])));
                    var_42 = ((~(0 >= -32)));
                }
            }
            var_43 = (arr_24 [i_2] [i_2] [i_2]);
            arr_40 [i_0] [5] [i_2] = ((var_12 % ((var_3 ? (((arr_39 [i_2] [i_0] [i_0] [i_0]) ? (arr_12 [4] [4] [4] [4]) : (arr_21 [i_0] [i_0] [i_2]))) : 162))));
        }
        arr_41 [i_0] = (-((((arr_12 [i_0] [i_0] [i_0] [i_0]) != (arr_12 [i_0] [3] [i_0] [3])))));
    }
    for (int i_13 = 3; i_13 < 14;i_13 += 1)
    {
        arr_44 [i_13] [i_13] = (((((arr_43 [i_13 + 1] [i_13 + 1]) ^ 80))) ? ((-(arr_42 [i_13 - 1]))) : (1 / -3508));
        var_44 = ((-(~3508)));
        var_45 = (max(2097121, 2));
    }
    /* vectorizable */
    for (int i_14 = 3; i_14 < 7;i_14 += 1)
    {
        var_46 = ((~((((arr_45 [i_14]) > (arr_45 [i_14]))))));
        var_47 = (max(var_47, var_4));
        var_48 = (((((arr_42 [i_14]) & 32750)) + 15341));

        for (int i_15 = 2; i_15 < 9;i_15 += 1)
        {
            var_49 = (9157 != var_0);
            var_50 = ((arr_47 [i_15 - 1] [i_14]) != var_12);
        }
    }
    var_51 = (((((-(-30359 != 2097158)))) ? ((65 ? -118 : -15372)) : ((var_10 | ((var_12 ? var_3 : 15341))))));
    var_52 = (min(var_52, (((((((-2097158 && var_11) ? ((min(var_4, var_1))) : 15341))) ? (!var_10) : ((((var_2 && var_1) && var_6))))))));
    var_53 = (((-var_7 ^ var_10) ? (var_16 / var_0) : ((((min(1198719286, 144346313))) ? (!var_11) : (max(var_11, var_15))))));
    #pragma endscop
}
