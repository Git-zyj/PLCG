/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -10199;
    var_11 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [11] [i_0] = (!255);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_12 = -10;
                            var_13 |= (min(((max((arr_6 [i_2] [i_2 + 1] [i_2 - 2]), 40666))), 37));
                            arr_12 [i_0] [i_3] = (min(2961946324, ((max(9, 37)))));
                        }
                    }
                }
                arr_13 [i_0] = (!65526);
            }
        }
    }
    var_14 = 4294967291;
    #pragma endscop
}
