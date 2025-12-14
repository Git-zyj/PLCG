/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-4513 - (((var_8 / 78) ? (max(var_7, 653432508)) : (((-26387 ? 217 : var_2)))))));
    var_13 = ((~((-48 & (max((-32767 - 1), 2850627176))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((0 ? (3641534770 || -4739) : var_3)) >= (arr_3 [i_0] [i_1]));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 = ((-(((((var_11 ? var_9 : 18054778022542706886))) ? ((max(1101542398, 1))) : var_5))));
                                arr_14 [i_1] [i_3] [i_4] = -118;
                                var_15 = var_4;
                                var_16 = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_9;
    var_18 = (min(var_18, (-var_2 - -var_4)));
    #pragma endscop
}
