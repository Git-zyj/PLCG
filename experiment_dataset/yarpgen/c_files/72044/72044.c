/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((38 << (4095 - 4079))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_1] [i_2 - 1] [i_3] = ((((((((var_11 ? 1 : var_14))) ? (arr_2 [i_1]) : (arr_4 [i_3 + 1] [i_1] [i_2 + 2])))) ? -var_15 : (((((arr_4 [i_2 + 3] [i_2 + 3] [i_2 + 2]) != 48052))))));
                            var_19 |= var_14;
                        }
                    }
                }
                var_20 *= (((((arr_9 [i_1]) + (max(var_1, (arr_8 [i_0] [i_0]))))) ^ (((var_17 ? ((min((-127 - 1), 127))) : 1)))));
                var_21 = (max(var_21, ((((((92 ? (arr_7 [18] [i_1]) : var_15))) ? (33110 ^ 25079) : (((23765 ? var_13 : var_9))))))));
                var_22 = ((((var_2 ? var_1 : (arr_8 [i_1] [i_0]))) + (arr_8 [i_0] [i_1])));
                var_23 = 1881186626;
            }
        }
    }
    var_24 = var_14;
    var_25 = (min(var_25, var_14));
    #pragma endscop
}
