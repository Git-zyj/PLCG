/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (((var_7 >> (-8192 + 8206))));
    var_14 -= (((-var_10 & (!3807761159))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] = var_7;
                    arr_10 [i_0] [i_0] [i_1] [i_2] = (((var_11 + 2147483647) << (487206163 - 487206163)));
                }
            }
        }
        arr_11 [i_0] = 73;
        var_15 = ((var_11 - (127 == 15891613898917835125)));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        var_16 = -255;
        arr_14 [i_3] [i_3] = var_4;
        var_17 = ((~(((-9223372036854775807 - 1) + 27875))));
    }
    var_18 = (20 - 2555130174791716490);
    #pragma endscop
}
