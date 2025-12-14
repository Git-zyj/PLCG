/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (((((-10604 + 2147483647) << (((max(571957152676052992, (arr_2 [i_0]))) - 14040198137978520304)))) >> (((((arr_1 [17]) ? var_9 : (arr_0 [i_0]))) - 1103384100))));
        arr_3 [i_0] = var_11;
        var_21 = ((var_5 << (((arr_1 [i_0]) - 8115936166315249147))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_22 *= ((+(((arr_0 [i_1]) << (var_16 + 2928001663821412746)))));
        arr_6 [i_1] = (max((var_11 > var_2), (((arr_5 [i_1] [i_1]) / (arr_5 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_23 ^= ((((max(24, 3)))));
            var_24 &= (+(((arr_7 [i_3]) / (arr_7 [i_3]))));
            arr_12 [i_2] [i_2] [i_3] = ((var_9 << (var_0 || var_18)));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_25 = 65533;
            var_26 = ((arr_9 [i_2]) && ((((arr_14 [i_2] [i_4]) / 3))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_27 = (((max(var_3, (max(65533, (arr_1 [i_2])))))) ? 4491527936561483754 : 750167859);
                            var_28 &= ((+(((arr_7 [i_6]) & (arr_7 [i_2])))));
                        }
                    }
                }
            }
            var_29 = (min(-98, 65532));
        }
        var_30 = (max((1073152374291476039 >= -6662666710026035053), var_15));
        arr_21 [i_2] = var_14;
        arr_22 [i_2] = ((((arr_9 [i_2]) && (arr_9 [i_2]))) ? var_5 : ((13847 & (max(var_11, var_18)))));
    }
    var_31 = var_13;
    var_32 = (((65520 << ((((((var_11 ? -2653 : var_1) + 2681)) - 16))))));
    #pragma endscop
}
