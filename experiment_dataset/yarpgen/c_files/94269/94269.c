/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = min(((max((arr_5 [i_0 - 2] [i_0 + 2]), var_0))), (((arr_2 [i_0] [i_0] [i_0 - 4]) % (((min(59412, 17301)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((!((min(17301, 31527))))))));
                                var_21 = 13460;
                            }
                        }
                    }
                    var_22 = (min((!var_3), 1));
                }
            }
        }
    }
    var_23 = var_12;
    var_24 = ((var_10 ? -var_8 : -var_6));
    var_25 = (max(var_25, var_15));
    #pragma endscop
}
