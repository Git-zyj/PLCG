/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [1] [i_0] [i_0] = 1;
                    var_21 = -9117147905242692781;
                    arr_10 [i_0] = 1685702610;
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((-((var_19 ? var_11 : var_0))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            {
                var_22 = 7566601022817373678;
                arr_20 [i_4] [i_3] [i_4 + 3] = var_11;
                var_23 = (210 ? var_17 : -8218765126224237395);
            }
        }
    }
    var_24 = var_17;
    #pragma endscop
}
