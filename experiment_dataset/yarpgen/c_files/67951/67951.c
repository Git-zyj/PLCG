/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((max((((((min(-98, var_15))) ? ((max(var_3, var_6))) : -87))), ((-(max(var_9, var_5)))))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_20 |= 199;
                        var_21 |= min((arr_0 [6]), ((((arr_9 [i_0] [i_0] [i_1]) != var_2))));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_22 = ((-(((((max(13, (arr_2 [15] [15])))) || (((1 | (arr_9 [i_4] [i_0] [i_2])))))))));
                        var_23 *= (((((min((arr_4 [i_4] [i_0] [i_0]), 21)) / (((var_12 ? 24 : 1))))) != (((596180325 & 1) ? (min((arr_4 [i_4] [i_2] [i_0]), 1)) : (((var_16 ? var_10 : 13561)))))));
                        arr_17 [i_2] [i_2] = (((min((var_3 * var_10), (((arr_2 [i_0] [i_0]) | -19431)))) + (~var_6)));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_24 = (min(var_24, var_5));
                        var_25 = ((var_18 ? -18440 : 43));
                        arr_20 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5] = (((((var_15 ? 0 : var_10))) < ((-21350 ? var_18 : var_15))));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_26 = var_4;
                        arr_24 [i_2] [i_1] [i_1] [i_1] = 4844877515128724151;
                        arr_25 [i_2] = (((min((min(2770056286, 2070100184661060444)), 1951570485)) | (((max(var_17, (arr_5 [i_0] [4] [i_0])))))));
                    }
                    arr_26 [i_2 + 2] [i_1] [i_2] = (max((((!(arr_23 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 - 1])))), (min((arr_19 [i_2 + 2] [i_2] [i_2] [i_2 - 1]), (((arr_5 [i_0] [i_1] [i_0]) ? var_13 : var_9))))));
                }
            }
        }
    }
    var_27 = (12836194854895931158 / -1);
    var_28 = (((!(var_16 & var_0))));
    var_29 -= min((max((((1601137615 ? 596180350 : var_13))), -281474976710655)), ((var_10 ? ((1951570485 ? var_15 : 0)) : var_9)));
    #pragma endscop
}
