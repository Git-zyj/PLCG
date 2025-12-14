/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_2] = 0;
                    arr_10 [i_2] [6] [6] = (arr_2 [i_1] [i_2]);
                    var_20 = (max(1, 1));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_21 = (max(255, 1));
                                var_22 = (max(var_22, ((max(((147493981 ? ((var_9 ? 1 : 2650)) : ((~(arr_8 [1] [15] [i_0]))))), 192)))));
                                arr_15 [i_3] [i_3] [i_3] [i_3] [i_2] [i_3] = 29;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (var_5 && 122);
    #pragma endscop
}
