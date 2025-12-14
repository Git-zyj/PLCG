/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = ((((min(((0 ? (arr_3 [i_0] [i_1] [i_1]) : var_8)), ((min(var_7, var_10)))))) ? ((((max(var_11, var_7))) ? ((((arr_0 [i_0]) ? var_14 : 117440512))) : var_12)) : (arr_3 [i_0] [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [8] [i_2] [i_2] [i_0] = ((((((arr_4 [i_0] [i_1] [11]) != var_5))) >> (((var_11 + var_2) - 36224))));
                            var_18 = (max(((((var_16 ? var_15 : var_11)) - var_6)), (((var_11 ? (var_8 && var_2) : var_5)))));
                            var_19 = (arr_5 [i_2] [i_3] [i_3] [i_3]);
                        }
                    }
                }
            }
        }
    }
    var_20 = (var_9 * var_11);
    #pragma endscop
}
