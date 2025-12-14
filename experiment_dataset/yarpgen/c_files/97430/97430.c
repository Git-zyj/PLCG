/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_15 = (max(-814008476233420627, (arr_1 [i_0] [i_0 + 2])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((!(arr_0 [i_0 - 1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [1] [i_1] [4] [i_0] [i_4] = (((-var_11 / (arr_0 [0] [0]))));
                                arr_14 [i_3] [i_0] [i_2] [i_3 - 1] [i_3 - 1] [1] = (((!3638208771) ^ ((~(arr_1 [i_1 - 2] [i_2 - 2])))));
                            }
                        }
                    }
                    arr_15 [i_0 - 2] [i_0] = var_5;
                    var_16 = (min(var_16, (arr_0 [i_2] [2])));
                    var_17 |= ((var_8 != (249 + var_11)));
                }
            }
        }
        arr_16 [i_0] = ((((var_9 - (min(var_4, (arr_10 [i_0] [i_0]))))) ^ (arr_6 [i_0] [i_0 + 2] [i_0])));
        arr_17 [i_0] = (!var_0);
        var_18 = (max(var_18, (max(((var_12 + (arr_2 [i_0 + 4]))), 1))));
    }
    #pragma endscop
}
