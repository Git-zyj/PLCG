/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = ((((arr_2 [i_1] [i_2 - 2]) ? var_7 : (arr_2 [i_1] [i_2 - 1]))));
                    var_13 = var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_0] [i_0] [i_0] = (min((var_5 != var_9), (min(79, -9223372036854775804))));
                                var_14 = (~1);
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (max(var_15, ((~((-(~2555589206191600477)))))));
    #pragma endscop
}
