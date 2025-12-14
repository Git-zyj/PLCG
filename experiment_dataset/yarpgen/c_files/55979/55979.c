/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (16657 / (min(((max(var_2, 65535))), var_11)));
    var_15 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (arr_6 [i_1]);

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_17 -= ((!((126976 || (arr_2 [i_3 - 1])))));
                        var_18 = (max(var_18, var_8));
                    }

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = (~var_3);
                        var_19 = (max(var_19, ((((((arr_0 [i_0] [i_1]) - (arr_0 [i_4] [10]))) + 126976)))));
                    }
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        arr_15 [i_1] = ((-(arr_13 [i_1 - 2] [i_1 + 1] [i_1 + 1] [14] [i_1 - 1] [6])));
                        var_20 = ((!((((~(arr_14 [i_5])))))));

                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            var_21 -= (((-(arr_5 [i_0] [i_2] [i_5] [i_6 - 1]))) ^ (min(((1 ? (arr_1 [i_6 - 2]) : 3826636897)), ((-126949 ? var_9 : (arr_0 [17] [1]))))));
                            var_22 = ((((min((arr_11 [i_0] [i_1 + 1] [i_1 + 1] [i_5] [0] [12]), var_8))) ? (((arr_2 [i_0]) - (arr_2 [i_1 - 1]))) : (((var_12 % (arr_11 [i_0] [i_1] [17] [i_5] [i_6] [i_6 + 1]))))));
                            var_23 = (arr_17 [11]);
                            var_24 = ((((((!var_8) + (arr_1 [i_1 - 2])))) <= (max((max(var_12, var_3)), (arr_5 [1] [i_5 + 1] [1] [16])))));
                        }
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            var_25 = (arr_16 [13] [i_5] [10] [10] [13]);
                            var_26 = (((((arr_11 [i_5 + 1] [1] [4] [1] [4] [i_1 + 1]) & (arr_11 [i_7 + 2] [i_1 + 1] [i_7 + 2] [i_5 + 1] [i_1 + 2] [i_7]))) & (arr_18 [i_5] [i_1] [i_7 + 1])));
                        }
                        var_27 = (arr_9 [0] [i_2] [i_5 - 1] [5]);
                        arr_21 [i_1] = (max((((arr_8 [i_1 + 2] [i_1] [i_5 - 1]) ? (arr_8 [i_1 + 2] [i_1] [i_5 + 1]) : (arr_8 [i_1 - 1] [i_1] [i_5 + 1]))), (arr_8 [i_1 - 1] [i_1] [i_5 + 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
