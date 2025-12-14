/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 0;
        arr_3 [i_0] [i_0] &= (((((var_8 ? (arr_0 [i_0]) : 536349137547007940))) ? ((var_2 ? 6058946134933502670 : 6239748268097989333)) : ((((arr_1 [i_0]) ? var_4 : 2147483647)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 - 1] [i_2] = 1;
                    var_15 -= ((var_8 > (-2147483647 - 1)));
                    var_16 = ((var_6 ? 1 : (arr_1 [i_1 + 1])));
                }
            }
        }
    }
    var_17 = ((~var_13) || var_7);
    var_18 = var_0;
    var_19 = (((((((~1) + 2147483647)) << (((71 >= 1) - 1)))) <= ((((12206995805611562282 > var_13) && (0 | var_13))))));
    #pragma endscop
}
