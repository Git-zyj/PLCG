/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max(((var_6 ? var_13 : var_11)), (!45891))) + var_13));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((((!(arr_1 [i_0 - 2])))) & (((!(((arr_1 [i_0]) >= var_9))))));
        arr_3 [i_0] = (((arr_1 [i_0 - 1]) ? ((((arr_0 [i_0 - 1]) * (arr_0 [i_0 - 1])))) : (max((arr_0 [i_0 - 1]), (arr_1 [i_0 - 1])))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_17 *= ((((arr_5 [i_1 - 1]) + (arr_5 [i_1 + 2]))));
                    arr_12 [i_1] = 234;
                    var_18 = ((~(((max((arr_1 [i_2]), 0))))));
                }
            }
        }
        var_19 = (arr_10 [i_1 + 1]);
    }
    var_20 *= (((((var_6 == ((19645 >> (var_7 - 3640436593)))))) == ((1 >> (var_0 - 97)))));
    var_21 = ((var_5 ? (var_6 <= var_6) : ((((((var_14 ? var_9 : 19653))) <= ((19670 ? var_14 : 0)))))));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_20 [i_4 + 1] [i_5] [i_6] [i_6] = ((((min((arr_16 [i_4 + 1] [i_6] [i_6]), (arr_14 [i_4 + 2])))) ? ((((var_6 <= (arr_14 [i_4 - 1]))))) : (((arr_14 [i_4 - 1]) - (arr_16 [i_4 + 1] [1] [i_5])))));
                    arr_21 [i_4] [i_4] [i_5] [i_6] = (max(((var_14 ? (((10 ? var_3 : (arr_15 [i_4])))) : (((arr_19 [i_5] [i_5]) & (arr_14 [i_5]))))), ((((arr_13 [i_4]) ? (1 + var_12) : ((~(arr_17 [i_6]))))))));
                }
            }
        }
    }
    #pragma endscop
}
