/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [15] = (arr_7 [i_0] [i_0] [8]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, var_3));
                                var_13 = 4197184128207704757;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(((min(var_7, var_9))), (min((0 && 1), (max(var_10, var_3))))));
    var_15 &= (-4197184128207704757 && 5272023602132751043);
    #pragma endscop
}
