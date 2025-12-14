/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] = (2147483647 < 0);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = var_5;
                                var_13 = ((+(((~-873231353) & (~var_9)))));
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4] = ((0 ? 65535 : 226));
                                var_14 = (arr_3 [i_0] [14] [i_0]);
                            }
                        }
                    }
                }
                arr_15 [22] &= (max(((max(4280831618, (~3748341798)))), (min((arr_11 [i_1] [i_0 - 2] [18] [i_0 - 2]), (((0 ^ (arr_7 [i_0] [i_1] [i_0] [i_1]))))))));
            }
        }
    }
    var_15 = (max(var_9, var_11));
    #pragma endscop
}
