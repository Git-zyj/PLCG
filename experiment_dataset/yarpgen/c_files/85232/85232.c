/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = (((arr_1 [i_0 - 1]) ? ((15199 ? 3712456058 : 0)) : 1274989489));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_4] [i_0] [i_1] [i_3] = (((31 ? (arr_0 [i_0] [i_0 + 1]) : (arr_14 [i_0] [i_0 + 1] [3] [i_1 + 2] [i_4 - 1] [i_4]))));
                                arr_18 [i_0] [i_1] [i_2] [i_4] [i_4] = ((-((max(225, ((min((arr_10 [i_3] [i_2] [8] [i_0]), 111))))))));
                                arr_19 [i_0] [i_0] [i_2] [i_4] [i_4] = ((31 >> (576460748008456192 - 576460748008456185)));
                                var_16 = ((-(((arr_1 [i_1 - 2]) - (arr_1 [i_1 + 1])))));
                                arr_20 [0] [i_1] [i_4] [i_3] [8] [i_2] [0] = var_3;
                            }
                        }
                    }
                }
                arr_21 [0] = (min(var_10, ((31 | (-103 & 4294967295)))));
            }
        }
    }
    var_17 = -112;
    var_18 = ((-(((-103 & 111) << ((((31 ? var_14 : var_7)) - 146))))));
    #pragma endscop
}
