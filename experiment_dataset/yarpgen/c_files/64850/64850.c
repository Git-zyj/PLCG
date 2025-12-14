/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_12 = 32767;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_13 = 253;
                            arr_18 [i_0] = 255;
                            var_14 += 5;
                            var_15 = 1;
                            var_16 = 204;
                        }
                        arr_19 [i_0] [i_1] [i_2] [i_0] = 0;
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_17 = 6919513096142465822;
                            var_18 = (min(var_18, 1230588528239503631));
                            var_19 = 255;
                            arr_25 [i_5] [i_0] = 39239;
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_20 = 224;
                            var_21 = 179;
                        }
                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_0] = 0;
                            arr_32 [i_0] [i_1] [i_2] [i_0] [i_8 - 1] [i_2] = 0;
                            var_22 = 9256357816853051535;
                        }
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_23 = 24;
                            var_24 = (max(var_24, 1));
                            var_25 = 59397;
                            var_26 |= 49643;
                        }
                        var_27 += 2527823483672926399;
                        var_28 = 192;
                        var_29 = 1551;
                        var_30 |= 1;
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_31 = (max(var_31, 233));
                        arr_39 [i_0] [i_1] [i_0] = 109;

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_43 [5] [i_0] = 255;
                            arr_44 [i_0] [i_1] [i_1] [i_1] [i_11] [i_0] [i_11] = 38574;
                            var_32 = 9;
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            arr_47 [i_0] [i_0] [i_2] = 13;
                            var_33 = (max(var_33, 127));
                            var_34 = 4294967285;
                        }
                    }
                    var_35 = 1;
                }
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    var_36 = 1562;
                    var_37 = 213;
                    arr_51 [i_0] [i_0] = 39908;
                }
                var_38 = 255;
            }
        }
    }
    var_39 = var_11;
    var_40 ^= var_1;

    /* vectorizable */
    for (int i_14 = 1; i_14 < 10;i_14 += 1)
    {
        var_41 = 16409974354428678859;
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 9;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 11;i_16 += 1)
            {
                {
                    var_42 *= 1;
                    arr_59 [i_14] [i_14 - 1] [i_14 - 1] = 13957;
                }
            }
        }
    }
    #pragma endscop
}
