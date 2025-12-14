/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_1;
    var_21 = (((max(var_11, var_0)) / var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_2] [i_0] = (((((max(139, 4294967295)) ^ 1)) ^ 0));
                    var_22 ^= (((4294967295 ? 379 : (arr_4 [i_2] [i_2] [i_2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_23 = var_2;
                                var_24 = (((0 * var_12) << (var_9 - 59)));
                                arr_17 [i_0] [i_0] [i_2] = (min(var_14, (arr_6 [i_2] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 |= var_2;
    #pragma endscop
}
