/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] = var_3;
                        var_13 -= (!-121);
                        var_14 = (max(var_7, ((((((var_9 + 2147483647) >> 0)) >= (arr_9 [i_2] [i_1] [i_0]))))));
                        var_15 = (max(var_15, var_5));
                        var_16 -= ((12 ? -989669998 : -121));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_17 += (((!var_11) * (!-940671596)));
                            var_18 -= 25334;
                        }
                        arr_17 [i_0] [i_0] [i_2] [i_4] = min((((!((min((arr_4 [i_0] [i_1] [i_2]), (arr_3 [i_1] [i_1]))))))), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [i_4]));
                        var_19 = (max(var_19, (((!((!(((var_5 ? var_7 : 10116413))))))))));
                        arr_18 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4] = (((arr_3 [i_0] [i_1]) > var_4));
                        var_20 = (max(var_20, (min(var_9, (!-112)))));
                    }
                    arr_19 [i_1] = ((!((((arr_9 [i_0] [i_1] [i_2]) ? (((!(arr_3 [i_2] [i_1])))) : (((arr_6 [i_0] [i_0] [i_0]) ? 0 : 127)))))));
                    var_21 = (min(var_21, ((((((!(arr_15 [i_2] [i_2] [i_1] [i_1] [i_0] [i_0] [i_0])))) ^ ((max(((!(arr_1 [i_0] [i_0]))), (!-121)))))))));
                    arr_20 [i_0] [i_1] [i_2] |= ((!((min((max(var_9, 122)), (((var_8 || (arr_15 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] [i_2])))))))));
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    var_22 += 15;
                    var_23 = (((arr_23 [i_1] [i_1]) - ((((!(((120 << (var_8 - 33467))))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_30 [i_8] [i_6] [i_6] [i_6] [i_1] [i_8] = (min(((((min(var_2, -647667287))) ? (min(var_8, var_0)) : (((max(121, var_8)))))), (!30)));
                                var_24 = (((((var_1 && (arr_0 [i_0])))) == ((134217712 ? ((var_11 ? var_11 : var_8)) : (var_6 + var_11)))));
                            }
                        }
                    }
                    var_25 = (min(var_25, ((((7 | 18446744073575333903) < ((min((arr_12 [i_0] [i_0] [i_1] [i_6]), (arr_7 [i_0] [i_0] [i_0])))))))));
                }
                var_26 -= ((!((max(var_10, (min((arr_5 [i_1]), (arr_7 [i_0] [i_0] [i_1]))))))));
            }
        }
    }

    for (int i_9 = 2; i_9 < 15;i_9 += 1)
    {
        arr_34 [i_9] = (((!13970) ? -121 : 13738945691204497558));
        arr_35 [i_9] = (max(((((min(16, 1))) * 35)), (max(var_2, (((arr_33 [i_9]) ? var_10 : (arr_31 [i_9] [i_9 + 1])))))));
        var_27 = (max(var_27, ((((~var_11) | (min((min((arr_32 [i_9]), (arr_33 [i_9]))), (((arr_31 [i_9] [i_9]) ? (arr_33 [i_9]) : 134217720)))))))));
        arr_36 [i_9] = ((!(arr_32 [i_9 + 1])));
    }
    for (int i_10 = 4; i_10 < 19;i_10 += 1)
    {
        arr_39 [i_10] = ((var_5 ? var_3 : var_6));
        var_28 = (max(var_28, var_5));
        var_29 = ((!((!(((-26 ? var_10 : var_9)))))));
    }
    var_30 = (!var_1);
    var_31 = (min(var_31, (((var_8 ? var_7 : var_0)))));
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 12;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            {
                arr_44 [i_11] = (arr_7 [i_11 + 2] [i_11 + 2] [i_11 + 1]);
                arr_45 [i_11] [i_12] [i_12] = var_3;
            }
        }
    }
    #pragma endscop
}
