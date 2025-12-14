/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_18 = (!11895498804245809332);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_19 = 4218928923;
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] = var_8;
                        var_20 |= ((~(var_3 != 332907370)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_21 = 32434218;
        var_22 = 1792;
        arr_15 [i_4] = (arr_9 [i_4]);
    }
    var_23 = var_1;
    var_24 = (max(0, -127));
    #pragma endscop
}
