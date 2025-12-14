/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [1] = (((((var_4 | var_3) + 9223372036854775807)) << (((((min((arr_1 [i_0 - 1]), -68)) + 131)) - 63))));
        arr_3 [i_0] = 7717725680704551891;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_16 = (min(var_16, (((((max(7, (arr_5 [i_2])))) ? ((min((arr_5 [i_2]), 26997))) : (max(var_9, var_7)))))));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_15 [i_4] [i_1] [i_2] [i_2] [i_1] [4] = (((((((var_7 * (arr_6 [i_0] [i_0] [i_0] [i_0])))) * (((arr_13 [i_1] [3] [i_2] [i_3] [8]) / var_9)))) + (((((arr_6 [i_0 + 3] [i_4] [i_2] [i_3]) != var_2))))));
                            arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((var_11 ? 4294967288 : var_15));
                        }

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_17 = (!105);
                            var_18 &= (((1 % 26) << (((1 + 10610193192556380389) - 10610193192556380377))));
                            var_19 = ((((((max(var_4, var_15)) + 9223372036854775807)) >> 4)));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_20 = ((+((((arr_17 [i_1] [i_2 - 2] [i_1] [2] [i_6]) || ((min(10610193192556380389, 422212465065984))))))));
                            var_21 = var_2;
                            arr_23 [i_1] [10] [i_2] [i_1] [i_2] = (8482937765771599851 || (67 & -374212111));
                            var_22 = ((28672 ? (-8272625068914765787 > var_8) : (min((((arr_18 [i_0] [i_1] [i_1] [7] [i_6] [i_1]) % 5)), (var_6 < var_7)))));
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_26 [1] [i_1] [i_1] [i_0] = ((((((!(3781878803 < 8068525574950944192))))) - ((var_12 ? 11220022999973093438 : (arr_20 [i_1 - 1] [i_2 + 3] [i_0 + 2])))));
                            var_23 = arr_25 [i_2] [i_2] [i_2 + 3] [i_3] [i_7];
                            var_24 = (var_0 + ((var_13 ? (arr_4 [i_2 - 2] [i_1 - 1]) : 10829318588761676696)));
                        }
                    }
                }
            }
        }
    }
    var_25 = -125;
    var_26 = var_1;
    #pragma endscop
}
