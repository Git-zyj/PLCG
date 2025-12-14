/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (((((var_4 ? 0 : (arr_1 [i_0])))) * (((((arr_4 [1] [i_1]) ? var_19 : (arr_6 [i_0] [i_1]))) >> (((arr_6 [i_0] [i_0]) - 2508357079314850341))))));
                arr_7 [i_1] = ((!((!(arr_5 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_21 = (-15160 ? (15160 / var_8) : -15150);
                            var_22 = (((((var_8 != var_7) ? (((max(var_0, -88)))) : ((-(arr_4 [i_2] [2])))))) ? ((((((-(arr_4 [i_2] [i_2])))) || ((min(var_3, (arr_9 [i_3] [i_3] [i_3]))))))) : (max(-105, (arr_8 [i_2 + 1] [9] [i_2] [i_3]))));
                        }
                    }
                }
                arr_13 [i_1] = (max(((var_1 ? (arr_2 [i_1] [i_1]) : var_10)), var_4));
                arr_14 [i_1] [i_1] = ((((((arr_3 [14]) ? -15135 : 15160))) || (((var_2 ? 108 : (arr_3 [i_0]))))));
            }
        }
    }
    var_23 = var_18;
    var_24 = (((((-105 && var_6) && (!115))) ? (!429216298) : var_16));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        arr_18 [i_4] [11] = 429216298;
        arr_19 [i_4] = (-var_1 / var_15);
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_29 [i_5] = ((-((var_13 ? var_13 : 891899598))));
                        var_25 = -var_7;
                        arr_30 [i_4] [i_5] [i_4] [15] = 15160;
                        var_26 = (max(var_26, (15145 % -21198)));
                    }
                }
            }
        }
        var_27 &= (((arr_23 [i_4] [11] [7]) ? (((15153 >> (var_8 - 7507)))) : -942612743732546813));
        var_28 = (((2609801818 ? 942612743732546795 : 120)));
    }
    #pragma endscop
}
