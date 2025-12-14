/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_14 += var_9;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = arr_9 [i_0 + 1] [i_2];
                                arr_12 [i_3] [i_3] [i_3] [i_3] [i_0] = (arr_5 [i_0] [i_0] [i_3] [7]);
                            }
                        }
                    }
                }
                var_16 = (max(var_16, var_11));
            }
        }
    }
    var_17 = ((var_1 << (((var_3 && (((var_6 ? 2335406569541948047 : -15482))))))));
    #pragma endscop
}
