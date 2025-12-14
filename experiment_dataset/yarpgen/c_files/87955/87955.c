/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 *= (arr_0 [i_3]);
                                arr_14 [i_0] [i_1 + 2] [i_2 - 1] [i_3] [i_4 - 1] = var_11;
                            }
                        }
                    }
                    var_18 = (~-125);
                    var_19 *= ((((min(1, 4065))) / -126));
                }
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
