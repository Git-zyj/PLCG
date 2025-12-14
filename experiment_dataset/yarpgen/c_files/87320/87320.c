/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [20] [i_0] = (~var_4);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    {
                        var_13 += (-(((!(((-(arr_9 [i_0]))))))));
                        var_14 = (max(((((arr_9 [i_2]) >= (((max(52331, (arr_1 [19] [i_3])))))))), (((arr_7 [5] [i_1] [0]) ? (max(var_0, 1)) : var_12))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_15 = (~0);
        var_16 = min(((max((arr_4 [i_4] [i_4] [3]), (max(33554400, (arr_1 [17] [i_4])))))), ((-12 % (arr_8 [i_4] [i_4]))));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_17 = (max(var_17, (arr_7 [i_5] [1] [i_5])));
        var_18 = var_10;
        var_19 = (min((!149), ((-1 < (arr_11 [i_5])))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_20 *= ((arr_7 [i_7 - 1] [i_7 + 1] [i_7 + 1]) ? (((-((min((arr_12 [i_7] [i_5]), (arr_20 [i_5] [i_6]))))))) : 13625257269032403311);
                        var_21 = (arr_8 [i_8] [i_8]);
                        var_22 = 130560;
                        var_23 = (max((((arr_7 [i_7 + 1] [i_7 - 1] [24]) ? (arr_7 [i_7 + 1] [i_7 - 1] [i_7 + 1]) : (arr_7 [i_7 - 1] [i_7 + 1] [5]))), (arr_7 [i_7 + 1] [i_7 - 1] [i_7 - 1])));
                    }
                }
            }
        }
    }
    var_24 = 13625257269032403311;

    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        arr_26 [i_9] [i_9] = (max((((((-(arr_4 [i_9] [i_9] [3]))) >= var_12))), (((arr_20 [i_9] [i_9]) ? (arr_20 [i_9] [i_9]) : (arr_20 [i_9] [i_9])))));
        arr_27 [i_9] = var_12;
    }
    var_25 = var_3;
    var_26 = (max(var_26, ((((var_10 - var_2) ^ (((max((var_12 && var_1), var_9)))))))));
    #pragma endscop
}
