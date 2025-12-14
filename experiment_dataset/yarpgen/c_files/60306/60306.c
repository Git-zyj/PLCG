/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-((2048 ? ((8644406793884973716 ? 240 : 0)) : (!0)))));
    var_17 = -1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = (((((1 ? 15922 : 6505784738816476416))) ? 35 : (~49614)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = (!(!15943));
                                arr_13 [i_1] = (((~15922) ? (((1 ? -53 : -6505784738816476416))) : (((((58720256 ? 60 : 55114))) ? -35 : 58720256))));
                                arr_14 [i_0] [i_1] [i_3] [i_4] = (!-49592);
                                arr_15 [i_1] = (((((-(~-1)))) ? (((((255 ? 15922 : 4294967295))) ? -2023252966 : 6505784738816476416)) : (((255 ? 1 : 1)))));
                                arr_16 [i_2] [i_1] [i_2] = ((18446744073650831360 ? 0 : 0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_5;
    #pragma endscop
}
