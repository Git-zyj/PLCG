/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (244 && 9);
        arr_3 [i_0] = ((var_6 | (218 % var_5)));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = var_10;
                    arr_10 [i_0] = (var_5 ^ -752071264);
                }
            }
        }
    }
    var_11 = var_7;
    #pragma endscop
}
