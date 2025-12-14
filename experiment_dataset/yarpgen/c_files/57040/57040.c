/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = 0;
                arr_5 [0] [i_1] = 18446744073709551615;
                arr_6 [i_1] = -4645718957204724527;
                arr_7 [2] |= 65535;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                {
                    var_13 = 40;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] = -46;
                                var_14 &= 32768;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 -= var_5;
    var_16 = var_9;
    #pragma endscop
}
