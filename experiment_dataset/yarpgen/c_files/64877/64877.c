/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= ((4677920797262668510 ? 1 : 1));
    var_20 = (((((~var_16) < (1 >> var_6))) ? var_6 : (((2147483647 / var_10) * var_15))));
    var_21 += ((((((min(2147483632, var_12)) * ((var_15 ? 480 : 1048575))))) ? 1 : ((1 ? var_4 : -1048594))));
    var_22 = (max(var_22, ((min(((6405206327599593696 ? 4294967295 : -2147483641)), ((((-1048578 != 65045) && (((0 ? 2147483632 : 4329327034368)))))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_10 [i_3] [i_1] [i_3] [i_3] = ((((65535 ? var_15 : 12041537746109957920))) ? (-127 - 1) : (var_6 && 1));
                        var_23 += ((+((((-2147483647 - 1) == 0)))));
                    }
                    var_24 = (((arr_7 [i_0]) || (arr_7 [i_2])));

                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        var_25 = (((arr_9 [i_4 + 3] [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 1]) ? 255 : 65081));
                        arr_13 [i_2] [i_4 - 1] = (((((65535 ? 2279357478 : (arr_8 [i_4] [i_2] [i_0])))) || (~var_5)));
                        arr_14 [i_4] [i_4] [0] [i_4] = 2147483625;
                        var_26 |= (((((var_13 ? -126 : 248))) ? (-2147483632 / 1048575) : (-2147483647 - 1)));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_17 [i_0] [i_2] [i_2] = (arr_11 [i_0]);
                        var_27 = ((127 ? 127 : ((7 ? 255 : -1048590))));
                        arr_18 [i_0] [0] [i_2] [0] = ((((((-127 - 1) ? var_18 : 216))) ? var_9 : 255));
                        var_28 -= ((-1048549 ? (((arr_0 [i_2]) | 6390672864569044317)) : (((2147483641 ? -1 : 0)))));
                    }
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        arr_21 [i_0] = var_4;
                        arr_22 [i_0] [i_1] [12] [i_6] |= var_11;
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_29 += (((arr_11 [i_1]) || (-268435456 && 1048549)));
                        arr_25 [i_0] [i_0] [i_1] [i_2] [i_7] [i_7] = 20;
                    }
                }
            }
        }
        arr_26 [i_0] [i_0] &= var_16;
    }
    #pragma endscop
}
