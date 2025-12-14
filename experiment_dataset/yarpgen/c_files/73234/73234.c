/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_15 = 1;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_3] &= 26854;
                        var_16 = -126;
                    }
                }
            }
        }
    }
    var_17 = var_10;
    var_18 = var_4;
    #pragma endscop
}
