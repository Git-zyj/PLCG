/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_1 ^ var_19) ? (max(var_6, var_14)) : (((var_9 ? 32 : var_16))))));

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_21 = (max(1, 1158009301));
        var_22 = (max(var_22, (arr_1 [i_0])));
        var_23 = ((max((arr_0 [i_0]), (((arr_0 [i_0]) ? (arr_0 [i_0]) : 805253053)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        arr_5 [i_1] = ((!(arr_4 [i_1 - 1])));

        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            arr_9 [i_1] [i_1 - 1] [i_1] = var_12;
            var_24 = (((((var_10 ? 23335 : var_2))) ? (arr_6 [i_1 - 1]) : (((arr_6 [i_1 + 3]) ? (arr_1 [i_2]) : (arr_2 [i_1] [i_2])))));
        }
        var_25 = (arr_1 [i_1]);
    }
    var_26 = ((-(max((min(-1377914441, 1)), var_6))));

    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_27 |= -693099304;
                var_28 = (max((arr_16 [i_5] [i_4] [8]), (arr_7 [i_4] [i_3 + 1] [i_3 - 3])));
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                var_29 = ((((((arr_10 [i_3 + 1] [i_3 - 1]) ? (arr_16 [i_3 - 3] [i_4] [5]) : ((13800 ? 1039356353460997616 : var_1))))) ? (min(805253050, (!65341))) : ((max((arr_7 [i_3 - 1] [i_3 - 1] [1]), (arr_7 [i_3 + 1] [i_3 + 1] [5]))))));
                var_30 = (max((arr_14 [i_3]), 1862329313));
                arr_20 [i_3] [i_4] [8] [i_3] = (((((var_10 ? var_4 : (arr_14 [3])))) - (arr_2 [i_3] [i_3])));
                var_31 = (arr_6 [i_3 + 1]);
            }
            var_32 = (!((max(((-(arr_4 [1]))), (arr_13 [i_3] [i_3 - 1] [i_3])))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            arr_25 [i_3] [i_7] [i_7] = (arr_15 [i_3 - 2] [i_3] [i_3 - 1]);
            var_33 = -55571;
            var_34 = ((var_10 ? ((17837292466349823058 << (arr_19 [i_3 - 2] [i_7] [i_3] [i_3 - 2]))) : (arr_1 [i_3 - 1])));
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
        {
            arr_28 [i_8] [i_8] = (((~(arr_14 [i_3 - 2]))));
            var_35 = (arr_18 [i_3] [i_8] [i_8]);
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
        {
            var_36 = (((~21902) ? ((max((arr_21 [i_3] [i_9] [i_3 - 1]), (arr_21 [7] [7] [i_3 - 1])))) : (arr_16 [i_3] [1] [i_9])));
            var_37 = ((var_5 ? (((((arr_15 [3] [i_9] [i_3 - 1]) <= ((((arr_2 [i_3] [i_9]) >= 17837292466349823058))))))) : 1574747546));
        }
        var_38 = (max((arr_30 [i_3 - 2] [i_3]), ((((arr_18 [i_3] [i_3] [i_3 + 1]) & var_1)))));
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 17;i_10 += 1)
    {
        var_39 = var_1;
        var_40 = -var_19;
        var_41 = (min(var_41, (arr_33 [6])));
        arr_34 [i_10] = (arr_0 [19]);
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        arr_42 [i_10] = (((arr_0 [i_10 + 1]) ? 24 : (arr_0 [i_10 - 3])));
                        var_42 = ((!(arr_39 [i_10 - 1])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        var_43 = ((!(arr_30 [i_14] [i_14])));
        arr_46 [i_14] = ((-(arr_36 [i_14] [i_14])));
        var_44 = (~55579);
        var_45 = (arr_23 [i_14] [i_14]);
    }
    #pragma endscop
}
