/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = ((((min(var_6, (arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_14 = (((((((~(arr_7 [i_0] [i_1] [i_0] [i_3]))) ^ (((arr_8 [i_0] [i_2] [i_2] [i_3] [i_2 + 1] [i_2 + 1]) ? (arr_4 [i_0] [i_1] [i_1]) : var_1))))) | ((~(arr_5 [i_1] [i_1 + 1] [i_1 + 1])))));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_15 = (min(var_15, 783267611));
                            var_16 = var_2;
                            var_17 = (arr_6 [i_0] [i_0]);
                            var_18 = (min(var_18, ((max((arr_3 [i_3] [i_3] [i_4]), (max(var_1, (arr_6 [i_0] [i_0]))))))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_19 = ((+(((arr_6 [i_0] [i_0]) ? (((19 * (arr_0 [i_3] [i_2])))) : var_5))));
                            var_20 = ((28 ? (min(var_11, var_3)) : var_8));
                            var_21 = ((-(((!(arr_2 [i_1 + 1] [i_1]))))));
                            var_22 *= (((arr_7 [i_0] [i_3] [i_2] [i_0]) ? (((142 ? 2240241970 : 89))) : -126));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_23 = var_6;
                            var_24 = (min(var_24, (--89)));
                            var_25 = (min(var_25, ((min((arr_10 [i_1 + 1] [i_3] [i_2 - 1]), ((-(arr_16 [i_1 + 1] [i_3] [i_2 + 1]))))))));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_26 = ((-(~2240241988)));
                            var_27 = ((!(((arr_0 [i_1 + 1] [i_2 - 1]) != (arr_0 [i_1 + 1] [i_2 + 1])))));
                            var_28 ^= ((+((-(((arr_14 [i_3] [i_3] [1] [i_3] [i_3] [i_3] [i_3]) ? 65513 : (arr_14 [i_7] [i_2 - 1] [i_0] [i_2 - 1] [i_1] [i_0] [5])))))));
                        }
                        var_29 = (max(var_29, ((max(((min((!1), -37))), var_7)))));
                        var_30 = (max(1, 2054725337));
                        var_31 = (max(var_31, var_11));
                    }
                }
            }
        }
    }
    #pragma endscop
}
