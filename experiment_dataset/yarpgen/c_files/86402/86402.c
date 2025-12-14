/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -20293;
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_20 -= (!var_9);

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] = ((((~((-856221945 ? var_15 : var_8)))) | var_9));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [21] [i_1] [i_4] = (((var_4 & -856221945) ? (-856221946 ^ 856221946) : (--115)));
                                var_21 *= (max(((1 ? (!57954) : 856221941)), (!var_5)));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] [i_0] = var_8;
                    arr_17 [i_0] [18] [i_2] [15] = 65517;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_22 = var_8;
                    var_23 = (20036 & 715719882);
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_24 = -856221946;
                            var_25 = ((-856221946 ? 32767 : (--1)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
