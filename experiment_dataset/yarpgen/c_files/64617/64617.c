/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = 110;
                    var_13 = var_9;
                }
            }
        }
    }
    var_14 = var_0;

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_15 *= ((!((!(arr_4 [i_3])))));
        var_16 = -4096;
        var_17 = ((max((arr_3 [i_3] [i_3] [i_3]), (max(32640, 0)))));
    }
    #pragma endscop
}
