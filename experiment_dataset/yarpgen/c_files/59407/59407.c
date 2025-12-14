/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= 15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] = -36;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 |= (((((~(((arr_3 [i_0] [i_4]) ? -16 : var_7))))) ? ((15 ? (min(3688899545, var_11)) : (((-89 ? 0 : 33554431))))) : (!824580838)));
                                var_15 = ((((~(~var_2))) & 1));
                                arr_14 [5] [i_4] = -19;
                            }
                        }
                    }
                    var_16 = 5849385124724952937;
                    var_17 = (!3);
                    var_18 -= 165;
                }
            }
        }
    }
    var_19 = (min(var_19, (((((max(((31 ? 1628123574 : 8567327)), 1628123574))) ? var_2 : 1628123594)))));
    var_20 = var_0;
    #pragma endscop
}
