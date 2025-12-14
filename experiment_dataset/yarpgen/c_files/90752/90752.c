/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (((((~(var_12 & 7)))) ? ((var_1 ? ((77 << (var_12 - 588))) : var_12)) : var_1));
    var_20 = (max(var_20, var_10));
    var_21 = (max(var_21, -486044621));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_22 = (((arr_5 [i_0 + 3] [i_2 + 1] [i_2 - 2]) / 200));
                        arr_13 [4] [i_1] [i_2] [i_2] [i_2] [1] |= (((486044621 > -37) ? 138 : (arr_6 [i_0 + 4] [i_2 + 1])));
                        var_23 = (arr_10 [i_3] [16] [i_1] [16] [i_0]);
                        var_24 = arr_9 [i_0 + 2];
                    }
                    for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_25 *= ((((min(77, 22858))) * ((~(arr_4 [i_4 - 2] [i_4 - 2])))));
                        var_26 = (255 & 155215834);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_27 = (max(var_27, 6765));
                        var_28 = (min(var_28, ((((arr_15 [i_0] [i_2 - 1] [i_2 + 1] [i_5]) ^ -113372499)))));
                    }
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        var_29 = (min(var_29, ((min(((-(arr_12 [i_1 + 2] [i_6 + 2] [i_2 - 2]))), -8176)))));
                        var_30 *= (max((((arr_4 [i_0] [i_1]) >> (((arr_2 [6]) ? 21 : (arr_14 [i_0] [i_1] [i_2 + 1] [i_6]))))), (arr_6 [i_2] [i_6])));
                        var_31 -= (((((217 & (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (arr_17 [i_0]) : (arr_16 [i_0] [i_1] [i_2] [19]))));
                        arr_21 [i_1] [i_1 - 1] [i_2] [i_0] |= (min(((max((arr_1 [i_1 + 2]), var_8))), (((arr_14 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1]) * (arr_1 [i_1 + 2])))));

                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            arr_25 [i_0 - 3] [i_1] [i_7] [i_6] [1] [i_6] [11] &= 7128;
                            var_32 = arr_12 [i_2 + 1] [14] [i_7];
                            var_33 -= (arr_16 [i_0] [i_1] [i_2] [i_7 + 2]);
                        }
                    }
                    var_34 = (arr_16 [i_0] [17] [i_0] [i_0]);
                    var_35 = 1407;
                }
            }
        }
    }
    #pragma endscop
}
