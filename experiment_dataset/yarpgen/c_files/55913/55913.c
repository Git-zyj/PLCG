/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_10 = ((((min((arr_1 [i_0]), (var_6 - var_3)))) || ((((arr_2 [i_0]) ? ((0 ? (arr_3 [i_0]) : (arr_3 [9]))) : ((((var_7 >= (arr_1 [i_0]))))))))));
        var_11 = (max(var_11, var_7));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((((1 & (((arr_3 [i_0]) ? var_5 : (arr_9 [i_0] [4] [i_1] [i_2]))))) << (((max((var_9 | var_8), ((108 ? var_0 : 1)))) - 7941283108866780285))))));
                    var_13 = var_3;
                    arr_11 [i_0] [i_0] [i_2] = 18446744073709551615;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_14 = arr_13 [i_3] [i_3];

        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_23 [i_4] = (((arr_21 [i_4 - 1] [i_6] [i_4 - 1] [3] [i_6]) ? (arr_21 [i_4 - 1] [i_4 - 1] [i_6] [i_6] [i_6]) : var_4));
                        var_15 = (arr_19 [i_4 + 1] [i_4 - 1]);
                        arr_24 [i_4] [i_5] [i_4] = ((((var_3 * (arr_22 [i_5] [i_4] [i_3] [i_6]))) > var_8));
                    }
                }
            }
            var_16 = var_4;
        }
        arr_25 [i_3] = (((10 + var_4) != (arr_12 [i_3])));
    }
    var_17 = var_5;
    #pragma endscop
}
