/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -181;
    var_16 = 58;
    var_17 = (~((~(!var_7))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_18 = var_4;
            var_19 = (((((!(arr_4 [i_1])))) & (~255)));
            var_20 = ((-((~(arr_5 [i_0] [i_0])))));
            var_21 = (var_11 + var_8);
        }
        var_22 = (max(var_22, (((-(arr_1 [i_0]))))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_23 = ((!(arr_3 [i_2] [i_2] [i_2])));
        var_24 = ((!((max((arr_0 [i_2]), var_8)))));
        var_25 = (!var_6);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_26 = ((!((min(((2958237733 ? 1336729574 : 412411969)), (((!(arr_13 [i_2] [i_2] [i_2])))))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_27 |= ((0 + (arr_0 [i_2])));
                            var_28 = (((arr_8 [i_2] [i_2]) ? var_8 : ((((arr_17 [i_2] [i_2] [i_3] [i_4] [i_3] [i_3]) && var_0)))));
                            var_29 = (max(var_29, ((((195 != var_8) ? (arr_2 [i_4]) : (var_12 | 2958237733))))));
                        }

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_30 = (max(var_30, (((var_1 - (arr_16 [i_7] [i_5] [i_7] [i_7] [i_3] [i_2]))))));
                            var_31 = (min(var_31, (((((((arr_13 [i_2] [i_2] [i_4]) ? (arr_4 [i_5]) : 3373665108))) ? (arr_21 [i_2] [i_7] [i_4] [i_7] [i_4] [i_7]) : ((((arr_19 [i_7]) & (arr_2 [i_5])))))))));
                            var_32 = (max(var_32, ((((!2958237711) | (arr_1 [i_2]))))));
                        }

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_33 = (max(var_33, ((((arr_14 [i_2] [12] [i_2] [i_2] [i_8]) & -var_14)))));
                            var_34 = ((~(arr_20 [i_2] [i_2] [i_4] [i_5] [i_8])));
                            var_35 = ((((~(arr_25 [i_2] [i_3] [i_4] [i_4] [i_2]))) - (arr_25 [i_2] [i_3] [i_4] [i_5] [i_4])));
                            var_36 = (arr_3 [i_8] [i_4] [i_4]);
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_37 &= var_5;
                            var_38 = (arr_5 [i_9] [i_3]);
                            var_39 = ((arr_13 [i_2] [i_3] [i_2]) ? (((!(arr_27 [i_2] [i_2] [i_4] [i_5] [i_5] [i_5] [i_2])))) : ((var_7 ? (arr_4 [i_2]) : var_4)));
                            var_40 = ((((20 ? (arr_4 [i_2]) : 1)) << (((var_11 & var_11) - 742180114))));
                            var_41 = (((~-94) != (((arr_11 [i_2] [i_2] [i_5] [i_3]) ? (arr_23 [i_2] [i_3] [i_5] [i_5] [i_9]) : (arr_21 [i_2] [i_3] [i_4] [i_5] [i_5] [i_9])))));
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_42 = (arr_10 [i_2] [i_2]);
                            var_43 &= 158796826;
                            var_44 = ((var_4 || (((1889042551 ? var_6 : var_0)))));
                            var_45 &= 58;
                        }
                        var_46 = (arr_18 [i_2] [i_3] [i_3] [i_3] [i_4] [i_4] [i_5]);
                        var_47 = (min(var_47, (((-(arr_25 [i_2] [i_3] [i_4] [i_4] [i_5]))))));
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_12 = 3; i_12 < 17;i_12 += 1)
                        {
                            var_48 = (arr_22 [i_3] [i_3] [i_4] [i_11] [i_12] [i_3] [i_3]);
                            var_49 = (+(((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3]) ? var_10 : var_10)));
                        }
                        var_50 = (max(((-4136170491 ? (arr_26 [i_3] [i_3] [i_4] [i_3] [i_3]) : (arr_12 [i_2] [i_2] [i_4] [i_11]))), (((arr_8 [i_11] [i_4]) - (arr_1 [i_3])))));
                        var_51 = ((((max((min((arr_5 [i_2] [i_2]), var_8)), (((arr_6 [i_2] [i_11]) | (arr_19 [i_3])))))) - (((arr_20 [i_2] [i_2] [i_3] [i_4] [i_11]) ? 158796805 : 32767))));
                    }
                    for (int i_13 = 1; i_13 < 17;i_13 += 1)
                    {
                        var_52 = (min((~1), 1));
                        var_53 = ((~((max(((max((arr_30 [i_2] [i_3] [i_3] [i_2] [i_4] [i_4]), (arr_11 [i_2] [i_3] [i_3] [i_3])))), (arr_2 [i_3]))))));
                    }
                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 16;i_14 += 1)
                    {
                        var_54 = (49680 << 1);
                        var_55 += (arr_17 [i_14] [i_14] [i_14] [i_14] [i_14 + 3] [8]);
                        var_56 = (var_10 || 49701);
                    }
                }
            }
        }
    }
    #pragma endscop
}
