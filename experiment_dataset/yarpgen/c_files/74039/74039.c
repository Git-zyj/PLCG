/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = ((((((((var_7 ? var_9 : var_1))) ? -288212783965667328 : var_4))) ? ((((min(var_4, 1))) ^ (var_14 == var_2))) : (((var_0 || 2972367225) ? (var_9 >= 32755) : (max(-1025332698, 1025332697))))));
    var_18 = max(var_12, (var_6 > 1025332668));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] = (min((arr_4 [i_0] [1]), ((((((arr_3 [i_0] [i_0] [i_2]) - (arr_5 [0] [i_0] [i_1] [i_2])))) ? 1025332724 : (min(var_7, (arr_4 [i_1 + 1] [i_2])))))));

                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] = ((((((((arr_6 [i_0] [i_0]) == (arr_5 [i_0] [i_0] [i_0] [i_0]))) ? (~2147483640) : (!-1025332723)))) ? 1 : ((-18446744073709551615 % (((99 ? 46 : (arr_2 [i_2]))))))));
                        var_19 = (max(var_19, (((((min(((max(var_11, (arr_1 [i_1])))), -1044179844))) ^ ((~(arr_3 [i_0] [12] [i_2]))))))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_20 = (min(var_20, ((min(((((((arr_12 [i_0] [i_4] [4] [i_4] [i_0]) ? (arr_14 [i_0] [14] [i_0] [i_0]) : (arr_11 [i_0] [i_4] [i_0] [i_4]))) > (arr_13 [i_1])))), (max(23993, 22828)))))));
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_4] = 113;
                        var_21 = (((((-((1 ? (arr_6 [i_0] [i_0]) : -1500089098))))) ? (arr_11 [i_0] [i_0] [i_0] [i_1]) : -100));
                        arr_16 [i_0] [i_0] = (((max(23993, (((arr_5 [i_0] [i_0] [i_2] [i_4]) ? var_0 : var_0)))) > ((((~var_6) != (((~(arr_5 [i_0] [i_0] [i_2] [i_4])))))))));
                        var_22 = (max(var_22, var_11));
                    }
                }
            }
        }
    }
    var_23 = var_0;
    #pragma endscop
}
