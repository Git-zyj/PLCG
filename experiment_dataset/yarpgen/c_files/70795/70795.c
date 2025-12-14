/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_20 ^= (((arr_0 [i_0 + 3]) >= ((var_1 / (arr_0 [i_0])))));
        arr_2 [10] [i_0] = (arr_0 [i_0 + 3]);
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_6 [i_1] = (arr_0 [i_1]);
        var_21 = var_14;
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                {
                    var_22 = -123;
                    arr_16 [17] [17] = (arr_10 [i_2] [i_2]);
                    arr_17 [i_2] = var_15;
                }
            }
        }
    }
    #pragma endscop
}
