/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_9 ? var_7 : var_6));
    var_12 = (min(var_12, var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_13 = ((arr_0 [i_2 - 2]) & (((arr_2 [i_2 - 2] [i_2 + 3]) ? (arr_2 [i_2 + 4] [i_2 + 2]) : (arr_2 [i_2 - 1] [i_2 + 3]))));
                    var_14 ^= (min(229, (arr_5 [i_1] [i_1])));
                    arr_10 [i_0] [i_1] [i_2] = (max(var_1, (arr_3 [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = ((((~(arr_0 [i_2 - 2]))) >> (((((((arr_3 [i_2 + 3] [i_2 - 1] [i_3]) + 2147483647)) >> (((arr_0 [i_2 + 1]) - 10036768294152641441)))) - 524268))));
                                arr_17 [i_2] [i_3] [i_3] = ((arr_6 [i_3] [i_2 + 2] [i_2] [i_2 - 2]) ? (max((arr_16 [i_2 + 3] [i_0] [i_2] [4] [i_2] [i_3] [i_2 + 3]), (arr_13 [i_2 + 4]))) : (min((arr_16 [i_2 + 2] [i_1] [i_2] [i_3] [i_2] [i_3] [i_3]), (arr_6 [5] [i_2 + 2] [i_2] [i_2 + 3]))));
                                arr_18 [i_0] [i_0] [i_3] [i_0] [i_0] = (max(3619131663841457256, 14827612409868094360));
                            }
                        }
                    }
                    var_16 = (min(var_16, (((3619131663841457256 * 3619131663841457235) % ((-(arr_12 [1] [1] [i_0] [i_2 - 1])))))));
                }
            }
        }
    }
    #pragma endscop
}
