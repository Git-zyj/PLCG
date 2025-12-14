/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_9 * (((!54) << (((max(var_12, var_0)) - 1819676709))))));
    var_15 = var_7;
    var_16 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_17 = (arr_11 [i_0]);
                        var_18 = ((-(((arr_6 [i_2] [i_2]) * var_4))));
                        arr_12 [i_0] [i_3] [i_2] [i_3] [i_3] = (arr_9 [1] [12] [i_1] [i_2] [i_2] [i_3]);
                    }
                    var_19 = (max(var_19, ((min((arr_0 [i_1] [i_2]), -var_10)))));

                    for (int i_4 = 3; i_4 < 14;i_4 += 1)
                    {
                        var_20 = var_12;
                        var_21 = (min((((arr_7 [i_1 + 1] [i_1] [i_2]) >> ((((var_13 ? -1634746513287780253 : (arr_13 [i_1 + 1]))) - 16811997560421771354)))), (arr_1 [i_0])));
                        var_22 = ((((((arr_13 [i_2]) | ((((!(arr_4 [i_0] [i_0] [i_0])))))))) && var_4));
                    }
                }
            }
        }
    }
    var_23 ^= ((var_11 ? (var_10 != var_8) : (min((var_1 / var_6), (~1)))));
    #pragma endscop
}
