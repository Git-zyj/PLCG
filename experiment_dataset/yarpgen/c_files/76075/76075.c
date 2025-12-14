/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = (max(var_10, var_4));
                arr_4 [i_0] = 12;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, (((!((max(-70, (((arr_10 [i_2] [i_3] [i_2] [i_1] [i_0 - 1]) ? 70 : (arr_0 [i_0 + 2] [i_0 + 2])))))))))));
                                var_12 = ((((var_9 ? 74 : 79))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = var_6;
    var_14 = var_9;
    var_15 = var_7;
    #pragma endscop
}
