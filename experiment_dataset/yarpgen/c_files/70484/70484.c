/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_10;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (min(31, 31));
                arr_4 [i_0] [i_1] [i_0] = (max((((arr_1 [i_0] [i_0 - 3]) ? var_15 : (arr_1 [i_0] [i_0 - 3]))), (~35)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [15] [i_0] [i_0] [i_2] [i_3] = (~31944);
                            arr_14 [i_0] [i_0] [i_0] [i_2] = ((((3572215018 && (arr_2 [i_0 - 2] [i_0 - 2]))) ? (max((((var_16 + 9223372036854775807) << (((var_8 + 88) - 30)))), 31)) : 28));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 19;i_4 += 1)
                            {
                                var_19 = (((arr_12 [i_4 + 2] [i_4 + 3] [i_4 + 2] [4] [i_4 + 2] [13]) || var_16));
                                var_20 = (arr_3 [i_4 - 1] [20] [i_1 + 4]);
                            }
                            arr_17 [i_0] [i_2] [5] [i_0] = (arr_2 [8] [i_3]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
