/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = (((((arr_4 [i_0] [i_1]) - ((185 ? var_4 : (arr_5 [i_0] [i_0] [i_2])))))) ? ((var_4 + (min((-9223372036854775807 - 1), 2736125662)))) : var_13);
                    var_20 = ((arr_8 [i_2]) ? (((((min((arr_2 [i_0]), (arr_3 [i_0] [i_1] [i_0])))) & (((arr_2 [i_0]) - (arr_1 [i_0] [i_1])))))) : ((var_1 ? var_7 : (arr_8 [i_2]))));
                    arr_9 [i_0] [i_0] [i_1] = (((arr_2 [i_2]) + (arr_1 [i_0] [i_0])));
                    var_21 = ((((((((min((arr_5 [i_0] [i_0] [i_0]), 1))) && (arr_2 [i_1]))))) < (((arr_7 [i_0] [i_1] [i_2]) ? (max(-9223372036854775801, -27421)) : (((arr_5 [i_0] [i_0] [i_2]) / (arr_8 [i_0])))))));
                    var_22 = (arr_2 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
