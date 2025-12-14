/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            arr_14 [i_4 - 2] [14] [i_2] [i_0] [i_1 - 4] [14] [i_0] = (!-var_0);
                            var_13 = (min(var_9, (var_3 && 204)));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_14 += (0 <= -668375013);
                            arr_19 [i_0] [i_1] [i_0] [i_0] [i_5] = (arr_2 [i_5]);
                            var_15 = (((((arr_16 [i_1] [i_1]) == (arr_8 [i_5] [i_3] [i_2] [i_2] [i_0] [i_0]))) ? 15883605656220714665 : 61128));
                            var_16 = ((59436 / (arr_5 [i_0] [i_0])));
                        }
                        arr_20 [i_0] [i_1] [i_0] [i_0] = (max((((min((-9223372036854775807 - 1), 1)) % var_7)), ((((arr_13 [i_0 - 3]) / (arr_13 [i_0 - 3]))))));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        arr_24 [4] [4] [i_0] = (max(-var_5, 1332198220706885297));
                        var_17 = (min(var_17, (((-((-219 ^ ((min(-123, var_3))))))))));
                        arr_25 [i_0] [i_2] [i_0] [i_0] = (-((-86 ? 62 : 0)));
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_0] = (arr_1 [i_1 - 1] [i_1 - 1]);

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_31 [i_0] [i_1] [i_0 + 1] [i_1] [i_0] = var_11;
                            var_18 = (((arr_26 [i_0] [i_1 - 1] [i_2] [i_0 - 2]) & ((max((arr_26 [11] [i_1 - 2] [i_7] [i_0 - 2]), (arr_26 [i_7] [i_1 - 2] [i_2] [i_0 + 1]))))));
                        }

                        for (int i_9 = 2; i_9 < 22;i_9 += 1)
                        {
                            arr_34 [1] [i_0] [i_2] [i_0] [i_0 - 2] = ((~((~((5133722171460412457 ? 7133046619561832158 : (arr_22 [i_0] [17] [i_1] [i_0] [i_7] [i_0])))))));
                            var_19 = ((+(((arr_8 [i_9 + 2] [i_1 - 3] [i_0 - 3] [2] [2] [2]) ^ (arr_8 [i_9 - 2] [i_1 - 3] [i_0 + 1] [i_0] [i_0 - 3] [i_0])))));
                            var_20 = (min(var_20, ((max((((~(arr_21 [i_9])))), ((((arr_0 [i_0 - 2]) || (arr_0 [i_0 - 3])))))))));
                            var_21 = (min(var_21, ((min(((~((var_11 ? var_1 : 18)))), var_7)))));
                            var_22 |= ((max(var_4, (!63))));
                        }
                        for (int i_10 = 2; i_10 < 22;i_10 += 1)
                        {
                            var_23 = var_5;
                            var_24 = ((var_5 ? (min((((arr_11 [i_2] [i_10]) ? 9223372036854775808 : var_9)), (!var_3))) : ((min((min(1, var_6)), var_6)))));
                        }
                    }
                    arr_39 [i_0] [i_1] = (154 || 120);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 3; i_11 < 14;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            {
                var_25 = arr_23 [9] [i_11] [i_11] [i_11];

                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    var_26 = ((!(((-((-(arr_27 [i_13] [0] [11] [i_11 - 3] [i_11 - 3] [i_11 - 3]))))))));

                    for (int i_14 = 1; i_14 < 12;i_14 += 1)
                    {
                        var_27 = (((arr_15 [i_12] [i_11 - 1] [i_11] [i_11] [i_11]) <= (arr_1 [i_11 - 1] [i_14 + 1])));

                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            var_28 ^= 5436195567244457058;
                            var_29 = ((~((((var_2 ? var_2 : (arr_33 [i_11]))) / (((var_8 ? (arr_6 [i_14 + 3] [i_13] [i_11]) : 136)))))));
                        }
                        var_30 = (((((var_9 * 9930227062009326632) ? (~0) : (var_3 < var_1))) - (((max((arr_9 [i_11 - 1] [i_14 - 1] [i_14 + 2] [i_14 + 1] [i_14] [i_14 - 1]), (arr_46 [i_14 + 2] [i_14 + 3] [i_13] [i_11 + 1])))))));
                    }
                    for (int i_16 = 3; i_16 < 11;i_16 += 1)
                    {
                        var_31 = ((((((((18446744073709551611 ? (arr_45 [i_11] [i_12] [i_13] [i_16 + 1]) : (arr_26 [i_11] [i_12] [i_11] [10])))) - (min(var_11, (-2147483647 - 1)))))) ? (max((((2985925020 ? var_4 : 18))), ((3040955829 ? var_10 : var_1)))) : var_10));
                        var_32 = ((var_2 ? (arr_16 [i_12] [i_12]) : ((max(var_8, 2985925020)))));
                    }
                    for (int i_17 = 0; i_17 < 15;i_17 += 1) /* same iter space */
                    {
                        arr_59 [i_17] = ((-((min(var_5, (arr_12 [i_12] [i_12] [20] [20]))))));
                        var_33 = (arr_4 [i_11] [i_12]);
                    }
                    for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
                    {
                        var_34 = (min((max(4294967291, (arr_60 [i_11] [i_12] [i_12] [i_13] [i_13] [i_18]))), (((arr_60 [i_12] [i_18] [i_13] [i_11 - 3] [i_12] [i_11 - 3]) ? var_3 : (arr_60 [i_11 + 1] [i_12] [i_12] [i_12] [i_13] [i_18])))));
                        var_35 = (((min(((min(-110, var_10))), 2571950089059465993)) - (-var_3 - var_5)));
                        arr_64 [12] [i_13] [i_11] = (((-(min(var_11, (arr_35 [i_18] [i_12] [i_12] [i_12] [i_11]))))));
                        var_36 = (max(var_2, ((((!var_0) - (!43911))))));
                    }
                }
                var_37 = (min(var_37, var_6));
            }
        }
    }
    #pragma endscop
}
