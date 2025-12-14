/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = -233;
        arr_4 [i_0] [i_0] &= ((((max((arr_1 [i_0] [i_0]), (30 + var_0)))) ? (((var_16 * var_11) ? (((((arr_0 [i_0] [i_0]) < var_6)))) : (arr_0 [i_0] [i_0]))) : ((((var_7 ? var_1 : 23)) - 15136679174304131372))));
        arr_5 [i_0] = (arr_0 [i_0] [i_0]);
        arr_6 [i_0] = ((7 ? 65 : 940486959226890357));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_11 [i_1] = 3310064899405420223;
        arr_12 [i_1] = 0;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_17 -= (((((min((arr_1 [i_2] [i_2]), (arr_1 [i_2] [i_2]))))) <= (~var_15)));
        var_18 = 0;
        arr_15 [i_2] = arr_13 [i_2];
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    {
                        var_19 ^= 23;
                        var_20 = ((var_1 > (((((arr_0 [i_2] [i_3 - 3]) || 524893740645005885))))));
                        arr_23 [i_3 - 3] [i_4] [i_5 + 1] = 6805179777948916195;
                    }
                }
            }
        }
    }
    var_21 = (min(-1, -24940));
    var_22 = var_14;
    var_23 = var_13;
    #pragma endscop
}
