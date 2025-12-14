/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_9;
    var_12 &= (min(((var_4 - (max(17557826306048, 3882127797)))), var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (max((((arr_2 [i_1] [i_0]) ? 7735348899863524353 : (arr_4 [i_0]))), (((((arr_2 [i_0] [i_1]) ? var_1 : 3382320426))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_14 = ((max((((arr_2 [i_1] [i_2]) ? var_5 : 0)), (((62317 ? (arr_1 [i_1]) : 912646870))))));
                    var_15 -= (min((arr_3 [i_0] [i_1] [i_2]), ((min((arr_4 [i_0]), (arr_5 [i_1] [i_2]))))));
                }
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_16 [i_3] = (arr_4 [i_0]);
                                var_16 = (max(var_16, (arr_14 [i_5] [i_4] [i_4] [i_3] [i_1] [i_0])));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_1] [i_1] &= (var_0 || 255);
                }
            }
        }
    }
    var_17 = ((!(((-(var_5 < var_2))))));
    var_18 -= -var_9;
    #pragma endscop
}
