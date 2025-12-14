/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 += var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (min((-0 << 1), (((((var_3 ? (arr_6 [i_0] [i_1] [i_1 - 1]) : 1))) % ((17345 ? 65 : var_15))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 |= (~(((arr_9 [i_1] [i_3] [i_1 - 1]) | 4294967277)));
                                arr_16 [i_0] = (((!1) - 0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = 1893637306;
    #pragma endscop
}
