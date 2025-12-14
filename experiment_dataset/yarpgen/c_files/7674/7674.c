/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((!(!19)))));
    var_21 += var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [11] = 2147483647;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_22 = (-((var_11 >> (((arr_5 [i_2] [i_0]) + 6027820729964912013)))));
                    arr_7 [13] [i_1] [i_1] [13] = var_16;
                }
            }
        }
    }
    var_23 ^= var_19;
    var_24 = var_15;
    #pragma endscop
}
