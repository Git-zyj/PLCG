/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 = (min(var_18, -0));
        var_19 = ((-(((arr_0 [i_0 - 1]) ? (arr_0 [i_0]) : (arr_1 [i_0 + 2])))));
        var_20 = (((arr_1 [i_0]) ? ((((((1 ? (arr_1 [i_0]) : (arr_0 [i_0]))) >= ((-722954527 ? 7923386897192545636 : 7923386897192545634)))))) : ((-(((arr_1 [i_0]) ? (arr_0 [i_0 - 1]) : (arr_1 [i_0])))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                var_21 = (min(var_21, 1));

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_22 = ((((((arr_7 [i_1] [i_3]) * (arr_7 [i_1] [i_2])))) ? ((-(arr_7 [i_2] [i_3]))) : (((arr_7 [i_1] [i_2]) ? (arr_7 [i_3] [i_2]) : (arr_7 [i_1] [i_1])))));
                    var_23 = ((-(arr_1 [i_1])));
                }
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    var_24 = (((~1) ? (~-235) : 1));
                    var_25 = ((((-(arr_8 [i_1] [i_4 - 2] [i_4 - 2]))) & ((51595 ? 1 : (arr_8 [10] [i_4 + 2] [i_4])))));
                    var_26 = (((((!((((arr_6 [4] [6] [i_4]) ? -7499 : 3750416159)))))) >> ((((!(arr_1 [i_4]))) ? ((((arr_4 [i_1]) ? 0 : (arr_0 [i_1])))) : ((1610919589 ? 1 : (arr_8 [11] [7] [i_4])))))));
                    var_27 = (-((max(1, (arr_13 [i_1] [i_2] [i_4])))));
                    var_28 = 51595;
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_29 = ((-(arr_2 [i_5])));
                        var_30 = (min(var_30, var_6));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_31 = (((arr_1 [i_7]) || (((-(-27069 + -14452))))));
                        var_32 = ((-(((arr_15 [i_1] [i_1] [i_7]) ? (arr_12 [i_1] [i_2] [i_5] [i_7]) : (arr_9 [i_1] [i_5] [i_7])))));
                        var_33 = 24;
                        var_34 = ((~((-(!129)))));
                    }
                    var_35 = (!-1);
                }
                var_36 = var_5;
                /* LoopNest 3 */
                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_37 = (((var_3 / (arr_26 [6] [i_2] [6] [i_9]))));
                                var_38 &= ((((((arr_9 [i_2] [i_9] [i_10]) && (arr_1 [i_1])))) < (((((((arr_22 [7] [i_9]) > 17511))) == (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                                var_39 = ((var_12 / (arr_12 [i_9] [i_9 - 3] [i_9] [i_9 - 1])));
                                var_40 = (min((((((((~(arr_27 [i_8] [i_8] [i_8] [i_8] [i_8 + 1] [i_8]))) + 2147483647)) >> ((((228 ? (arr_3 [i_10]) : (arr_10 [4] [i_1]))) - 172))))), ((((var_4 ? (arr_22 [i_1] [i_2]) : var_0)) & var_15))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_41 = ((var_3 ? ((~(var_16 * 1857750234))) : (((((255 == 129) != 2871587578))))));
    var_42 = ((~(~var_11)));
    var_43 = var_1;
    #pragma endscop
}
