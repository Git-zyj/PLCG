/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 13236029801436708173;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((((!332260768) ? ((1252319795 ? -332260769 : var_6)) : ((max(-6, -332260768))))))));
                arr_5 [i_0] = max((arr_0 [i_0]), (((arr_0 [i_0]) ? var_2 : var_7)));
                var_15 = var_1;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_16 = ((-(~var_2)));
                            var_17 = (max(((max((arr_10 [i_0] [i_1] [i_2] [i_1] [i_2 + 1]), (arr_10 [i_0] [i_2] [i_2] [i_2] [i_2 - 1])))), ((332260767 ? (arr_10 [i_2] [i_2] [i_2] [i_2 + 1] [i_2]) : var_10))));

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                arr_14 [i_0] [i_2] [i_2 - 2] = ((!((max((arr_9 [i_0] [i_0] [i_2]), -8401531255271193585)))));
                                var_18 = ((-((-332260768 ? 332260768 : (arr_8 [i_2] [i_1] [i_2] [i_3] [i_4])))));
                                var_19 = (min(332260789, 47030));
                                arr_15 [i_2] [i_2] [i_2] [i_3] [i_4] = (--16);
                            }
                            arr_16 [i_2] = arr_12 [i_1] [i_1] [i_2] [i_2] [i_3];
                        }
                    }
                }
            }
        }
    }
    var_20 = (--var_8);
    #pragma endscop
}
