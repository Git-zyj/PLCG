/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_0 [i_0] [i_1 + 3]);
                var_17 += (max((min(1, 1)), (arr_1 [i_1])));

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? ((((-23 + 2147483647) << ((((((max((arr_6 [i_1] [i_1 + 3] [i_1] [i_1]), 1))) ? (((arr_2 [i_0]) / (arr_1 [i_0]))) : (((var_9 ? (arr_4 [9] [i_0]) : (arr_1 [i_1])))))) - 16102146))))) : ((((-23 + 2147483647) << ((((((((max((arr_6 [i_1] [i_1 + 3] [i_1] [i_1]), 1))) ? (((arr_2 [i_0]) / (arr_1 [i_0]))) : (((var_9 ? (arr_4 [9] [i_0]) : (arr_1 [i_1])))))) - 16102146)) - 4281787380)))));
                    arr_9 [i_0] [i_0] [2] [2] = (max(((-(((arr_2 [i_0]) ? (arr_3 [i_0]) : var_15)))), 1));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_0] = var_14;
                        arr_15 [i_0] [i_0] [i_3] [16] |= (-1 ? (arr_11 [i_0]) : (((arr_3 [11]) & (arr_7 [2] [2]))));
                    }
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        var_18 = (min(var_18, ((((((~(arr_2 [8])))) / ((var_6 + (arr_6 [i_2] [i_2 + 1] [i_2] [i_4 + 2]))))))));
                        var_19 = ((max(-35, (34 & 127))));
                    }
                    var_20 = (~5412);
                }
            }
        }
    }
    var_21 = ((((45464 - 0) == var_13)) ? 1 : -5326056403474286122);

    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            arr_25 [i_5] = ((((((arr_20 [i_5] [i_6 + 1]) ? (arr_20 [i_5] [i_5]) : (arr_20 [i_5] [i_5])))) ? (((((arr_4 [i_5 + 2] [i_5 + 1]) != (arr_1 [i_6]))))) : (((((arr_6 [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1]) ? 60123 : (arr_19 [i_6]))) * var_11))));
            arr_26 [i_5] [i_5] [i_5] = (max((arr_17 [i_5 + 2] [i_5] [i_5 + 2] [i_6] [i_6 + 1]), (((((-50 ? var_10 : (arr_22 [i_5] [i_6 + 1] [i_6]))) > 250)))));
            arr_27 [i_5] [i_5] = (((arr_16 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_6 + 1]) > (arr_6 [i_5 + 1] [i_5 + 2] [i_5] [i_5])));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            arr_31 [i_5] [i_5] = ((((((arr_11 [i_5 + 2]) < (arr_11 [i_5 - 1])))) != ((max(var_1, (arr_11 [i_5 + 2]))))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((((min((((arr_12 [i_5 + 1] [i_7] [i_8] [i_9] [i_10]) & var_13)), (((!(arr_0 [22] [i_7])))))) ^ ((min(var_14, (arr_38 [i_9] [i_8] [i_7] [i_5])))))))));
                            var_23 = (max((arr_3 [i_5]), var_8));
                        }
                    }
                }
            }
        }
        var_24 = (max(var_24, (((((((arr_12 [i_5] [i_5] [i_5 + 1] [i_5] [i_5 - 1]) ? -7801780553079874342 : 45464))) ? (((max((arr_38 [i_5] [i_5 + 1] [i_5 - 1] [i_5]), (arr_13 [i_5] [i_5] [i_5 - 1] [i_5]))))) : ((((((arr_4 [i_5 + 2] [i_5 + 2]) << (((arr_34 [i_5 - 1] [i_5] [8] [i_5 - 1]) - 45578))))) ? (arr_37 [i_5 + 1] [i_5 + 1]) : (((var_2 & (arr_7 [20] [i_5 - 1])))))))))));
    }
    #pragma endscop
}
