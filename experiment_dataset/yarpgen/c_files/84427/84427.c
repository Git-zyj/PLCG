/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((min(var_7, var_3)) != (arr_1 [3] [i_1]))) ? (arr_0 [i_0]) : ((max(var_4, var_12)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [4] [4] [i_2] [i_3] |= ((((var_2 >> (var_17 - 507085389592223722))) >> ((((arr_6 [i_0] [i_2] [i_2] [i_3 - 3]) >= (arr_6 [i_3] [i_3] [i_3] [i_3 + 1]))))));
                            var_20 &= ((((max(148, (!var_0)))) ? (arr_8 [i_0] [i_0]) : ((max((((11 ? (arr_3 [23] [1] [i_3]) : var_16))), (max((arr_1 [i_0] [i_2]), var_0)))))));

                            for (int i_4 = 2; i_4 < 23;i_4 += 1)
                            {
                                arr_14 [i_3 - 3] [i_3 - 3] [i_0] [i_1] [i_0] [i_0] [i_0] = (max(((min(var_11, (arr_11 [i_4] [i_4] [i_4] [i_4 + 1] [i_4] [i_4 - 1] [0])))), ((~((var_17 ? var_5 : (arr_8 [i_1] [15])))))));
                                arr_15 [i_2] = var_15;
                            }
                            var_21 -= ((138 & ((max(var_9, var_10)))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((65533 ? 150 : 1566289338));
    #pragma endscop
}
