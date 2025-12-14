/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((~(min(var_10, (1 / -4781))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = (arr_11 [i_0] [i_0] [i_2 + 1] [i_3] [i_4]);
                                var_19 |= arr_6 [i_0] [10] [i_2];
                                var_20 ^= (max(65535, (min(-2, (arr_0 [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
