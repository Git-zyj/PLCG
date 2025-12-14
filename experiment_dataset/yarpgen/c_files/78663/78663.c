/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (((((var_1 && (min(var_10, (arr_1 [i_0] [i_0])))))) ^ (min(-var_3, var_3))));
                                arr_10 [i_2] [4] [i_2] [i_1] [i_2] = var_13;
                                arr_11 [i_2] [i_3] [i_2 - 1] [5] [i_2] = (arr_2 [i_1]);
                                var_16 = (((max(((var_6 >> (var_7 - 363421431))), (arr_5 [i_2] [i_2]))) != (max((arr_3 [i_3] [5] [i_2 - 1]), var_4))));
                                arr_12 [i_2] = (arr_9 [i_2] [9] [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_2]);
                            }
                        }
                    }
                }
                var_17 = (max(var_17, ((((max((var_3 != var_3), (min(var_7, (arr_4 [6] [i_0]))))) | (((~(arr_8 [8] [i_1] [i_0] [i_0] [i_0])))))))));
            }
        }
    }
    var_18 = ((var_1 >> (var_0 - 5123)));
    #pragma endscop
}
