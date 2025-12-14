/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] &= var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] [i_2] [i_2] = (3660036021 > var_6);
                                arr_18 [i_2] = ((var_6 ? (620 <= var_3) : ((-(arr_12 [i_1] [i_1] [i_2 - 1] [i_3])))));
                            }
                        }
                    }
                    arr_19 [i_0] [i_2] = (min(((((((232 == (arr_6 [i_0] [i_0] [i_2] [i_0]))))) ^ (arr_3 [i_0] [i_1]))), 794636737));
                }
            }
        }
        var_18 = (max(var_18, ((((((arr_16 [4] [i_0]) - (arr_16 [i_0] [i_0])))) ? ((((arr_16 [i_0] [i_0]) ? -24279 : var_11))) : ((-(12141193940542399678 - 115)))))));
    }
    #pragma endscop
}
