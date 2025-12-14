/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = 0;
        var_21 = 42824;

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_22 = 42803;
            var_23 = 630531158356216621;
            arr_4 [i_0] = 120;
            arr_5 [i_0] [i_1] [i_0] = 22699;
        }
        var_24 = 123;
        arr_6 [i_0] [i_0] = 22732;
    }
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        var_25 *= -343018961;

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_26 ^= 60688;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_27 = 1;
                            arr_24 [i_3] [i_6] [i_5] [i_3] [i_3] [i_3] = 1359;
                            arr_25 [i_3] = 58082;
                            var_28 = 22712;
                        }
                        /* vectorizable */
                        for (int i_7 = 4; i_7 < 22;i_7 += 1)
                        {
                            var_29 = (-2147483647 - 1);
                            var_30 = 42803;
                            var_31 *= 1517777249;
                            var_32 = -1157169695;
                        }
                        var_33 = (max(var_33, 42824));
                    }
                }
            }
            var_34 = 42803;
        }
    }
    for (int i_8 = 3; i_8 < 9;i_8 += 1)
    {
        arr_30 [i_8] [i_8] = 2147483646;
        var_35 = -1360;
        var_36 = 18306641141594574989;
        var_37 = (max(var_37, 2147483647));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                arr_35 [6] [6] [6] = 8192;
                var_38 = 135;
                var_39 = -2147483647;
                var_40 += 2004923697267558950;
            }
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    var_41 = 120;
                    arr_42 [i_9] [i_11] [i_9] |= 26;
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 11;i_14 += 1)
                    {
                        {
                            var_42 = (max(var_42, (-2147483647 - 1)));
                            var_43 = -3498229191082895133;
                            var_44 &= 402653184;
                        }
                    }
                }
            }
            var_45 = (min(var_45, 15360));
        }
    }
    var_46 = (min(var_46, var_17));
    var_47 = var_1;

    for (int i_15 = 0; i_15 < 13;i_15 += 1)
    {
        var_48 = 222;
        var_49 = (max(var_49, 31));
        arr_49 [10] = -73;
    }
    #pragma endscop
}
