/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_18 = (((((1 ? 1 : 13434400014225354345))) ? (~var_17) : ((((143833713099145216 == (arr_2 [i_0] [0])))))));
        var_19 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_20 = (arr_4 [i_3] [i_3]);
                            var_21 ^= 16092;
                        }
                    }
                }
            }
            arr_12 [i_1] [i_0] [i_0] = ((1 ? (((arr_9 [i_0]) ? (arr_1 [i_1]) : var_8)) : (arr_2 [i_0 - 2] [i_0 - 2])));
        }
        arr_13 [6] = (((arr_2 [i_0] [i_0 - 2]) ? (arr_3 [i_0] [i_0 - 2]) : ((7374 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_0] [1])))));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_16 [i_5] [i_5] = -2240366035486945181;
        var_22 *= min(-16417, ((var_17 ? 277070984427798851 : (arr_7 [15] [i_5]))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_23 = ((((((((var_6 ? (arr_17 [i_6]) : var_16))) ? (arr_18 [i_6] [i_6]) : ((-(arr_18 [1] [i_6])))))) ? (arr_19 [i_6] [i_6]) : (((arr_17 [i_6]) * (arr_18 [i_6] [i_6])))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            var_24 = (((-10 * 277070984427798864) / var_5));
                            var_25 &= 3183421272577765908;
                            var_26 = (min(var_26, ((((arr_28 [i_10] [12] [12] [i_6] [i_9]) ? (var_16 == var_4) : (arr_20 [i_10] [i_10] [i_6]))))));
                            var_27 ^= (var_12 > var_0);
                        }
                        var_28 = -14198;
                        var_29 = 16223;

                        for (int i_11 = 2; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            var_30 = (max(var_30, var_8));
                            var_31 = (min(var_31, (arr_28 [i_11 + 1] [5] [i_11 + 1] [i_9] [i_9])));
                            var_32 = (((arr_29 [23] [i_6] [23] [23] [i_6] [i_6]) ? (((arr_30 [i_8] [i_11 - 1] [i_7] [i_9] [1]) ^ (arr_30 [i_11] [i_9] [i_8] [20] [20]))) : ((max(10397, (arr_26 [i_11 - 2] [i_11 + 1] [i_11 - 1] [i_8]))))));
                            arr_36 [i_6] [i_7] [i_6] [23] [i_9] [i_7] = ((((((arr_32 [i_11 - 2] [i_6] [i_11 + 1]) ? ((((arr_28 [i_7] [i_7] [6] [i_7] [i_7]) > var_6))) : (arr_29 [i_11 + 1] [i_6] [i_11 - 1] [i_11] [i_11 + 1] [i_11])))) ? var_3 : ((var_3 ? var_15 : (arr_27 [i_6] [i_7] [i_8] [i_9] [i_6] [i_11 + 1])))));
                        }
                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 24;i_12 += 1) /* same iter space */
                        {
                            var_33 = (arr_38 [i_6] [4] [4]);
                            var_34 = (arr_32 [i_12 - 1] [i_9] [i_6]);
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                {
                    var_35 = (min(var_35, (((!(arr_31 [i_6] [i_14] [i_13] [i_6]))))));

                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        var_36 = var_1;
                        var_37 -= ((((((arr_24 [i_14] [i_15]) ? (arr_23 [i_6] [i_14]) : (arr_23 [i_14] [i_14])))) ? (max((arr_26 [i_15] [i_15] [i_15] [i_15]), (arr_23 [i_15] [i_14]))) : (arr_26 [2] [4] [2] [4])));
                        var_38 -= ((var_6 ^ (min(15, (arr_33 [i_14] [i_14] [4] [6] [i_6])))));
                    }
                }
            }
        }
        var_39 = (((~-var_5) ? var_15 : ((min((arr_27 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]), (arr_21 [i_6] [i_6] [i_6]))))));
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
    {
        arr_49 [24] = ((var_7 ? (arr_26 [i_16] [i_16] [24] [i_16]) : (((arr_34 [i_16] [i_16] [i_16] [22] [i_16]) ? (((var_6 ? (arr_18 [i_16] [6]) : (arr_44 [22] [i_16] [i_16])))) : (arr_48 [18])))));
        arr_50 [i_16] [i_16] = (((((-10375 * ((var_12 ? -15 : 4821740244120367118))))) ? (((max(18169673089281752742, var_12)))) : (arr_34 [i_16] [i_16] [i_16] [0] [i_16])));
    }
    var_40 = var_9;
    var_41 ^= ((22461 ? 277070984427798840 : var_8));
    var_42 = (((-5491188073748991314 + var_1) ? ((31691 ? var_17 : (~var_17))) : var_15));
    #pragma endscop
}
