/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, var_8));
                    arr_7 [i_0] [i_1] [i_2] |= (((max(var_9, (var_3 < 2358331874252133827)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 *= ((-2147483640 * (((939333854 / 2147483639) / var_2))));
                                var_20 = -7408869123985704087;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_20 [6] [i_1] [i_2] = (var_1 | 9223372036854775807);
                                arr_21 [i_0] [i_0] [i_0] [i_0] [3] [i_0 - 3] = 2147483639;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_8;
    #pragma endscop
}
