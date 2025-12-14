/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_5 & var_10);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_12 *= ((-216 && (((arr_2 [8]) < var_2))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = min(65535, 144);
                                var_14 = (max(var_14, ((max((arr_14 [i_3 - 1] [10] [i_3] [i_4 + 2] [8] [i_1 + 1]), var_0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
