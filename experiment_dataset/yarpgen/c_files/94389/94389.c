/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_12 = ((~var_3) ? (arr_0 [6]) : (min(((max(var_9, var_9))), (max(424206032, var_8)))));
        var_13 = ((~((16394428931019748395 ^ (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_3] = (max((max((var_9 | var_3), ((-(arr_1 [i_0]))))), (((!((max(1, 8528163389528761774))))))));
                                arr_14 [9] [i_3] [i_2] [i_2] [i_0] [i_0] = max((~4294967276), (((~(arr_4 [i_4 - 3] [i_3 + 2] [i_2 - 3])))));
                            }
                        }
                    }
                    var_14 = (((max(((8528163389528761765 ? 32750 : 7851)), (!1))) & (~1)));
                    arr_15 [i_2] [i_2] = var_10;
                }
            }
        }
        arr_16 [i_0] [i_0] = 1;
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = -892333802;
        var_15 = (arr_7 [i_5]);
        var_16 = (((((-(((var_8 <= (arr_1 [9]))))))) <= (((arr_7 [i_5]) % (arr_3 [i_5])))));
        var_17 = (max(var_17, var_6));
    }
    var_18 = (~var_5);
    var_19 = var_8;
    var_20 = 440;
    var_21 = 1;
    #pragma endscop
}
