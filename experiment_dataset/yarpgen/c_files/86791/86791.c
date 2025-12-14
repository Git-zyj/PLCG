/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, (((-(((7840 / 23219) ? ((max(7840, 7840))) : 120)))))));
                            arr_8 [i_3] [i_1] [i_1] [i_1] = (arr_4 [18]);
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_15 = ((var_8 >= (!18446744073709551602)));
                    var_16 = var_9;
                    var_17 *= (((((arr_5 [i_0]) + 2147483647)) << (((var_1 + 1736889398) - 29))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_18 ^= (~var_12);
                    arr_15 [i_0] [i_0] [i_0] [i_5] = ((7846 ? (arr_6 [i_0] [i_0] [i_1] [i_1] [i_1]) : (arr_6 [i_1] [i_1] [i_1] [i_1] [i_0])));
                    var_19 = (min(var_19, var_7));
                    var_20 = ((37 ? 19 : 5868916894124670497));
                    var_21 = (~260046848);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_22 = (((var_0 ? 5978 : var_7)));
                    var_23 ^= (((11658 ? -11659 : 120)) < (!var_8));
                }
                var_24 ^= (+-93);
                arr_18 [i_0] = (((arr_9 [i_1] [i_0] [i_0]) | (arr_9 [i_1] [i_0] [i_0])));
                arr_19 [i_1] [i_0] [i_0] = (arr_9 [i_0] [i_0] [i_0]);
            }
        }
    }
    var_25 = min((min((var_0 + var_11), var_13)), -3268908238);
    var_26 = var_7;
    var_27 ^= var_9;
    #pragma endscop
}
