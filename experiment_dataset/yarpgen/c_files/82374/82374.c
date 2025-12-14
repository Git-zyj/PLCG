/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, var_5));
                            var_14 = (max(var_14, 4116840923));
                            arr_13 [i_2] [i_2] = min(((~(arr_3 [i_1 - 1]))), (((~var_5) ? ((min(var_1, (arr_7 [i_0] [i_2] [i_3])))) : 127)));
                            arr_14 [i_0] [1] [12] [i_2] [i_3] |= (((6270387370597587292 < 6) ? ((((6270387370597587292 == (arr_5 [i_1 + 1]))))) : (((arr_2 [i_0 + 1] [i_0 + 1]) ^ (max(var_12, -3))))));
                        }
                    }
                }
                var_15 = arr_8 [i_0 - 2] [i_0] [i_0];
                var_16 = (((arr_0 [i_0 - 1]) - (((((min((arr_1 [i_1] [i_1]), (arr_8 [i_0] [12] [i_0])))) > ((min((arr_0 [i_0]), 20))))))));
            }
        }
    }
    var_17 &= min(var_10, 120);
    #pragma endscop
}
