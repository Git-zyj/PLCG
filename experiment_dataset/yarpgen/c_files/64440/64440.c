/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 7;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = 254123149;
        var_20 = (max(var_20, (4040844146 || -108)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_11 [i_0] = var_6;

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_21 += (min(0, 255));
                        arr_16 [i_0] [i_1] [i_2] [i_2] [i_3] &= 3702504230;
                        arr_17 [i_0] [i_0] [i_0] [i_0] = ((110 ? (((!110) ? (!var_7) : (((var_5 && (arr_14 [i_0] [i_0])))))) : ((~((var_6 ? var_5 : var_5))))));
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_22 += ((4040844129 ? ((4294967295 ? var_13 : -7)) : (((var_8 ? var_14 : var_14)))));
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((98 ? -15 : 4040844146));
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = 146;

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_23 = var_0;
                            var_24 *= (var_4 * var_1);
                            arr_27 [i_0] [i_1] [i_2] [i_2] [i_5] = var_5;
                            var_25 = 157;
                            var_26 *= (~-118);
                        }
                        var_27 = (min(var_27, ((min(254123152, (254123149 >= 157))))));
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        arr_30 [i_2] [i_1] [i_2] [i_2] = (((((((var_13 ? var_12 : -43))) != (var_6 * 99))) || ((((var_7 != 11) ? (max(98, var_6)) : ((((-18997 + 2147483647) << (((-32753 + 32769) - 16))))))))));
                        arr_31 [i_0] [i_0] [i_0] [i_0] = ((!(((((((((arr_4 [i_0]) + 2147483647)) >> (var_7 + 108)))) ? -172 : ((55 ? var_0 : var_6)))))));
                        arr_32 [i_0] = ((var_16 ? var_15 : ((98657434 ? 196 : 129))));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_28 *= ((~((((139 + (arr_12 [i_0] [i_0] [i_1] [i_2] [i_0] [i_7]))) & 0))));
                        var_29 += (((((var_15 ? (((2557506493 ? (arr_4 [i_0]) : 90))) : (((arr_10 [i_0] [i_1] [i_2 + 1]) ? var_1 : 2391820903))))) ? var_3 : ((((min(107, var_11))) ? (arr_6 [i_2]) : (arr_24 [i_0] [i_0] [i_1] [i_2 + 2] [i_7])))));
                        var_30 = 881820218;
                        var_31 += ((~((~((min((arr_7 [i_2 - 1]), var_4)))))));
                    }
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 22;i_8 += 1)
    {
        var_32 = ((((min(1, var_8))) ? ((-((var_6 ? 131 : (arr_35 [i_8 + 2]))))) : ((((arr_35 [i_8 + 1]) ? (110 - 59) : var_16)))));
        var_33 = ((((5 ? 73 : 253))) ? (((((min(0, -120))) ? ((min(25, 32767))) : ((344380073 ? 146 : 184))))) : ((((max(var_9, 122))) ? 254123149 : ((84 ? var_8 : 21)))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_34 += (((!2171) ? 16383 : -var_14));
        var_35 += var_8;
    }
    var_36 = (max((((18777 ? var_15 : var_11))), var_10));
    var_37 = (((((((max(214, var_9))) ? (127 && 5894) : ((var_7 ? var_10 : var_6))))) ? var_15 : var_17));
    #pragma endscop
}
