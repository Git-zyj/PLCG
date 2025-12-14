/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_4 + 2] [i_3 + 3] [i_0] [i_0] [i_2] [6] [i_0] = (((0 / 7168) ? (arr_5 [i_0] [i_0] [i_4]) : ((7162 ? ((1415306655 ? 48 : (arr_12 [i_0] [13] [i_4]))) : 192))));
                                var_10 = -1415306647;
                                var_11 = (arr_5 [i_0] [i_0] [i_2]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_12 = (min(var_12, ((min(1, -74)))));
                            arr_21 [i_0] [i_1] [i_0] [i_6] = -2226550870419749718;
                        }
                    }
                }
                arr_22 [i_0] = ((((min(-1415306642, (!-15758)))) ? 2226550870419749727 : (!-204392252)));
                var_13 = (32 >= 158);
            }
        }
    }
    var_14 |= var_1;
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 16;i_8 += 1)
        {
            {
                arr_29 [5] [i_7] = ((-((-10725 ? -31 : 49))));
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 16;i_11 += 1)
                        {
                            {
                                arr_36 [i_7 - 1] [i_9] = (-3280003026561600856 == 1);
                                var_15 *= (!-7);
                                var_16 = (~90);
                            }
                        }
                    }
                }
                arr_37 [i_8] [i_8] = (!32736);
            }
        }
    }
    #pragma endscop
}
