/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = ((max(57, 0)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (min((((~13) ? ((12332208344236866643 ? 0 : -4)) : -1135896957)), (((-4 + 2147483647) << 0))));
                                arr_14 [i_0] = 2;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
