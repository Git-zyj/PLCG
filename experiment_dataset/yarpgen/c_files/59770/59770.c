/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (max(var_18, 43829));
        var_19 = ((((arr_1 [i_0]) || var_11)) ? (arr_2 [i_0] [i_0]) : (((arr_2 [i_0] [i_0]) / -7382697701171039647)));
        arr_3 [i_0] = (((arr_0 [i_0]) ? (((-7382697701171039655 ? (arr_0 [i_0]) : (arr_1 [i_0])))) : -8375662712093501679));
        var_20 += (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_21 = ((((arr_4 [i_1] [i_1]) <= (((arr_6 [i_1 - 1]) % var_0)))));
        var_22 = ((arr_5 [i_1 - 1]) >> ((((~(arr_5 [i_1 - 1]))) + 22)));
        var_23 = (min((1385720789 | -8375662712093501679), ((max(84, -301280899)))));
        arr_7 [i_1] [i_1] = -2988;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 11;i_3 += 1) /* same iter space */
        {
            arr_13 [i_2] = (min(8375662712093501678, ((-301280913 ? 100 : (arr_6 [i_3])))));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_17 [i_2] [i_2] [i_2] = (arr_11 [i_2]);
                var_24 = ((var_9 ? (((min(((min(0, 0))), 0)))) : (min(-8375662712093501678, (arr_5 [i_3 - 1])))));
                var_25 = 50176;
                var_26 = (((((((-(arr_8 [i_2])))) ? 1 : var_5)) >> (((((min(301280913, -2988)))) - 57))));
                var_27 = ((min((arr_0 [i_2]), ((((arr_2 [i_2] [i_4]) * 0))))));
            }
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
        {
            arr_22 [i_2] [i_2] [i_2] = -301280899;
            var_28 = ((0 ? 1 : -3882217551344589440));
            var_29 = -0;
            arr_23 [i_2] [10] = var_9;
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
        {
            arr_27 [i_2] [i_6] = var_6;
            var_30 = (min(var_30, var_16));
            var_31 = (max(var_31, var_14));
        }
        var_32 = (arr_21 [i_2] [i_2] [i_2]);
    }
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 16;i_9 += 1)
            {
                {
                    var_33 = 10780;
                    var_34 = (min(28904, 10485));
                    arr_35 [7] [i_7] [11] [i_7] = ((((((arr_29 [i_9]) << (-6011490257809551072 + 6011490257809551078)))) + ((((0 ? 0 : var_11)) >> (((~var_14) + 11))))));
                }
            }
        }
        arr_36 [i_7] [i_7 - 1] = (max(var_5, (((max(-3483064620535874565, 10137)) ^ var_11))));
        arr_37 [i_7] [i_7 - 1] |= (((((max(var_14, (arr_33 [4] [i_7] [i_7] [i_7]))))) ? ((((max(1, 1))) + ((1 - (arr_33 [4] [i_7] [i_7] [i_7]))))) : (max(36892, -var_8))));
        arr_38 [i_7 + 1] [i_7 + 1] = ((((((~(((arr_33 [i_7] [i_7] [i_7] [i_7 - 1]) * 0)))) + 2147483647)) >> (6011490257809551071 - 6011490257809551049)));
    }
    var_35 = (min(var_35, ((max(-5068002481115972405, ((((((118 ? var_13 : var_9))) || (-127 - 1)))))))));
    #pragma endscop
}
