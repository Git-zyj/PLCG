/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_10 = 9205357638345293824;
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_11 = ((-(min((arr_3 [i_1]), (arr_3 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                {
                    var_12 = (min(var_12, (((+((~(((arr_5 [1] [i_2] [i_3]) ? (arr_6 [20]) : (arr_3 [18]))))))))));

                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        arr_11 [i_1] [i_4 + 2] [i_3 + 2] [i_2] [i_1] = (max((max((arr_10 [i_1]), 18446744073709551615)), ((-9205357638345293839 ? var_2 : var_4))));
                        arr_12 [i_1] [i_1] = ((max((max(9223372036854775807, (arr_9 [22]))), (arr_4 [i_2 + 1]))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_13 -= (((~var_1) ? -9205357638345293824 : (arr_4 [i_2 + 1])));
                                var_14 = (min(var_14, ((min(((-9205357638345293825 ? (arr_7 [i_6] [i_2 + 1] [i_1] [i_6]) : var_2)), (((16140901064495857664 ? (arr_19 [i_5] [i_5]) : 61440))))))));
                                var_15 = var_3;
                            }
                        }
                    }
                    var_16 = (((min(((-1 * (arr_10 [i_1]))), ((min(120, 120))))) >= ((((8192 > ((252 ? 65535 : -9205357638345293824))))))));
                }
            }
        }
        var_17 = ((9205357638345293829 ? (arr_9 [i_1 + 1]) : (min(var_5, -9205357638345293828))));
        var_18 &= (((((var_1 & 9205357638345293824) ? ((var_0 ? (arr_9 [1]) : var_6)) : (arr_17 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1] [3])))) ? (((((arr_14 [i_1] [i_1 + 1] [13] [i_1]) <= -var_6)))) : (min((4294967295 / -9205357638345293824), -118)));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_19 = (max(9205357638345293820, ((18446744073709551615 ? 9205357638345293824 : 32256))));
        var_20 = var_4;
    }
    var_21 = (min(((((min(var_9, 120))) ? (min(-16777216, var_8)) : 4113)), (((((min(var_3, 65535))) ? var_5 : (var_5 & 2147483647))))));
    var_22 = var_3;
    var_23 = 255;
    #pragma endscop
}
