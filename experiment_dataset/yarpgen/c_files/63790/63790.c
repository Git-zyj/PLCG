/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((max((var_6 - 0), -4129154322937120190))))));
    var_15 = (min(var_15, (((-((~(((var_12 + 2147483647) << (((var_11 + 4797) - 7)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] = (arr_4 [i_0]);
                                var_16 = (max(var_16, (((4254750346 | (arr_3 [i_2] [i_2 - 2] [i_2]))))));
                            }
                            var_17 -= arr_7 [i_0] [i_1] [i_2] [7];
                        }
                    }
                }
                arr_14 [i_0] [i_1] = (((((((min((arr_7 [i_1] [i_1] [i_1] [i_0]), (arr_5 [i_0] [i_0] [i_1])))) | 2))) | (((var_9 ^ 4129154322937120190) & (arr_5 [i_1] [i_0] [i_0])))));
            }
        }
    }
    var_18 = var_0;
    var_19 |= max(20288, (min(var_13, (max(var_11, var_6)))));
    #pragma endscop
}
