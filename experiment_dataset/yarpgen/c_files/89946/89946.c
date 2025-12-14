/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 18282493107169170008;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_0 + 1] [i_0 - 1] [i_0] [i_2 + 1] = 1773430238;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = (((((((110 ? 9223372036854775807 : 1105845763)) != var_3))) <= ((((1 == 1) == ((var_2 >> (var_10 - 4885272051306007172))))))));
                                arr_17 [i_0] [i_2] [i_4] [i_0] |= (max(((min(37775, -9223372036854775804))), var_9));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_14 = (min(var_14, ((((arr_11 [i_0 + 1] [i_1] [i_1] [i_2]) / 661529101)))));
                                arr_22 [i_0] [i_0] [i_2] [i_0] [i_6] = (min(var_8, (var_3 / var_1)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 |= ((var_11 ^ ((~((var_2 ? var_2 : var_0))))));
    #pragma endscop
}
