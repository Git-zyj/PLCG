/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((-(var_12 + 0)))) ? ((1 ? -var_12 : var_14)) : (24115 <= 1)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = 237;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1 - 2] [i_2] [i_0] [i_4] = ((((((arr_14 [i_0] [i_1 - 1] [i_2] [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_4]) ? (arr_14 [0] [i_1 - 2] [1] [i_1 - 2] [i_0 + 3] [i_1 - 1] [i_0 - 1]) : (arr_7 [i_0])))) ? (((arr_2 [i_1 - 1] [i_0]) ? 1 : (arr_2 [i_1 - 1] [i_0]))) : 242));
                                var_18 *= (((arr_11 [i_0] [i_1] [i_4] [i_3] [i_4]) < (max(((18446744073709551596 | (arr_1 [i_1] [i_2]))), -1))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = -1648583860;
    #pragma endscop
}
