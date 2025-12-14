/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((~(((arr_1 [21] [21]) ^ (arr_2 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_21 = -var_8;
                        var_22 ^= 13925412019368226009;
                    }
                }
            }
        }
        var_23 = var_4;
    }
    var_24 = var_15;
    var_25 = (0 | -108);
    #pragma endscop
}
