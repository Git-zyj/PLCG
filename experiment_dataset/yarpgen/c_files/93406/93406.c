/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 255;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_12 = 32768;
        arr_3 [10] |= -1843024362;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 &= 49881;
                    arr_9 [i_2] [i_2] [i_2] = 253;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 4; i_5 < 21;i_5 += 1)
            {
                var_14 = 22582;
                var_15 = 255;
                var_16 = 105;
            }
            var_17 = 151;
            var_18 ^= -27;
        }
        for (int i_6 = 3; i_6 < 23;i_6 += 1)
        {
            arr_21 [i_3] [i_3] = 17785;
            arr_22 [i_3] [7] [i_6] = 24;
            var_19 = 7350;
        }
        var_20 = -113;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_21 = -2037121710;
                        var_22 = 65273;
                        var_23 = 4;
                        var_24 = 65535;
                    }
                    for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                    {
                        var_25 ^= 60;
                        var_26 = 255;
                        var_27 &= 91;
                        var_28 = 255;
                        var_29 = 1;
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                    {
                        arr_36 [i_7] [i_8] [i_3] = 28;
                        var_30 = 1989904954041314295;

                        for (int i_12 = 1; i_12 < 22;i_12 += 1)
                        {
                            arr_40 [i_3] [i_7] [i_8] [i_11] [i_12] = 96;
                            var_31 &= -2098141852;
                        }
                        var_32 = (min(var_32, 255));
                        arr_41 [i_3] [i_3] [i_3] [i_3] = (-2147483647 - 1);
                    }
                    var_33 = 255;
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 14;i_13 += 1)
    {
        var_34 = (-9223372036854775807 - 1);
        var_35 = 1910418289;
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                {
                    var_36 = 9223372036854775800;
                    var_37 = 27260;
                }
            }
        }
    }
    #pragma endscop
}
