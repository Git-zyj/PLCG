/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = min(13748, (((arr_5 [i_0] [i_1]) ? (max((arr_5 [7] [7]), (arr_3 [i_1]))) : (~-81))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_3] = (((1616056580 - 76) ? ((-(arr_8 [i_0] [i_1] [i_2] [i_3]))) : var_2));
                            var_14 = (((~-var_0) & -1));
                            var_15 = max(17817, var_1);
                            arr_12 [i_3] = (((((((min(var_2, var_10))) || (arr_9 [i_3 - 2] [i_3] [3] [i_3 - 3] [i_3])))) ^ (max(var_3, 452735471))));
                        }
                    }
                }
            }
        }
    }
    var_16 |= (max((var_2 / var_9), ((var_3 ? 3510979255 : var_10))));
    var_17 ^= -7;
    var_18 = var_4;
    #pragma endscop
}
