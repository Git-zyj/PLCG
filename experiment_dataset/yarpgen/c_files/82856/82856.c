/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 4194303;
    var_14 = 0;
    var_15 = -25281;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 *= 0;
        var_17 = -15376;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = 18446744073709551615;
            arr_5 [i_0] = 18446744073709551615;
            var_18 ^= 0;

            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                var_19 = 4294967284;
                var_20 = -1;
                arr_8 [i_2] [i_0] = 492581209243648;
                var_21 = 1;
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_22 = (-32767 - 1);
                            arr_17 [i_0] [i_0] [i_0] [i_0] = 0;
                            var_23 = 1;
                            var_24 = 0;
                        }
                    }
                }
                arr_18 [i_0] [i_0] = 18446744073709551615;
                var_25 = 65535;
                var_26 = (max(var_26, 2139777838));
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_23 [i_0] [i_0] [i_0] = 0;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 8;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_30 [i_0] = 8097;
                            arr_31 [i_9] [i_0] [i_7] [i_0] [i_0] [i_0] [i_0] = 4294967284;
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = 1;
                            var_27 = 130;
                        }
                        arr_33 [i_0] [i_0] [i_0] [i_8] = 230;
                        arr_34 [i_0] [i_0] = 853003792;
                    }
                }
            }
            arr_35 [i_0] [i_0] = 125;
            arr_36 [i_0] = 1930;
        }
        arr_37 [i_0] = 146;
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                {
                    arr_46 [i_12] [i_11] [i_11] [i_10] = 24;
                    arr_47 [i_10] [i_10] &= 1;
                }
            }
        }
        var_28 = -1241713661;
        var_29 = 4355751883062228745;
        var_30 = (min(var_30, 17562772989441034690));
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        arr_50 [i_13] = 11;
        var_31 = -1241713667;
    }
    #pragma endscop
}
