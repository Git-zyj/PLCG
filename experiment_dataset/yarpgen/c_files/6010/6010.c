/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, 14943));
                                var_16 = -14949;
                                var_17 = (min(var_17, 1));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_18 = -14913;
                                var_19 = 65535;
                                var_20 += 0;
                                var_21 -= 17;
                            }
                        }
                    }
                    arr_18 [i_0 - 2] [i_1] [i_1] [i_2] = 24140;
                    arr_19 [i_0] [i_0] [i_2] [1] = 0;
                }
            }
        }
    }
    #pragma endscop
}
