/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_1] &= 632541020;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_4 + 3] = -632541020;
                                var_15 |= 6086993769137185055;
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 404818834;
                            }
                        }
                    }
                    var_16 = (max(var_16, -106));
                }
                var_17 ^= 632540992;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] [i_1] [i_0] [i_5] [i_1] = -632541040;
                            arr_22 [i_0] [i_0] [i_0] [i_6] = 73;
                            var_18 = (max(var_18, 2454363067));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
