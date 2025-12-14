/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (min(var_14, (arr_3 [i_0])));
        var_15 = (max(153, 5957874107838659312));
        arr_4 [i_0] = (~12488869965870892290);
    }
    var_16 = var_9;
    var_17 = ((1 ? 12488869965870892304 : 12488869965870892274));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            {
                var_18 = (max(((((arr_8 [i_1] [i_1] [i_2]) + (arr_5 [i_1] [i_2])))), var_1));

                /* vectorizable */
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    var_19 &= ((0 ? 2801831534 : (arr_5 [i_3] [i_2])));
                    arr_12 [i_1] [i_2] [i_2] [i_1] = -var_4;
                }
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    var_20 = 12488869965870892304;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_19 [i_1] [i_2] [i_2] [i_2] [i_6] = 5957874107838659321;
                                arr_20 [i_1] [i_2] [i_6 + 3] [i_2] [i_6] [i_4] = (arr_13 [i_1] [i_2] [i_2]);
                            }
                        }
                    }
                }
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    arr_25 [i_2] = (((max(1308561217, 108)) << (((((arr_8 [7] [i_1] [i_7 + 2]) ? (arr_8 [i_2] [12] [i_7 + 3]) : (arr_8 [i_1] [i_2] [i_7 + 1]))) - 55))));
                    arr_26 [i_2] = (arr_21 [i_7 + 1] [i_7 + 1] [i_7 + 2]);
                }
                arr_27 [i_2] [i_2] = ((-((((min(225, (arr_24 [i_1] [i_2] [i_2]))) > var_3)))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            arr_32 [i_2] [i_2] [19] [i_2] = (-269538560633480494 && 1);
                            var_21 = (min(var_21, ((((arr_7 [i_9]) < 2725578542050820482)))));
                            arr_33 [i_1] [i_2] = var_10;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
