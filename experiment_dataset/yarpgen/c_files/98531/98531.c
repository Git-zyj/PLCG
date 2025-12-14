/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-var_3 ^ (~-594524673)));
    var_11 = ((var_3 < ((((min(var_7, var_0))) | (var_3 & -1308219191)))));
    var_12 = (~var_2);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = 6244;

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_12 [i_0 - 1] [i_0] [i_0] [i_2] [i_1] = (((((~(-32767 - 1)))) ? ((+((0 ? (arr_8 [i_0] [9] [i_1] [i_1] [i_2] [i_3]) : var_1)))) : (((((max(var_8, var_7))) ? (min(var_6, (arr_9 [i_0 - 1] [i_0] [i_0] [i_0]))) : (~1023))))));
                        arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (-2147483647 - 1);
                        var_13 -= 65535;
                    }

                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        var_14 = (((arr_4 [i_0]) ? 65535 : (arr_4 [i_2])));
                        var_15 = ((((!(arr_2 [i_0 - 1]))) ? ((((var_8 ? (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : var_3)) >> (((arr_1 [i_2]) + 18242)))) : (((~((var_9 ? 0 : (arr_6 [i_1]))))))));
                        arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] &= (arr_10 [i_0 - 1] [i_0] [i_0 - 1]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_16 ^= var_3;
                        arr_23 [i_0] [i_0 - 1] [i_1] [i_2] [0] [11] = (-2147483628 & -142321093);
                        arr_24 [i_0 - 1] [11] [i_2] [1] = -4092;
                        arr_25 [i_2] [i_1] = (var_5 == 0);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((~((max(-1, (arr_2 [i_0 - 1])))))))));
                                arr_30 [i_6] [i_6] = 12;
                                var_18 *= ((31 ? (arr_15 [8] [11] [i_2] [8] [i_7 + 2] [i_7]) : (((-145434396 ? 65535 : 32256)))));
                                var_19 = ((~(min((arr_10 [i_1] [i_6] [4]), (arr_10 [i_1] [i_2] [i_2])))));
                                arr_31 [i_0] [i_6] [i_2] [i_2] [i_6] [i_7 - 1] [8] = (arr_19 [i_0] [i_1] [i_2] [i_6]);
                            }
                        }
                    }
                    var_20 = ((((max(((min(32256, 1))), (arr_8 [i_0 - 1] [i_1] [i_1] [i_2] [i_2] [i_2])))) ? (arr_0 [i_0 - 1]) : var_5));
                }
            }
        }
    }
    var_21 = (!((((max(15161574742037808867, -4092)) - (((max(var_8, 1))))))));
    #pragma endscop
}
