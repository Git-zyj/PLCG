/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((65535 & 255), -1435565209));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 *= (min((min((arr_2 [i_0] [i_0 + 1] [i_1]), 12)), ((((((arr_2 [i_1] [17] [i_0]) ^ (arr_3 [i_0 + 2])))) ? ((((arr_3 [i_1]) + 24))) : 2708842274))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, 58011));
                                var_17 = (arr_0 [i_4]);
                                var_18 = (max(var_18, -var_8));
                                var_19 -= (((32 & 11) ? (((58011 ? 0 : -1))) : ((((arr_1 [i_0 + 2] [i_0 + 1]) ? (arr_1 [i_0 + 2] [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0 + 2]))))));
                                arr_10 [i_0] = (arr_3 [19]);
                            }
                        }
                    }
                }
                var_20 = (min(6, (((var_10 < (arr_8 [i_0 + 2] [i_1] [i_0 + 2] [i_0 + 1] [11] [i_0 + 1]))))));
                arr_11 [i_0 - 1] [1] [i_0 - 1] = (((((58011 ? (arr_8 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 1] [i_0 + 2]) : (~65535)))) ? ((min((arr_4 [i_0 - 1] [i_0 - 1]), (arr_4 [i_0 - 1] [i_0 + 1])))) : (((((max((arr_9 [19] [i_1] [15] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1]), var_6))) > (arr_5 [i_0]))))));
                arr_12 [i_0] = 58005;
            }
        }
    }
    #pragma endscop
}
