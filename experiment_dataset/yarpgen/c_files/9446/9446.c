/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((16383 ? 63 : -16385));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_2] [i_3 + 3] [i_2] = -16385;
                                var_17 = var_1;
                            }
                        }
                    }
                    var_18 = (~3091671348);
                }
            }
        }
    }
    var_19 *= (min(var_0, 65474));
    var_20 = var_5;
    var_21 = var_8;
    #pragma endscop
}
