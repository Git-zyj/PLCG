/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 &= ((((-(arr_3 [i_0]))) + ((((min((arr_0 [12] [i_0]), (arr_3 [i_0])))) + (((arr_3 [i_0]) - (arr_3 [i_0])))))));
        arr_4 [i_0] = (max((min(((~(arr_0 [i_0] [i_0]))), (arr_3 [i_0]))), (arr_3 [i_0])));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_11 = (((~((-(arr_3 [i_2]))))));
            arr_9 [i_1] = arr_0 [i_1] [i_1];
            var_12 = (max(var_12, ((((arr_6 [i_1 + 1]) - (arr_5 [i_1] [i_2]))))));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                arr_15 [0] [i_1] [i_1] [12] = ((!((max(((-(arr_6 [i_1]))), (min((arr_6 [i_4]), (arr_13 [i_3] [i_1] [i_3] [i_3]))))))));
                var_13 = ((~(min(-196513771, 1))));
                arr_16 [i_1] [i_3] [i_1] = min((arr_0 [i_1] [i_4]), (min((max((arr_2 [i_3]), (arr_12 [i_4] [i_4] [i_4] [i_1]))), ((((arr_13 [7] [i_1] [i_4] [i_4]) && (arr_10 [i_1] [i_1] [i_1])))))));
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_14 = (min(137, 17));
                var_15 = (arr_5 [i_5] [i_3]);
                var_16 = (arr_3 [i_3]);
            }
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                arr_22 [i_1] [i_1] [i_6] = ((!((!((min((arr_20 [9]), (arr_2 [i_6 + 1]))))))));
                arr_23 [i_1] [i_3] [i_1] = (arr_18 [i_1] [i_3] [i_1]);
                var_17 = (arr_12 [i_1] [i_3] [i_3] [i_1]);
            }
            arr_24 [i_1] [i_3] = (arr_12 [i_1] [i_3] [i_3] [i_1]);
        }
        arr_25 [i_1] = ((-((+(((arr_2 [i_1 + 1]) / (arr_5 [1] [i_1])))))));
        var_18 = (arr_2 [i_1 - 1]);
        var_19 = ((-(arr_13 [i_1] [i_1] [i_1] [i_1])));
        arr_26 [i_1] = arr_2 [i_1];
    }
    for (int i_7 = 4; i_7 < 12;i_7 += 1)
    {
        arr_29 [6] [4] = (arr_6 [i_7]);
        arr_30 [i_7 + 1] = ((!((((((!(arr_27 [i_7] [i_7]))))) == (((arr_14 [i_7] [i_7 - 3] [i_7] [i_7]) * (arr_17 [1] [i_7])))))));

        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {

            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                arr_36 [i_7 + 1] [i_8] [i_9] [i_8] = (((arr_6 [i_8 - 1]) % (min(((-(arr_27 [i_9] [12]))), (((-(arr_17 [i_8 - 1] [i_8]))))))));
                var_20 = ((((~(arr_0 [i_8] [i_8]))) * (arr_18 [i_7] [i_9 - 1] [i_8])));
                arr_37 [i_8] = ((!(4294967250 - 6)));
                arr_38 [i_9] [i_8] [i_8] [7] = ((~(arr_11 [i_7] [i_8] [i_9])));
            }
            for (int i_10 = 3; i_10 < 12;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 11;i_12 += 1)
                    {
                        {
                            var_21 = ((+(((!((min((arr_3 [i_7]), (arr_5 [i_8] [i_12 + 1])))))))));
                            var_22 = (max(var_22, (arr_42 [i_7] [i_11] [i_8] [i_8] [i_7])));
                            var_23 = (max(var_23, (((~(((!((min((arr_18 [1] [6] [i_7]), (arr_11 [i_12] [i_8 + 1] [i_7 - 4]))))))))))));
                            var_24 = (arr_0 [i_8] [i_8]);
                        }
                    }
                }
                var_25 = (max(var_25, ((max(((-((((arr_28 [i_7] [i_7]) == (arr_31 [i_7] [i_8 - 1])))))), (min(((-(arr_42 [i_7] [i_8 + 1] [i_8 - 1] [i_8] [i_8 + 1]))), (((!(arr_13 [i_7] [i_7] [i_8] [i_10 - 2])))))))))));
            }
            arr_47 [i_8] [i_8 + 1] [i_8] = (min((min((arr_27 [i_7] [i_7 + 1]), (min((arr_44 [i_8] [i_7 - 4]), (arr_40 [i_8] [i_8] [i_7] [i_7]))))), (((-((min((arr_41 [i_7 - 3] [i_7 - 3] [i_7] [5] [i_7 - 1] [i_7 - 1]), (arr_18 [i_8] [i_7 - 4] [i_8])))))))));
            var_26 = (arr_27 [i_7] [i_7]);
            arr_48 [i_8] [i_8] = (max((((((arr_2 [i_7]) && (arr_27 [i_7] [i_7 - 4]))) && ((!(arr_42 [i_8] [i_8] [i_8] [i_8] [i_8 + 1]))))), (((2 && 128) || ((min((arr_1 [i_7] [i_8]), (arr_32 [i_7 - 4] [i_8] [i_7 - 3]))))))));
        }
        var_27 = (max(var_27, ((min((arr_2 [i_7]), (((!(arr_18 [i_7] [0] [i_7])))))))));
        var_28 &= (arr_2 [i_7]);
    }
    var_29 = (!var_6);
    var_30 = (!-73);
    #pragma endscop
}
