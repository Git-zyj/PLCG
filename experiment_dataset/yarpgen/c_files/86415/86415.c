/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(2573461939387630611, 247));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = -15873282134321920994;
                                var_20 = ((var_9 ? (((max((arr_0 [i_3]), 2573461939387630615)))) : 15873282134321921012));
                                var_21 = (((2147483647 <= -247) <= (min((15873282134321921018 <= var_9), (min(1054934464445274046, var_16))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (((var_14 - (arr_14 [i_0] [i_1] [i_2] [i_3] [i_0]))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_22 -= ((((min((max((arr_1 [i_0]), 1)), 15873282134321921004))) <= 9016826484295717096));
                                var_23 = (min(-29587, ((-(var_0 <= var_11)))));
                                arr_20 [i_5] [i_5] [i_1] [i_1] [i_0] = 1822829057;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_24 = (((((arr_3 [i_0]) ? ((var_16 - (arr_17 [i_0] [i_0] [i_8]))) : (((min(4, 8))))))) ? 1 : (((max((arr_25 [i_8 - 2]), (arr_25 [i_0]))))));
                                var_25 *= ((!((max((arr_3 [i_0]), var_17)))));
                                var_26 = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
