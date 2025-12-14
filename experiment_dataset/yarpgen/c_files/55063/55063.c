/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = 29;
                arr_6 [i_1] = (((~(arr_0 [i_0]))) / ((~((~(arr_4 [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (min(1761965120, 5965));
                                arr_16 [i_3] [i_3] &= ((((~(arr_11 [i_1 - 2])))));
                                var_21 ^= (((((max(32767, 32741)) ? (arr_11 [i_0]) : (arr_3 [i_0] [i_0])))));
                                var_22 = (min(var_22, (~1809925902372665121)));
                            }
                        }
                    }
                }
                var_23 += (max(var_7, (((((arr_1 [i_0]) == (arr_3 [i_0] [i_1]))) ? (arr_12 [i_1] [i_1 - 1] [i_1 - 1] [8]) : (~65535)))));
            }
        }
    }
    var_24 ^= (1 ? var_6 : var_3);
    #pragma endscop
}
