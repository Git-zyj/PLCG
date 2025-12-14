/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 |= ((!3351855684) + var_15);
                var_19 = ((!((min(var_5, var_9)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1] = var_5;
                            var_20 = (((min((var_5 << 15), (53 && var_11))) % (((!var_13) ? 12 : var_7))));
                        }
                    }
                }
            }
        }
    }
    var_21 = ((((var_5 ? 102237905 : var_12))));
    #pragma endscop
}
