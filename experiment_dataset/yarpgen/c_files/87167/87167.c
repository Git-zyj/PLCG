/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = (((106 == (arr_5 [i_1 + 1] [i_1 - 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 = ((((min(-9900, (arr_10 [i_0] [i_0] [i_2])))) ? var_14 : (((1 ? 61 : var_7)))));
                                var_20 = ((-((max(var_14, var_5)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_20 [i_2] [i_6] |= ((((min((4095 * var_2), var_1))) ? ((((12207 << 1) >= (min(-177710521, var_13))))) : (max(-254, (arr_0 [i_2])))));
                                var_21 = ((((max(65535, ((min(var_13, var_2)))))) ? (((var_6 / 14369) / var_16)) : (arr_11 [i_0] [i_1] [i_0] [i_1] [i_6 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (((((((min(203, 187))) ? var_16 : (!-102)))) ? 154 : var_10));
    var_23 = var_6;
    #pragma endscop
}
