/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -6264854022669906747;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 |= var_16;
                    arr_7 [i_0] = (max(1077467509, -7));
                    var_20 -= 1807;
                    arr_8 [11] [i_1 - 1] [11] &= ((((!((max(1853171311, var_3))))) ? var_10 : 1));
                }
            }
        }
    }
    var_21 = var_12;
    var_22 = ((var_0 <= ((((2097151 | 1406064039) * (max(0, 0)))))));
    var_23 = ((((((var_5 - 1077467521) ? (-1853171294 + 7) : (1 + var_7)))) ? 7466595618215300209 : var_9));
    #pragma endscop
}
