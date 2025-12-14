/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] &= ((-(arr_2 [i_0] [i_0])));
        arr_5 [i_0] [11] = ((6351583707999417154 ? (arr_3 [i_0]) : var_10));
        var_12 = ((!(var_1 * 0)));

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            arr_9 [i_0] [18] &= (!15317224907293429500);
            var_13 = ((-109 % (arr_7 [i_0] [i_1 + 1] [i_1])));
            var_14 = (!214);
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_15 = var_5;
            var_16 = (min(var_16, -65528));
            var_17 ^= (!1);

            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {
                var_18 = (max(var_18, -471513949));
                arr_18 [i_3] [i_3] [i_3] [i_3] = (((arr_6 [i_2] [i_0]) / (arr_3 [i_0])));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_19 = ((1 - (arr_14 [i_5] [i_5] [i_4] [i_5])));
                            arr_28 [i_0] [i_0] [i_0] [1] [9] [i_0] = 112;
                        }
                    }
                }
                arr_29 [i_2] [i_2] [i_4] [i_0] = -1904944587;
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_20 = (min(var_20, (((!(arr_11 [i_0] [2]))))));
                    var_21 ^= ((((arr_14 [i_0] [i_2] [20] [i_0]) ? 7035151958626741458 : var_8)) % var_1);
                    var_22 ^= ((-(arr_25 [i_0] [i_0] [i_0] [1] [i_0])));
                    arr_34 [i_7] [i_7] = var_2;
                    arr_35 [i_0] [i_7] [i_7] = ((var_5 ? -4693797220204841245 : -1));
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    var_23 ^= -86;
                    arr_38 [i_0] [i_0] [i_2] [i_7] [i_9] = ((var_0 ? var_8 : var_3));
                }

                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_24 = ((~(((-127 - 1) ? var_7 : var_1))));
                    var_25 = (min(var_25, ((((((var_4 ? 4693797220204841245 : (arr_22 [i_10] [i_7] [1] [i_0])))) ? var_5 : (var_7 * 471513949))))));
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    arr_44 [i_0] [i_2] [i_7] [i_11] = var_8;
                    arr_45 [i_0] [i_2] [i_7] [i_7] = var_1;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        var_26 = (min(var_26, (!var_5)));
        arr_49 [i_12] = -4693797220204841245;
    }
    for (int i_13 = 0; i_13 < 10;i_13 += 1)
    {
        arr_52 [9] = min((((var_9 != (arr_23 [i_13] [i_13])))), (((arr_41 [i_13] [i_13] [i_13] [i_13]) / (((arr_31 [i_13] [6] [i_13]) ? -471513949 : var_8)))));
        var_27 = (min(var_27, ((((arr_19 [i_13] [i_13]) != (((arr_19 [i_13] [i_13]) % var_0)))))));
        arr_53 [9] &= ((!((max((var_4 % -37), var_8)))));
    }
    var_28 = var_9;
    var_29 = (max(var_29, ((max((120 * var_8), var_6)))));
    #pragma endscop
}
