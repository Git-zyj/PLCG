/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 ^= (max(var_7, (((((((arr_2 [i_0]) / 1))) ? 2147483647 : ((1 >> (var_6 - 217))))))));
                arr_4 [i_0 + 2] = (((((arr_1 [i_1]) ? (arr_0 [i_0 + 1]) : 56698))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_18 -= (((((arr_11 [i_2] [i_3] [i_4]) % 15655)) / (arr_11 [i_2] [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_17 [i_3] [0] [0] [0] [i_6 - 1] [i_3] |= (arr_15 [i_2] [24] [i_2] [i_2] [i_2]);
                                arr_18 [i_2] [i_3] [i_4] [i_5] [i_6 - 2] = 1;
                                var_19 = ((((((56698 + (arr_9 [i_4] [i_5]))))) ? ((((arr_1 [i_3]) + (arr_6 [i_5])))) : (arr_16 [i_5 + 1] [i_5] [i_5] [i_6 + 1] [i_6 + 1] [i_6 + 1])));
                            }
                        }
                    }
                    arr_19 [i_2] [i_4] = (max((((-2147483647 - 1) % 36513)), (arr_7 [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
