/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                arr_10 [i_1] [i_1] [i_3] [i_4] = (max(((min(1013820358, 2985315517))), var_3));
                                var_18 = (~(10507967374022471168 != 1));
                                var_19 = (((((arr_8 [17] [i_3] [i_2] [i_1] [i_1] [i_0]) < var_4)) ? ((1849537194 ? (arr_8 [i_0] [i_1] [i_2] [1] [i_3] [21]) : (arr_1 [i_3]))) : ((min(1, (arr_1 [i_3]))))));
                            }
                            for (int i_5 = 0; i_5 < 25;i_5 += 1)
                            {
                                arr_14 [i_1] [i_1] [i_3] [i_3] = (arr_11 [i_5] [i_0]);
                                var_20 += (min(var_0, -241447922));
                                var_21 = ((var_9 >> (max(1, ((0 ? 64614 : 12))))));
                            }
                            arr_15 [i_3] [i_1] [i_2] [i_3] = ((1014420131 && (!0)));
                        }
                    }
                }
                arr_16 [i_0] [i_0] [i_0] = (min(11781805772387281211, 1));
            }
        }
    }
    var_22 = ((max(127, var_16)));
    var_23 &= (max(42140, 18446744073709551615));
    var_24 = 1286087321;
    #pragma endscop
}
