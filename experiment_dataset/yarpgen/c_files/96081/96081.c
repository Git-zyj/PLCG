/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 8658135602514027106;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 2] [i_1] [i_2] [i_1 - 1] = (min((arr_5 [i_1]), (((~var_11) ? 1 : var_7))));
                    var_13 = (min(var_13, (((((((var_5 / 8423555357897203420) * (((max(-232, 0))))))) && ((((arr_7 [i_0 + 1] [i_0 + 1] [i_1 + 1]) ? -931497282 : (((arr_3 [i_0] [i_0] [i_0]) + 255))))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (~4028824058112547756);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = (arr_13 [i_0] [8] [8] [i_0 - 1] [i_0 - 1] [1]);
                                var_15 = (17240 == 17240);
                                var_16 = 255;
                                arr_16 [i_0] [i_0] [i_1 - 1] [i_0] [11] [i_4] [i_4] = (arr_13 [i_1] [i_3] [i_2] [i_1] [i_0] [i_0]);
                                arr_17 [i_0] [12] [i_0] [i_3 - 1] [i_0] [13] = (((4028824058112547767 ? -8423555357897203409 : (((min(26999, 1)))))));
                            }
                        }
                    }
                    arr_18 [i_0 - 2] [i_0 - 2] [i_0 - 2] = 8423555357897203409;
                }
            }
        }
    }
    #pragma endscop
}
