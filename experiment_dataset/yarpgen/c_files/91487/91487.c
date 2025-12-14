/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (max(7186, var_5));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] = 39356;
                            arr_14 [i_1] [1] [i_2] [9] [i_4] = -1;
                        }
                        var_14 = (max(var_14, ((max((arr_3 [i_0] [1]), (max(14210142445149233941, 2515)))))));
                    }
                    var_15 = (arr_4 [i_2] [i_1] [i_2] [i_1]);

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_16 = ((var_1 ^ ((var_0 ? 3405903150 : (arr_7 [i_1] [i_5] [i_5])))));
                        var_17 = (min(var_17, 3136721349103052468));
                        var_18 = (!65535);
                    }
                    arr_19 [i_1] [i_1] [i_2] = var_8;
                    arr_20 [2] [i_1] = (max((min(3511637847830387501, (max(36028797018959872, -27590)))), ((max(0, (arr_3 [i_0 - 3] [i_0 - 1]))))));
                }
            }
        }
    }
    var_19 = var_5;
    #pragma endscop
}
