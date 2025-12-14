/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] [11] = ((-3917297767864000274 ? 0 : 3917297767864000278));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_15 [i_1] [i_1] [12] [i_3] [5] [14] = (((var_4 ? var_1 : (arr_13 [i_2 - 1] [i_1 - 2]))));
                            arr_16 [i_0] [i_0] = (arr_5 [1] [i_1] [i_2]);
                            arr_17 [i_1] = var_0;
                        }
                    }
                }
            }
        }
    }
    var_10 = var_7;
    var_11 = (((~2307598994) ? ((((~var_6) ? -var_2 : ((1 << (var_5 - 25470)))))) : 3917297767864000274));

    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        arr_20 [i_4] = (arr_5 [i_4] [i_4] [i_4]);
        arr_21 [i_4] = var_2;
    }
    #pragma endscop
}
