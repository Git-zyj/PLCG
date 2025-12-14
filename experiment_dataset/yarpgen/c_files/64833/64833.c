/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0] [i_0]);
        arr_5 [i_0] &= var_5;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, ((min((~var_11), (~872412900))))));
                        arr_14 [i_0] [i_1] [i_1] [i_3] = (--1746754018189870703);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_14 = var_8;
        var_15 = (arr_15 [i_4] [i_4]);
        arr_17 [i_4] = var_11;
        arr_18 [14] &= var_0;
        var_16 = 1145802810;
    }
    #pragma endscop
}
