/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_11 [i_2] [i_1] [i_2] [i_0] = var_6;
                    arr_12 [i_0] [1] [i_0] [i_0] = ((+((max((arr_9 [i_1 + 4] [i_1] [i_1 + 2]), var_3)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 = 1391571973;
                                arr_19 [i_0] [i_1] [2] [i_3] [i_4] = var_14;
                                var_17 = (max(((var_7 * ((var_5 ? var_10 : var_7)))), (var_7 + -1391571973)));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_18 = var_2;
                    var_19 = (max((arr_9 [i_5] [2] [i_0]), var_6));
                    var_20 += -var_10;
                    var_21 = var_3;
                    var_22 = (max(((-1 ? 62350 : -1391571975)), (var_2 <= 2883)));
                }
                var_23 = ((((((~var_5) % var_5)) + 2147483647)) << (((max(21108, -1391571973)) - 21108)));

                for (int i_6 = 4; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    var_24 = max(var_11, (13 <= 17616));
                    var_25 |= ((+(max((((arr_22 [9] [i_6] [1] [i_0]) ? var_8 : var_10)), (arr_6 [3] [i_1 + 3])))));
                    var_26 = (max(var_26, (((var_6 && ((((~-1391571974) - ((var_1 / (arr_15 [10])))))))))));
                    arr_25 [i_0] [i_1 + 3] [i_6 + 2] [i_0] = (((-(max(var_4, var_11)))));
                }
                for (int i_7 = 4; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    var_27 = (((!(~50331648))));
                    var_28 = (((~var_4) ? ((((((((1339727446 ? (-2147483647 - 1) : (arr_0 [i_0] [i_1]))) + 2147483647)) + 2147483647)) << (((-14584 + 14588) - 4)))) : 191));
                    arr_29 [i_0] [i_0] [i_7] = (!var_2);
                }
                arr_30 [i_0] [i_0] = ((var_9 ? (max(var_14, var_4)) : var_13));
            }
        }
    }
    #pragma endscop
}
