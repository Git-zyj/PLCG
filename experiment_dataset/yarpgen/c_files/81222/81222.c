/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(1702658948, (((((var_2 ? var_3 : var_15))) ? var_1 : ((var_3 ? 17893191750266649933 : var_14))))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (-20584 ? 1761001262 : 175);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = (((((arr_2 [i_0]) ? (arr_13 [i_1] [0] [i_1 - 1] [4] [i_1 + 2]) : (arr_13 [i_1] [2] [i_1 + 3] [i_1 + 3] [i_1 + 2])))) ? ((var_2 ? (((min(-15250, 172)))) : var_14)) : (3 ^ 10));
                                var_19 = (min(var_19, ((min((min(var_0, (arr_3 [i_4 - 1]))), ((((-32767 - 1) / 1386198210))))))));
                            }
                        }
                    }
                }
            }
        }
        var_20 = (min((((arr_0 [i_0 - 2] [i_0 - 1]) ? (arr_3 [i_0 - 2]) : 1444691573)), (min(var_3, (arr_1 [i_0])))));
        arr_14 [i_0] = ((max(2908769086, (max(1386198227, (arr_13 [8] [7] [7] [8] [7]))))));
    }
    var_21 = (((~var_8) & var_16));
    var_22 += (min(((((max(var_4, var_9))) ? ((var_9 ? var_14 : var_15)) : var_4)), (((((max(var_9, var_8))) ? (var_2 < var_14) : 855973153)))));
    #pragma endscop
}
