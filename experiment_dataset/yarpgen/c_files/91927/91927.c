/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((!((max(((var_8 ? var_18 : var_1)), (~var_15))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = (((!var_19) * (32742 != -1172791098)));
        var_22 = (max(var_22, (((-(((((var_3 ? (arr_1 [i_0]) : (arr_0 [8])))) ? (((var_13 ? 19 : var_6))) : (arr_0 [i_0]))))))));
        var_23 = (max((~var_10), ((var_10 + (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_24 = ((+(((((~382926703) + 2147483647)) >> ((((223 ? 3344 : 1796047301)) - 3314))))));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_25 = (235 & 103);
            arr_7 [i_2] = ((~((max(var_5, var_13)))));
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
            {
                arr_15 [i_3] = (((arr_3 [12]) & (arr_6 [i_3 - 2] [i_3 - 1])));
                arr_16 [i_3] [18] [i_1] [i_3] = ((var_6 == (((0 > (arr_9 [i_1] [i_1]))))));
                arr_17 [i_3] [i_3] [i_3] = -25493;
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                arr_21 [i_3] = ((3349 ? var_6 : var_5));
                var_26 = 17868905209504743667;
                var_27 = (arr_18 [i_3] [i_3]);
                var_28 = (min(var_28, (2003577361 / 28594)));
                var_29 = (var_17 == var_1);
            }
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                arr_24 [i_1] [i_3] [i_3] [i_6 + 3] = (arr_8 [i_3 - 3] [i_3] [i_1]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            arr_29 [i_1] [i_3 - 3] [i_6] [i_7] [i_8] [i_7] |= ((~(arr_25 [i_7] [i_3 + 1] [i_7])));
                            var_30 -= ((!(arr_26 [13] [13] [i_3 + 1] [i_8] [13] [i_8])));
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {

                for (int i_10 = 2; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    arr_37 [i_1] [i_1] [i_9] [i_10] [i_10] [i_3] = ((~(arr_12 [i_10 - 2] [i_3] [i_3 - 1] [i_10])));
                    arr_38 [i_3] = 13565366591940691167;
                }
                for (int i_11 = 2; i_11 < 22;i_11 += 1) /* same iter space */
                {
                    var_31 |= ((arr_39 [4] [i_3 - 2] [i_9]) + (var_2 + var_10));

                    for (int i_12 = 1; i_12 < 23;i_12 += 1)
                    {
                        arr_43 [i_3] [i_3] [i_3] = (((9033 ? (arr_1 [i_11]) : var_7)) ^ (~27936));
                        arr_44 [i_1] [i_3] [i_1] = ((5 ? var_14 : 868501181));
                        var_32 = (max(var_32, (((323419428 ? var_15 : var_12)))));
                    }
                }
                arr_45 [i_3] [i_3 - 1] [i_1] [i_9] = ((1174896332 ? (~11860292389357371772) : (~5)));
            }
            var_33 = (((arr_30 [i_3 - 3] [i_3 - 1] [i_3]) - (arr_30 [i_3 - 1] [i_3 - 3] [i_3])));
            arr_46 [i_3] = (((arr_8 [i_3 - 1] [i_3] [i_3 + 1]) || var_1));
            var_34 = ((0 ? -1174896333 : var_2));
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            arr_50 [13] [i_13] [i_13] = ((41 + ((~(((arr_41 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_48 [i_1]) : -2147483646))))));
            var_35 -= (((34064 ? 61 : (arr_10 [i_13]))) >> (((((arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? 8710057153359551655 : var_17)) - 8710057153359551635)));
        }
        arr_51 [i_1] = ((15 >> ((((2003577340 ? var_4 : (arr_48 [i_1]))) + 21382))));
        arr_52 [i_1] |= (~((2003577352 ? 11 : 7729448914985492895)));
        var_36 &= (max((((!3532934022425567631) ? (max(var_5, (arr_5 [i_1] [i_1] [i_1]))) : (!-1))), (((4991761704389073160 ? var_11 : (arr_49 [i_1]))))));
    }
    #pragma endscop
}
