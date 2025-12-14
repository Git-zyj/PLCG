/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] |= var_11;

                for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] = (-(max(1991587408, var_10)));
                        var_16 = var_5;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_17 = (min((((~var_15) ? var_5 : (!var_4))), (((~(1991587408 == 2196276263298804872))))));
                                var_18 = ((((max((max((arr_2 [i_0] [i_0] [i_0]), 0)), ((((arr_1 [i_0] [i_0]) ? var_11 : var_15)))))) ? (var_14 || 193859152347476345) : var_3));
                                var_19 = (123 <= 4);
                            }
                        }
                    }
                    var_20 = ((min(2303379889, 1991587420)));
                }
                for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
                {
                    var_21 = 440035548;
                    var_22 = (((~2382129132) ? ((((min(var_13, var_13)) == var_13))) : ((((arr_16 [i_1] [i_0] [i_0] [i_6 + 1] [i_0] [i_6] [i_6]) >= (arr_9 [i_1] [i_1] [i_0] [i_6 + 1] [i_6]))))));
                    var_23 = var_2;
                }
            }
        }
    }
    var_24 |= -1619623184;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            {
                var_25 = (max(((max(-24, (arr_8 [i_7] [8] [i_8])))), var_11));
                var_26 = (min(var_26, (((var_8 ? (((-114 ? ((var_14 ? 13 : (arr_7 [i_7] [1]))) : 51))) : var_14)))));
                var_27 = ((((min(var_15, 1075858524))) ? var_0 : (var_4 <= var_5)));
                var_28 *= (((max(var_10, (2 / 440035552))) << (((((max(587361727, (arr_10 [i_7] [6] [6] [4] [i_8 + 4] [i_8]))))) + 85))));
                var_29 -= (min((max(((8433246735071350939 >> (115500655 - 115500603))), (13 + 1090076251))), ((min(var_15, 66)))));
            }
        }
    }
    #pragma endscop
}
