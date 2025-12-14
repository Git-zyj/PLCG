/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_7 <= ((min(var_14, 38700)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        var_18 = var_11;
                        arr_10 [i_1] [i_1] [i_3] [i_3 + 2] [i_1] [i_2] = ((0 ? (47231 && 4) : ((247 ? var_15 : var_11))));
                    }
                    var_19 = (max((((arr_4 [i_0 - 1]) >> ((((var_6 ? (arr_2 [15] [15] [15]) : 47231)) - 10306747594282551877)))), (((var_10 || (arr_4 [i_1]))))));
                    var_20 = (((((var_3 / ((var_16 ? 1 : (arr_4 [7])))))) ^ (((arr_7 [i_2] [i_2]) | 1))));
                }
            }
        }
    }
    #pragma endscop
}
