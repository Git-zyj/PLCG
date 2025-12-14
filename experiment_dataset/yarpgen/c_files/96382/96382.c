/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = var_12;
                var_16 = -574217381;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 &= (arr_10 [22] [i_1] [i_0] [i_4]);
                                var_18 = ((4235166725766191762 ? 3458764513820540928 : ((1 ? 1 : 14987979559889010709))));
                                arr_13 [5] [5] [i_1 + 3] [0] [i_1] [16] = (((((1 * (arr_12 [4] [3] [i_2])))) <= (((arr_2 [i_2 + 3] [2]) * (arr_8 [i_2 + 1] [i_1] [i_1])))));
                                var_19 = -var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_20, var_1));
    var_21 = (min(var_21, (((((((14987979559889010665 <= 1) == var_5))) <= 16777208)))));
    #pragma endscop
}
