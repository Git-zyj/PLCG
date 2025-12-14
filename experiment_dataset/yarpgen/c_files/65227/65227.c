/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = 110;
        var_18 = 119;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_2] = ((-242670834 ? -32764 : (arr_6 [i_2 - 3])));
                    var_19 = (max(var_19, (arr_1 [i_2] [i_0])));
                }
            }
        }
        var_20 *= (arr_2 [i_0]);
    }
    #pragma endscop
}
