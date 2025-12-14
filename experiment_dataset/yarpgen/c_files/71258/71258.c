/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((-(!4095)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] = (-9223372036854775807 - 1);
                arr_8 [i_1] [i_1] [i_0] &= (((var_10 || 95) ? (1 && 9223372036854775807) : (max(var_2, 17738940958559002206))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 10;i_4 += 1)
                            {
                                var_14 |= 707803115150549409;
                                arr_18 [i_0] [i_3 + 2] [i_2] [i_1] [i_0] = (((707803115150549407 - 281406257233920) ? (var_8 - 707803115150549424) : (0 + var_5)));
                            }
                            arr_19 [i_0] [i_0] [i_0] [i_0] = var_12;
                        }
                    }
                }

                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    arr_24 [i_0] = (arr_21 [i_0] [i_1] [i_5 - 1]);
                    var_15 = ((((((!((min(var_5, var_3))))))) - ((-547568497 ^ (9223372036854775807 & var_4)))));
                    var_16 = (max(var_16, ((max((((~(arr_22 [i_1])))), 9971736089717899141)))));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_30 [i_7] [i_1] [i_1] [i_6] [i_6] [i_7] &= (max(((min((max(32512, 0)), 4095))), (arr_3 [i_1] [i_7])));
                            var_17 = 6492210154820994952;
                            var_18 = (arr_4 [i_0]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
