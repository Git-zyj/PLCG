/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (max(-var_9, ((((var_10 ? 4176264599 : 2012605888))))));
                arr_6 [i_0] [i_0] = ((((((var_8 == (arr_0 [13] [15]))))) < (1854262297 / var_9)));
                arr_7 [i_0] = max(((2440705004 / (~1092673347))), (min((~623525855), (var_12 | 48806))));
            }
        }
    }
    var_16 = ((~((2440705001 ? 1941620347 : var_3))));

    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_20 [i_6] [12] [i_3] [i_3] [i_2] = (!-2440705004);
                                var_17 = (~-48875);
                            }
                        }
                    }
                    var_18 ^= (1055863102 >> (var_1 - 4220711368));
                    var_19 -= (max(9805, ((((min(var_3, (arr_12 [i_4] [i_2] [i_2])))) ? -1184014643 : 12824))));
                }
            }
        }
        arr_21 [i_2] = (((210687317 > var_9) || (((~((623525855 ? 55305 : var_13)))))));
        arr_22 [12] [12] = (((((~((3282115963 ? 694075944 : var_7))))) / (var_13 + var_1)));
        arr_23 [i_2] = (max(((((max(18210, 55310))) ? 12846 : (52711 % 32687))), (max(502419113, -1055863103))));
        arr_24 [i_2] [i_2] = min((max(((1024489349 << (((arr_11 [i_2] [i_2]) - 2191807079)))), (var_8 == 52724))), (max((arr_16 [i_2] [i_2] [i_2] [i_2]), (~var_12))));
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] [3] = var_3;
        var_20 = (min(var_20, 917368346));
        arr_29 [i_7] [i_7] = (!22105);
    }
    #pragma endscop
}
