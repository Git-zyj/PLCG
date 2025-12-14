/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_0] = -412583184;
            var_10 = (((!(!3878193954))));
            var_11 += (((min((max(var_4, var_1)), (~var_3))) * ((((arr_1 [i_0]) ? var_0 : (max(var_0, 416773342)))))));
        }
        var_12 = max(var_3, ((((var_5 < 3878193954) == (416773341 << 1)))));
        var_13 |= min(((((max(var_0, var_6))) ? 1974943893 : ((var_4 ? 3878193957 : var_8)))), 0);
    }
    var_14 = (((max((var_3 | var_5), ((-26518 ? var_2 : var_3)))) & ((5 ^ (18014398241046528 / 18428729675468505088)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_14 [i_2] = var_3;
                var_15 = (min(7, (58085 + var_5)));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_24 [i_2] [i_6] [i_3] [3] [i_2] [i_5] [i_6] = (min((((!((min(var_3, var_0)))))), var_3));
                                arr_25 [i_6] [i_3] [i_3] [i_3] [i_6] [i_3] [i_3] = (max((max((~var_2), ((var_8 ? -3651655367509191802 : var_4)))), (!10)));
                                var_16 -= (max(var_8, var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, ((max(6, 56)))));
    #pragma endscop
}
