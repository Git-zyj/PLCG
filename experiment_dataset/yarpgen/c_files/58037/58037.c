/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((~(!var_0)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] = ((+(((((arr_3 [i_0] [i_0] [i_1]) + 2147483647)) << (((arr_3 [i_0] [i_1] [i_1]) + 65))))));
            arr_7 [i_0] [i_1] = (min((((+(((arr_0 [i_1]) ? (arr_3 [i_0] [i_0] [i_1]) : (arr_3 [i_0] [i_0] [i_0])))))), ((((min(34558, (arr_3 [i_0] [i_1] [i_1])))) ? (min((arr_5 [i_0] [i_1] [i_1]), (arr_5 [i_0] [i_1] [i_1]))) : (((-(arr_2 [i_1]))))))));
        }
        arr_8 [i_0] = (!-18681);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_19 = ((-(arr_5 [i_2] [i_2] [i_2])));
        var_20 = ((!(arr_9 [12])));
        var_21 = (((arr_10 [i_2]) ? (arr_9 [i_2]) : (arr_1 [i_2])));
        var_22 = (+-127);
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_23 = (((arr_3 [i_3] [i_3] [i_3]) ? (((arr_11 [i_3]) ^ ((min((arr_14 [i_3] [i_3]), (arr_11 [i_3])))))) : -568));
        var_24 = ((((min((arr_12 [i_3]), (arr_12 [i_3])))) ? ((~((min((arr_3 [i_3] [i_3] [6]), (arr_9 [i_3])))))) : ((~(((arr_3 [i_3] [i_3] [i_3]) ? -120 : (arr_3 [5] [i_3] [3])))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        var_25 = (arr_5 [i_4] [i_5 - 1] [i_6]);
                        var_26 = (((arr_11 [i_3]) ? (((arr_19 [i_3] [10] [4] [4] [4] [i_3]) | (arr_21 [i_3]))) : (((arr_14 [i_4] [i_6]) << (-8669449204141223758 + 8669449204141223773)))));
                        arr_22 [i_3] [i_4] [i_5 - 1] = ((!(arr_19 [i_5 - 1] [i_4] [i_5 - 1] [i_6] [i_5 - 1] [i_5 - 1])));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_3] [i_4] [i_5] = ((+((min((arr_10 [i_4]), (arr_20 [i_4] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_7]))))));
                        arr_27 [i_3] [i_3] [i_4] [i_4] [i_5 - 1] [9] = arr_2 [i_3];
                    }

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_27 = (min(((-(arr_15 [i_5 - 1] [i_5 - 1] [i_5]))), (((arr_28 [i_5 - 1] [i_4] [i_5 + 1]) ? (arr_28 [i_5 - 1] [i_4] [i_5 + 1]) : (arr_28 [i_5 - 1] [i_5 - 1] [i_5])))));
                        arr_30 [i_3] [i_4] [i_5 + 1] [i_5 + 1] [i_8] [10] = (min((arr_18 [i_3] [i_4] [i_5 + 1] [i_8]), (arr_18 [i_3] [i_4] [i_5 + 1] [i_3])));
                    }
                    for (int i_9 = 3; i_9 < 11;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            var_28 = ((-((-((min((arr_33 [i_3] [i_4] [i_9 + 1] [i_10]), (arr_23 [i_3] [i_4] [i_5] [i_9]))))))));
                            arr_36 [i_3] [i_4] [i_5 + 1] [i_9] [i_10] = (3639 * 22);
                        }
                        var_29 = (min((min(((((arr_29 [i_3] [i_4] [i_5 + 1]) == (arr_5 [12] [i_5 + 1] [i_9])))), (arr_12 [i_3]))), (((!(arr_19 [i_3] [i_3] [i_4] [i_5 - 1] [i_5 + 1] [i_9 + 1]))))));
                        var_30 = (~((((((arr_28 [i_3] [i_4] [i_5]) ? (arr_11 [i_3]) : (arr_9 [i_3])))) | (min((arr_32 [i_3] [i_4] [i_5 - 1] [0] [i_3]), 1665461283328452369)))));
                    }
                    arr_37 [i_3] [5] [i_5 - 1] = 22;
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                {
                    arr_47 [i_11] = ((~((+(((arr_29 [i_11] [i_12] [i_13]) + (arr_38 [i_12] [i_13])))))));
                    var_31 = ((((arr_14 [i_11] [i_12 - 1]) <= (arr_14 [i_11] [i_12 - 1]))) ? (min(-4286253366196479065, -125)) : (((min((arr_14 [i_11] [i_12 + 1]), (arr_14 [i_11] [i_12 + 1]))))));
                }
            }
        }
        var_32 = (arr_5 [i_11] [i_11] [i_11]);
        var_33 = (arr_21 [i_11]);
    }
    var_34 = 12;
    #pragma endscop
}
