/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = var_5;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_10 = (((arr_2 [i_0] [i_0]) && 5868891915777520833));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [13] [1] [i_3] [i_3] [i_3] = var_0;
                        var_11 = (min(var_11, var_9));
                        var_12 = (arr_8 [i_0] [i_0] [i_0]);
                        var_13 = (arr_10 [1] [i_1] [1] [i_1] [i_1] [i_1]);
                        var_14 = ((var_5 ? var_3 : (((arr_8 [i_0] [i_1] [i_0]) ? (arr_11 [i_0] [i_1] [i_2] [i_2]) : (arr_2 [i_2] [i_0])))));
                    }
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_4] = (((85 + -471866578) > (arr_1 [i_5])));
                        arr_18 [i_5] [i_4] [i_4] [i_0] = -92;
                        arr_19 [i_4] = 1;
                        var_15 ^= ((-(~var_8)));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_16 = var_6;
                        var_17 = (((arr_13 [i_0] [i_0] [i_0]) ? (((arr_9 [7]) ? var_6 : var_7)) : (((-(arr_2 [i_6] [i_1]))))));
                        arr_22 [i_0] [i_0] [i_4] [3] = (arr_0 [i_0] [i_0]);
                        var_18 = (max(var_18, (~var_1)));
                    }
                    arr_23 [i_4] = (((((var_1 ? 92 : var_9))) ? (arr_3 [i_1] [i_1]) : (arr_14 [i_1] [6] [i_4])));
                    arr_24 [i_1] [i_4] [i_1] = ((var_0 ? ((var_2 >> (((arr_15 [i_0] [4] [i_4] [i_4] [i_4] [i_4]) - 90)))) : ((((arr_6 [i_0] [i_0] [i_1] [i_4]) ? (arr_4 [1] [i_1]) : -99)))));
                }
                arr_25 [i_0] [i_1] = (arr_0 [i_1] [i_0]);
            }
        }
    }
    var_19 ^= 1;
    #pragma endscop
}
