/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_11 = 2002352343;
        arr_2 [i_0] = 32221;
        var_12 = (min(var_12, (((16315573935195210130 | ((65535 ? 1 : 9914387330773853706)))))));
        arr_3 [i_0] = ((var_9 >> (80 - 63)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] &= ((((11025212734652994249 ? -81 : 62)) * -32250));
        var_13 = (((((min((arr_5 [i_1] [i_1]), var_9))) ? 18446744073709551615 : (arr_7 [i_1]))));
        arr_9 [i_1] = (!32221);
        var_14 = min((-9223372036854775807 - 1), (min((arr_6 [i_1]), ((12 | (-2147483647 - 1))))));
        var_15 = 8589934528;
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        arr_12 [i_2] = ((~(arr_1 [i_2 + 1])));
        var_16 += (((((var_1 && (7421531339056557367 != var_3))))) == 18446744065119617088);
    }

    for (int i_3 = 3; i_3 < 18;i_3 += 1)
    {
        var_17 = (max(var_17, ((min((((min((arr_14 [14]), var_10)))), (max(4294967282, 859460544610055270)))))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_18 = (min(var_18, (!0)));
                            var_19 *= max((!var_1), (max((min((arr_16 [14]), -1148280728)), var_9)));
                            arr_28 [i_3] [i_5] [i_6] [i_7 - 2] = ((0 >= (((min(-32222, 0))))));
                            arr_29 [i_3] [1] [i_5 - 2] [i_4] [i_4] [i_3 - 2] [i_3] = (8532356742935697909 - 17017);
                        }
                    }
                }
            }
            arr_30 [i_3] [i_3] [i_3] = var_5;

            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {

                /* vectorizable */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_20 = ((((((arr_18 [i_3]) == 0))) + ((-(arr_24 [i_3] [i_4])))));
                    var_21 = (max(var_21, ((((arr_23 [i_3] [16] [i_3] [i_9] [i_3 - 1] [15]) + 18446744073709551603)))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_22 = 1;
                    arr_37 [i_3] [i_3] [i_8] = (((arr_5 [i_4] [i_8 - 1]) | (arr_22 [i_3] [i_3] [i_3 - 2] [i_3] [i_3])));

                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_23 = 0;
                        var_24 = -2141006729;
                    }
                    var_25 = (18014398509481728 ? 61 : 15618180003805257810);
                    arr_41 [i_3] = (arr_32 [i_3 - 3] [i_4] [i_8] [i_10]);
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        {
                            var_26 = ((((arr_35 [i_3 + 1]) << (var_9 - 22))));
                            var_27 *= (((arr_43 [i_12] [i_12] [i_12] [i_8 - 1] [i_3 - 1] [i_3 - 1]) + ((65535 ? 20 : 154))));
                            arr_48 [i_3] [i_4] [i_4] [i_4] [i_4] [12] [i_3] = 0;
                            var_28 = (min(var_28, 8532356742935697903));
                        }
                    }
                }
                arr_49 [i_3] [i_4] [12] = 2014692748346475774;
            }
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                var_29 -= (max((max((arr_23 [i_14] [i_14] [9] [i_4] [i_4] [i_3]), (max(9914387330773853712, var_5)))), (((max(17389428594336619641, 127)) | (18014398509481728 && var_4)))));
                var_30 = var_5;
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
            {
                var_31 -= (arr_33 [i_3 + 1] [i_3 + 1] [2] [i_15] [i_15]);
                arr_54 [i_3] [i_4] [i_15] [i_15] = ((var_8 ? (arr_16 [i_3]) : (arr_16 [i_3])));
                arr_55 [i_3] [7] [i_3] = ((1 / ((32221 % (arr_19 [i_3] [i_3] [i_15])))));
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
            {
                var_32 = (((arr_22 [i_3] [i_3 + 1] [i_3 - 3] [i_3 - 3] [i_3]) ? 0 : 1));
                var_33 |= (!128);
                var_34 = 32744;
            }
        }
        var_35 = (~13618051190662872069);
        arr_59 [i_3] = (((((var_0 ? (arr_44 [i_3]) : (arr_44 [i_3])))) ? -32221 : (((max(1802007118, var_9)) * 0))));
    }
    var_36 += var_3;
    #pragma endscop
}
