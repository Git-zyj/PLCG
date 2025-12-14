/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = ((((min(((29 ? -30 : 9)), var_9))) ? var_2 : (var_9 * 1)));
                                var_15 = (max((((arr_6 [i_0] [i_1] [i_2] [i_3]) ? (arr_6 [i_0] [i_1] [i_3] [12]) : (arr_6 [i_4] [i_3] [i_2] [i_1]))), var_9));
                            }
                        }
                    }
                    arr_11 [i_0] [i_1] [i_0] = var_5;
                }
            }
        }
    }
    var_16 = min(var_5, ((~((4152 ? var_3 : 1245763963)))));
    #pragma endscop
}
