/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(((-32755 ? var_6 : var_3)), var_7))) || ((((((min(-32747, -1)))) & (min(var_0, -32739)))))));
    var_17 = var_12;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [9] = var_13;
        var_18 = (((-65525 ? (((arr_2 [i_0] [i_0]) ? 1318203067 : (arr_0 [i_0] [i_0]))) : 32747)));
        var_19 = ((((min((arr_1 [i_0]), 32754))) & 1318203056));
        arr_4 [i_0] = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_20 = ((var_7 ? (((2873488264441345548 ? (arr_5 [i_1]) : (arr_5 [i_1])))) : (~1318203088)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 9;i_3 += 1)
            {
                {
                    arr_15 [i_1] = ((((arr_2 [i_3 - 2] [i_3 - 1]) ? (arr_8 [i_3 + 1]) : var_3)));

                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_21 ^= ((!((min(var_0, -32767)))));
                            var_22 = ((!(((0 ? (arr_17 [i_3] [i_3 - 2] [i_3 - 4] [i_3 - 3]) : var_10)))));
                        }

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            arr_25 [i_6] = ((var_3 < (min((((~(arr_12 [i_1] [i_2] [i_3 - 2])))), ((2976764235 ? (arr_5 [i_1]) : 2976764240))))));
                            arr_26 [i_6] [i_3] = 1;
                            arr_27 [i_2] [i_2] [i_6] [i_2] [i_2] = -32764;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_23 = (min((~-32754), 14716226463565864044));
                            var_24 = ((~(min((arr_11 [i_3 + 1] [i_4 + 2]), (arr_22 [i_1] [i_2] [i_7] [i_3 - 1] [i_4 + 2] [i_4])))));
                        }
                        arr_30 [8] [i_4 + 2] [8] [i_4 + 2] = (((min(var_15, (((arr_5 [i_1]) * (arr_6 [i_1] [i_2]))))) + var_14));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_25 = ((~(min(((2976764240 ? -32764 : -13408)), (32764 && 65414)))));
                        arr_34 [i_1] [i_2] [i_3] [i_1] = 14282957742578194640;
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        var_26 ^= (--65535);
                        var_27 = (min(var_27, ((((!268435455) & ((((min((arr_5 [i_3 - 4]), var_14))) & (254 - var_14))))))));
                        var_28 = (min(var_28, ((min(((min(((min(var_15, 1))), 1318203061))), (((((32761 ? (arr_8 [5]) : -32764))) / (arr_32 [i_3 - 2] [i_3 - 4] [i_3] [i_3] [i_3 - 3] [i_3 + 1]))))))));

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_29 = (((-(arr_28 [i_1] [i_10] [i_10] [i_9] [i_10]))) < ((min((min((arr_39 [i_2] [i_9] [i_10]), (arr_12 [i_1] [i_1] [i_1]))), (!var_10)))));
                            var_30 = (1 < -32767);
                            var_31 ^= (((((2976764233 ? var_6 : (arr_32 [i_1] [i_2] [i_3] [i_3] [i_2] [i_10]))))) ? (~var_10) : var_0);
                            arr_42 [i_1] [i_1] [i_1] [i_1] [7] = ((((min(2976764219, 65532)) * -32751)));
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            arr_46 [i_11] [i_2] = ((((((arr_14 [i_2] [i_3 + 1] [i_3 - 1] [i_11]) > ((-522 ? var_11 : 1318203077)))))) & (((arr_21 [i_1] [i_3 - 4] [8] [i_9] [i_11]) ? (min(var_3, var_13)) : (((((arr_44 [i_1] [1] [1] [i_1] [i_1] [i_1]) >= var_0)))))));
                            var_32 = var_15;
                            var_33 = (min(var_33, (min((arr_39 [i_2] [i_2] [3]), (((!(((var_3 << (arr_38 [i_1] [i_2] [i_3] [i_9] [i_11])))))))))));
                        }
                        arr_47 [i_1] [i_1] [i_1] [i_1] = (((1318203046 ? 65531 : 65515)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
