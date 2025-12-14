/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3 - 1] [i_2] [i_1 - 2] [i_1] [i_0] = var_9;
                                var_16 += -8589934528;
                                var_17 ^= var_11;
                                var_18 = (((min((((~(arr_7 [i_0] [i_0])))), 8589934547))) ? 1152921504605798400 : var_9);
                            }
                        }
                    }
                    var_19 = (max(var_11, 3921961765356986629));
                    arr_14 [i_2] [i_0] [i_0] [i_0] = var_2;
                    arr_15 [i_0] [i_1] [i_0] [i_1] = (~-46);
                }
            }
        }
    }
    var_20 -= (var_10 ? (((var_6 ? (0 > var_10) : (!0)))) : ((var_13 ? -872769882 : 36028797018963967)));
    #pragma endscop
}
