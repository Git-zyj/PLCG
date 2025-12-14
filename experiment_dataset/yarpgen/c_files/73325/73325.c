/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((min((((2051478215 && (((2051478215 ? -2051478216 : var_12)))))), var_12)))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((2051478214 >> (65531 - 65506)));
                    var_17 = (min(var_17, ((((max((((arr_3 [7]) ? var_11 : -8491924362535920759)), (arr_6 [i_0] [i_1] [i_2]))) / 6)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_18 = (((-4 ? (arr_12 [i_3] [0] [i_3] [i_3]) : (arr_12 [i_3] [i_4 + 2] [i_4] [i_4 + 2]))) | (((!7503603021088572068) ? (min((arr_6 [i_0] [i_5] [i_3]), (arr_2 [i_0] [0] [12]))) : -16844)));
                        var_19 ^= ((+((-((-22901 ? (arr_11 [18] [8] [i_4] [i_4]) : (arr_0 [i_4])))))));
                    }
                }
            }
        }
        var_20 = (arr_13 [i_0 + 1] [i_0 + 1]);
        arr_14 [i_0] = var_6;
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_21 = (max(var_21, (((~(arr_1 [i_6]))))));
        var_22 = (((((arr_8 [i_6]) / (arr_11 [i_6] [i_6] [i_6] [i_6]))) | var_10));
    }
    #pragma endscop
}
