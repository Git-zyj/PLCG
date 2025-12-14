/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_20 = (max((arr_10 [i_2 - 1] [i_3 + 1] [i_2] [i_4 + 1]), (arr_10 [i_2 - 1] [i_3 + 1] [i_2] [i_4 + 1])));
                                var_21 = (max(var_21, (min((((~((~(arr_8 [14] [i_3] [i_0] [i_0])))))), (((~608481471) ? (((~(arr_5 [i_0] [i_0] [i_0])))) : (~var_16)))))));
                                var_22 += (min(-var_0, (!var_7)));
                            }
                        }
                    }
                    arr_14 [13] [i_2] [i_2] = (max(608481478, 608481461));
                    var_23 &= (~-608481471);
                    var_24 *= (min(((!((max(var_3, -608481472))))), 1));
                    arr_15 [i_0] [i_2] [i_1] [i_2] = ((!((!((min((arr_11 [i_0] [i_1] [i_2] [9] [1]), 3167659606)))))));
                }
                var_25 = ((-1 ? (min((((!(arr_5 [i_0] [i_0] [i_0])))), (max((arr_5 [i_0] [i_1] [i_1]), (arr_12 [8] [2] [i_0] [i_1] [i_0]))))) : var_1));
                var_26 &= (min((min((arr_3 [i_0]), (min(-7390351632624269283, var_16)))), ((min((min(608481492, (arr_10 [i_0] [i_1] [i_0] [i_0]))), (max(var_16, (arr_0 [i_1] [i_1]))))))));
                var_27 += (~-246102214);
            }
        }
    }
    var_28 = (~var_11);

    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_29 = (min(var_29, ((-(arr_17 [1])))));
        arr_19 [i_5] = (((arr_18 [i_5]) ? (arr_16 [i_5]) : (arr_18 [i_5])));
    }
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        var_30 -= -1;
        var_31 = arr_0 [i_6] [i_6];
        var_32 -= -608481465;
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_33 = 1864984431;
        var_34 |= (min((((((-3 ? -7390351632624269265 : 608481471))) ? (min(2372534156561199246, 1)) : 1100050871)), (((-(arr_23 [6] [i_7]))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_32 [i_7] [i_8] [i_8] [i_9] = (!3194916424);
                    var_35 = 1;
                    var_36 = max((!-var_6), (min(2147483647, -7390351632624269283)));

                    for (int i_10 = 2; i_10 < 14;i_10 += 1)
                    {

                        for (int i_11 = 2; i_11 < 14;i_11 += 1)
                        {
                            arr_38 [1] [7] [i_8] [i_8] = (min((max((max(var_5, var_7)), (arr_10 [i_10 - 2] [i_11 - 1] [i_10] [i_10]))), (arr_35 [i_7] [i_8] [i_9] [i_11 + 1] [i_9] [i_11 + 1] [i_11 - 2])));
                            var_37 *= ((!(arr_8 [i_11 - 2] [i_11 - 2] [1] [i_10 + 1])));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            arr_41 [i_7] [2] [i_10 + 1] [i_10] [i_7] [2] [i_7] = (arr_40 [i_7] [i_8] [i_8] [i_8] [i_12] [8] [i_8]);
                            arr_42 [10] [10] [10] = (arr_7 [i_12] [i_10]);
                        }
                        arr_43 [i_10] [i_10] [i_10] [i_10] = ((-(((arr_13 [i_7] [i_8] [i_9] [i_8] [i_10 - 2] [i_9]) ? (((min(1, 1)))) : (((arr_9 [i_7] [i_7] [i_7] [1] [i_7]) ? (arr_26 [i_10] [i_10]) : -608481472))))));
                    }
                }
            }
        }
    }
    for (int i_13 = 2; i_13 < 22;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 23;i_14 += 1)
        {
            arr_50 [i_13] = (arr_17 [i_14]);
            var_38 = (max((arr_44 [i_13]), (~1)));
            var_39 = (max(-537125906, 705550998));
        }
        var_40 = ((1 ? 1100050895 : 3194916425));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            for (int i_16 = 3; i_16 < 22;i_16 += 1)
            {
                {
                    var_41 = (min(var_41, -1));
                    arr_57 [i_13] [i_15] [i_13] [i_13] = (arr_53 [i_13 + 1]);
                }
            }
        }
    }
    var_42 &= ((var_14 ? (max(var_4, (max(var_6, var_6)))) : (!1)));
    var_43 = min((max((!var_1), (max(var_1, var_15)))), (((!(!1)))));
    #pragma endscop
}
