/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_0;
    var_14 = ((((min(42610, ((var_3 >> (var_9 - 10504)))))) ? var_9 : (((0 ? var_1 : var_2)))));
    var_15 = var_3;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_16 = (((min(var_6, (arr_0 [i_0 - 1]))) >> (((max((max((arr_1 [i_0 + 1]), var_10)), var_1)) - 75))));

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                arr_10 [i_2] [i_2] = 4;
                var_17 |= (((((arr_7 [i_0 - 1] [i_1 + 3] [i_0 - 1] [i_1 - 1]) ? (arr_7 [i_1] [i_0 - 2] [i_0 - 1] [i_1 - 1]) : 22920)) + ((~(((arr_0 [i_0]) / var_8))))));
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {
                arr_15 [i_0] [i_1] = max((((!(((arr_1 [i_0 - 2]) || var_8))))), (min(-8143222233450649552, ((((arr_14 [i_0] [i_1 + 3] [i_3]) + var_11))))));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_18 = (min(((var_5 ? (arr_8 [i_0 - 1] [i_4 - 2]) : (arr_8 [i_0 - 2] [i_4 - 2]))), (((var_9 && (arr_8 [i_0 - 2] [i_4 - 2]))))));
                            arr_21 [i_5] [i_3] [i_3] [i_3] [i_3] [i_1] [i_0] = 10990811307688892527;
                            var_19 = (min(var_19, (min(255, 2147483629))));
                            var_20 -= (max((16384 > 16352), (((max(var_10, (-2147483647 - 1))) == 1))));
                            var_21 = (min(var_21, (((-4294967285 - (((max((arr_5 [i_4] [i_4 - 1]), (arr_7 [i_4 - 2] [i_5 - 2] [9] [i_5]))))))))));
                        }
                    }
                }
                var_22 = ((!(((!-264) == ((16352 ? var_10 : -968435144))))));
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
            {
                var_23 = (max(1, (max((((1 ? var_10 : -13820))), ((var_6 ? (arr_9 [i_0] [i_1] [i_1]) : 13201364176084611043))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_29 [i_8] [i_8] = ((((arr_20 [i_0] [i_0 + 1] [i_0] [i_1 - 1] [i_8 + 1]) ? (arr_20 [i_0] [i_0 - 2] [i_1 - 2] [i_1 + 1] [i_8 + 3]) : (arr_20 [i_0] [i_0 + 1] [i_0] [i_1 - 2] [i_8 + 2]))));
                            var_24 = (min(var_24, (((+(min(-6274, ((((arr_16 [i_0 - 2] [i_6] [i_8]) ? var_7 : var_6))))))))));
                        }
                    }
                }
                arr_30 [i_0 - 2] [i_0 - 2] [i_6] &= 1;
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_25 ^= 65534;

                for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                {
                    var_26 ^= (((((-(arr_31 [i_10] [i_9] [i_1 + 2] [i_0 + 1])))) ? (arr_14 [i_0] [i_9] [i_10]) : (511 - var_0)));
                    var_27 *= (arr_22 [i_0 + 1] [i_1 - 1] [i_9] [i_10]);
                    var_28 = (((arr_1 [i_0 - 1]) + (arr_1 [i_0 - 2])));
                }
                for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                {
                    var_29 = (min(var_29, ((((var_5 ? 20482 : var_5))))));
                    var_30 = ((-(arr_24 [i_0 + 1] [i_1 + 3])));
                    arr_37 [i_0] [i_1] [i_9] [i_11] = (var_9 >> (var_2 + 3353127018221390335));
                    var_31 -= (((arr_32 [i_0 - 1] [i_0] [3] [i_0 + 1]) / (arr_31 [i_0] [i_0] [i_9] [i_9])));
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                {
                    arr_41 [i_0] [i_0 + 1] [i_1] [i_1] [i_9] [i_12] = (((arr_17 [i_0] [i_0 - 2] [i_9] [i_0 + 1]) ? (arr_33 [i_0] [i_0 - 2] [i_9] [i_12] [i_0] [i_0 + 1]) : (arr_33 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1 - 1] [i_1])));
                    var_32 = ((((var_0 >= (arr_6 [i_0 + 1] [i_0 + 1] [i_12]))) ? var_7 : 1));
                }
            }
            var_33 *= (((!-72) ? 22754 : ((((arr_25 [i_0 - 1] [i_0 - 1] [i_1 + 3] [i_1 - 1] [i_1 - 1] [i_1 - 2]) || (arr_5 [i_0] [i_1 - 2]))))));
            arr_42 [i_0 - 1] [i_1] [i_1 + 2] = (-(((arr_16 [i_0] [i_0 - 2] [i_1 - 1]) ? (arr_16 [i_0] [i_0 - 1] [i_1 - 2]) : (arr_31 [i_0] [i_0 + 1] [i_1 - 2] [i_1]))));
            arr_43 [i_1] [i_1] = 26646;
        }
        var_34 = (max(var_34, (~32575)));
    }
    for (int i_13 = 0; i_13 < 14;i_13 += 1)
    {
        var_35 = (arr_26 [i_13] [i_13] [i_13] [i_13] [i_13]);
        var_36 = 96;
        arr_47 [i_13] = (max((arr_34 [1] [i_13] [i_13] [20]), (arr_23 [i_13] [i_13] [i_13])));
    }
    #pragma endscop
}
