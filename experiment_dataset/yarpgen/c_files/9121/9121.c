/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (max(-8222363771954854240, ((((((min(0, 48)))) != 1)))));
                    arr_8 [i_0] [i_0] = arr_7 [i_2] [i_2] [i_2] [i_2];
                    arr_9 [i_2] = var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = ((~((((min((arr_11 [i_0] [i_1] [i_2] [i_3] [1] [i_2]), var_7))) ? (min(-8222363771954854240, (arr_1 [i_3] [i_0 - 1]))) : (((((arr_11 [i_0] [i_0] [i_0 - 1] [i_3] [i_0] [i_0]) && 64))))))));
                                var_18 = ((((((arr_3 [i_3 + 2] [i_3 + 3] [4]) >= (arr_3 [i_3 - 1] [i_3] [i_3])))) | ((max((arr_3 [i_3 - 1] [i_2] [i_2]), var_12)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((max(((max(var_6, 154))), (min(var_8, -8222363771954854224)))) >> (((((!var_10) ? (min(var_15, var_7)) : (473563441 ^ -14879))) - 3821389005))));
    #pragma endscop
}
