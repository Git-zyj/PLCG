/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] &= (min((31960 & 65535), ((-(arr_1 [i_2 - 3] [i_1 + 1])))));
                    arr_9 [9] [i_1 + 2] [i_0] = (min(-15706, (max(-91, 5))));
                    arr_10 [i_0] [i_2] [i_2] [i_2] = ((-((min(var_0, -31960)))));
                }
            }
        }
    }
    var_12 = var_10;
    var_13 += -2;
    #pragma endscop
}
