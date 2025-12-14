/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [2] [2] [i_2] [i_0] [i_4] [i_2] = (((((var_14 ? 18903 : (1 + 4294967278)))) ? -14 : (((((max((arr_6 [i_1] [i_1] [i_1]), 52364))) && (arr_13 [i_3 + 1] [3] [i_3 + 1] [i_3] [i_3 - 2] [i_3 + 1] [3]))))));
                                var_19 = (min(var_19, (((!(((arr_12 [12] [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1]) > 40412)))))));
                                var_20 = (((((((((arr_8 [i_0]) ? var_1 : var_9)) != 8)))) - (((((0 ? -21 : 65533))) | (arr_4 [i_0] [i_0])))));
                                var_21 -= ((-((((min(var_1, var_17))) ? (max(-12, var_15)) : (arr_6 [i_0] [i_1] [11])))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_0] = (65535 ? 48 : -37);
                }
            }
        }
    }
    var_22 = 13928487437135634429;
    var_23 -= var_5;
    var_24 = var_11;
    #pragma endscop
}
