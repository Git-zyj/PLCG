/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_16 = 501842021;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] [i_0 - 2] [8] = (((arr_0 [i_1]) >= (arr_0 [i_1])));
            var_17 += (((10789454078830341849 / 1) * (arr_1 [7] [i_1])));
        }
        var_18 = 1;
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                {
                    arr_14 [i_4] [15] [i_2] [i_4] = (((1 / 1) * (arr_13 [1] [i_4 - 1])));
                    var_19 -= 1;
                    var_20 = 1;
                    var_21 = (~var_4);
                }
            }
        }
    }
    var_22 = 1;
    var_23 = ((((var_13 | 3089) | (83 ^ 1))) > var_8);
    var_24 = var_9;
    #pragma endscop
}
