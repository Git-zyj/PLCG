/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = ((-7 ? (arr_2 [i_0]) : (~-7)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_4] [i_3] [i_4] [i_4] = (((((arr_7 [i_1 + 2]) ? (arr_0 [i_3 + 1]) : (arr_4 [i_3 - 1] [i_1]))) | ((74 ? (var_6 * 628) : 55734))));
                                var_14 ^= (min(77, ((157 ? 76 : var_2))));
                            }
                        }
                    }
                }
                arr_15 [i_1] [16] = ((((((arr_9 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 4]) ^ (arr_9 [i_1 - 4] [i_1] [i_1 + 2] [i_1])))) ^ ((8661836556757123231 ? (arr_2 [i_1 - 4]) : 65))));
                var_15 |= (arr_3 [i_1] [i_1 - 2]);
                arr_16 [i_1 + 2] [i_1] = (min(((-(arr_4 [i_0] [i_1]))), -29));
            }
        }
    }
    var_16 = (min(var_16, ((max((min(var_8, (min(var_8, var_2)))), var_4)))));
    #pragma endscop
}
