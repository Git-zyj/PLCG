/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (((max((var_4 || 1), (var_14 || var_3))) || (max((!3526131400872642845), (116 && var_10)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (~(!var_9));
                                var_18 &= ((!(!var_2)));
                                var_19 = (((max(10040091133682304705, (!var_14)))) || (var_10 - var_12));
                                var_20 -= min(((3085976695400157283 | (min(var_12, var_2)))), ((min(var_15, var_11))));
                                var_21 += ((-4674888188651915063 ? (!1) : ((132 ? (-18519 || 1399068546) : 18136845362520395735))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_22 = (max(162, 42));
                                var_23 ^= (((((8580898898797342829 + 1373979366) ? ((var_13 ? var_11 : var_5)) : (var_5 & var_5))) - (((!((max(var_7, var_8))))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] = (var_3 > 6541882159513974667);
                        var_24 = (max(var_24, 6494));
                        var_25 = -var_14;

                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            arr_28 [i_0] [i_7] [i_7] [i_0] [i_1] [i_0] = (!var_7);
                            var_26 = var_12;
                            var_27 = var_5;
                            var_28 = (!var_12);
                        }
                    }
                }
            }
        }
    }
    var_29 = 162;
    var_30 = var_13;
    #pragma endscop
}
