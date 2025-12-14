/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((~2577260859854401756) - var_4)), ((((var_1 ? 8250128561612469429 : var_15)) % ((max(-25508, var_0)))))));
    var_18 -= (var_6 / var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 |= (126 <= 0);
                                var_20 -= var_2;
                            }
                        }
                    }
                }
                var_21 = (((arr_0 [i_0] [i_0]) > ((max((var_11 <= 1008), (arr_0 [0] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
