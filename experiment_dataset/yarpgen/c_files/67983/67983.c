/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = ((var_10 ? var_15 : var_11));
                var_19 = (min(((min(var_7, 1))), (min(var_1, 1))));
                var_20 = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_21 |= var_1;
                            arr_12 [3] [i_0] [6] [i_3] = (((arr_0 [i_0]) ? ((min((arr_0 [i_0]), (arr_0 [i_0])))) : (arr_0 [i_0])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_20 [i_4] [16] [18] [6] = ((-(((var_13 + var_6) + ((1 ? var_3 : var_8))))));
                    var_22 *= 1;
                    arr_21 [i_4] [i_4] = (arr_16 [1] [21] [1]);
                    var_23 = var_8;
                    arr_22 [10] [i_5] [i_6] = var_8;
                }
            }
        }
    }
    #pragma endscop
}
