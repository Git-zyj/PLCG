/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(~0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_15 = (((((62082 ? 3454 : 41094))) ? (arr_6 [i_1 - 1] [i_1 + 1] [i_1]) : 65535));
                    var_16 = (!41094);
                    arr_9 [i_1] = (arr_4 [i_1] [i_1]);
                }

                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_3] [i_4] [i_5 - 1] = (((arr_13 [i_0] [i_1 + 2] [i_3] [i_1]) ? (arr_6 [i_3] [i_3] [i_1]) : var_9));
                                var_17 = ((~((var_2 ? var_1 : var_10))));
                            }
                        }
                    }
                    arr_21 [i_1] [i_1] = (arr_3 [i_0] [i_0] [4]);
                }
                var_18 = (min(var_18, (~3453)));
            }
        }
    }
    #pragma endscop
}
