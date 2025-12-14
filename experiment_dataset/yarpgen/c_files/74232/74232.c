/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = ((((var_7 ? (arr_2 [i_0]) : (arr_2 [i_2]))) + (arr_2 [i_2])));
                    arr_8 [4] [7] [7] = ((((var_3 || (arr_3 [i_0]))) && var_5));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_13 = (arr_11 [i_3] [i_4]);
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_20 [i_3] [3] [i_4] [i_3] [i_5 - 1] [5] = (arr_12 [i_3] [i_4]);
                        var_14 = var_4;
                        arr_21 [i_3] [i_5 - 1] = (((((((arr_14 [i_3] [i_5]) * (arr_12 [i_4] [i_5]))))) ? -30 : (((((arr_15 [i_4]) ? 16 : (arr_19 [i_3] [12] [i_3] [i_5 - 1] [i_6])))))));
                        var_15 = (((((~(arr_17 [1] [0] [0] [0] [i_6] [1])))) ? ((min(1, 28))) : ((((var_6 || 2) ? (max(var_7, (arr_14 [i_6 - 2] [i_3]))) : (-7835934295805908976 && 0))))));
                    }
                }
            }
            arr_22 [i_3] [i_3] = (((~26837) ? 1042649900 : ((152 & ((max(1, 0)))))));
            var_16 = (max((arr_15 [i_3]), (((707696366 >> (((max((arr_15 [i_4]), var_6)) - 1498650591)))))));
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        arr_33 [i_7] [i_3] = ((((max(var_0, (max((arr_31 [i_3] [12] [12] [i_9] [i_3] [i_3]), var_4))))) ? (((((arr_29 [1] [i_8] [i_8] [i_3] [i_3]) || var_9)))) : ((-(min(var_5, (arr_15 [18])))))));
                        var_17 = ((+(((arr_30 [i_3] [i_3] [i_3] [i_3]) ^ (arr_26 [i_9])))));
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_18 += (max((min(((((arr_12 [i_10] [i_10]) && (arr_10 [i_10])))), ((1 ? 0 : 70368744177152)))), (!var_9)));
        var_19 -= (((((arr_31 [10] [i_10] [i_10] [10] [i_10] [i_10]) ^ (arr_31 [10] [1] [i_10] [i_10] [i_10] [10]))) + (((arr_31 [0] [i_10] [i_10] [i_10] [0] [i_10]) | (arr_31 [12] [i_10] [i_10] [20] [i_10] [12])))));
    }
    #pragma endscop
}
