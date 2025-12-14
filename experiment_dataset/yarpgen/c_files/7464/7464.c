/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_4));
    var_11 = (min(var_11, var_5));
    var_12 = ((var_6 <= (!var_6)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_2] [14] [i_4] [i_0] = ((((arr_0 [i_0]) ? var_7 : -var_4)));
                            arr_13 [i_0] [i_0] [i_0] [8] = ((var_7 / ((max((max((arr_1 [i_3]), var_7)), (max(11, 65503)))))));
                            var_13 = max(((((arr_3 [i_3] [i_1]) <= var_3))), var_3);
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_14 = (min(var_14, (((-((((arr_9 [8] [i_0] [i_0] [i_0] [i_0] [i_0]) >= var_6))))))));
                            arr_18 [i_0] = (((arr_0 [i_0]) ? ((var_2 >> ((var_5 ? 10 : (arr_4 [i_3] [i_3 - 1] [i_3]))))) : (14519 != 20855)));
                        }
                        arr_19 [2] [i_0] [i_2] [i_3] [i_3] = ((-(((((arr_6 [1] [1] [i_2] [i_2]) + 2147483647)) >> (((arr_6 [i_0] [i_1 + 1] [i_2] [i_3 + 1]) + 34))))));
                        var_15 = var_5;
                        var_16 = (max(var_16, (((~(arr_11 [i_0] [i_1 - 1] [i_1] [i_1] [i_0] [i_0]))))));
                        arr_20 [i_2] [i_1 - 1] [i_1 - 1] [i_1] [i_2] [i_1] &= ((((-950299974 + 2147483647) >> (44674 - 44648))));
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_17 = (max(((max((var_7 - var_7), (max(32089, (arr_2 [i_2] [i_2])))))), ((0 << (((arr_16 [i_7] [i_7]) - 44150))))));
                            var_18 = (((arr_2 [i_0] [i_1]) ? (((((var_0 ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (arr_17 [i_6] [i_6] [i_1])))) ? (min((arr_9 [i_0] [i_1] [i_0] [i_6] [i_0] [i_6]), var_5)) : (arr_4 [i_6 + 1] [i_6 + 1] [i_6]))) : (((((((arr_1 [i_1]) ? (arr_15 [i_0] [i_1] [i_1] [i_7] [i_7]) : var_2)) >= (arr_0 [i_1 - 1])))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_19 = (max(var_19, (((var_2 ? (((arr_4 [i_0] [i_0] [i_2]) ? (arr_1 [i_0]) : var_6)) : (arr_8 [i_6]))))));
                            var_20 += (!(arr_21 [i_1 - 1]));
                        }
                        arr_28 [i_6] [i_0] [i_2] [i_1] [i_0] [i_0] = 82555431;
                        arr_29 [i_0] [i_1 + 1] [i_0] [i_6] [i_2] [i_6] &= (min((arr_6 [i_0] [i_1] [i_2] [i_6 - 1]), (arr_8 [i_0])));
                    }
                    for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        var_21 = (max(var_21, (arr_17 [i_9] [i_2] [i_1])));
                        var_22 = (arr_15 [i_0] [i_1] [i_2] [10] [i_9 - 1]);
                        arr_32 [i_9] [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        arr_36 [i_0] = ((var_6 << (arr_8 [i_1 + 1])));
                        arr_37 [i_0] [i_0] [i_0] [i_10] = (min(var_5, (((((((-9223372036854775807 - 1) ? 2149747814 : 247))) != (((arr_27 [8]) ? (arr_26 [i_10] [i_1] [10] [i_10] [i_1 + 1] [i_2]) : var_8)))))));
                    }
                    var_23 = (var_8 << (!-107));
                }
            }
        }
    }
    #pragma endscop
}
