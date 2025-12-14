/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-(((4294967276 >= (-32767 - 1)))))) <= (max(var_2, 32761)));
    var_13 = ((~(((!(!1))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 *= ((!((-0 <= (~9359)))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_15 = -108;
            var_16 = (min(50438, (((arr_0 [i_0]) + -32762))));

            /* vectorizable */
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        var_17 = 2129873668739681506;
                        var_18 *= (arr_0 [i_4 + 1]);
                    }
                    var_19 *= (~1);
                }
                var_20 = (max(var_20, (((46 ? 0 : (-127 - 1))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_21 = 0;
                            var_22 = (arr_4 [i_0] [i_0] [12] [i_6]);
                            arr_17 [i_6] [i_0] [i_0] [i_0] = var_9;
                        }
                    }
                }
                var_23 += (((arr_7 [i_0] [i_2 - 3] [i_2 + 3] [i_0]) ? ((7680 ? var_9 : 9223372036854775808)) : var_3));
                arr_18 [i_0] [i_0] [i_0] = -var_5;
            }
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_24 = ((!(((max(var_10, var_11))))));
            var_25 = ((((((6 ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_15 [i_0] [3] [i_0] [3] [i_7]))) >> (var_5 - 24419))) <= (((max((arr_4 [i_0] [i_0] [i_0] [i_7]), var_5))))));
            var_26 += ((+(((arr_12 [i_0] [i_7] [i_7] [i_7] [i_7] [i_0]) >> (var_6 - 82)))));
            arr_22 [i_0] = (~32757);
            var_27 = max((((((2129873668739681506 ? var_11 : (arr_10 [i_0] [i_0] [1] [1] [i_0]))) & (var_8 < var_9)))), (arr_9 [i_0] [i_0] [i_0] [i_7] [i_7]));
        }
        for (int i_8 = 3; i_8 < 16;i_8 += 1)
        {
            var_28 = ((((((max(-1, -92))) ? 1848504526 : (((min(4, var_2)))))) <= (arr_11 [i_0] [i_0] [i_8] [i_8 - 2])));
            var_29 = var_7;
            var_30 = 1;
        }
        arr_25 [i_0] = (!var_6);
        var_31 = (max(var_31, (~var_4)));
        arr_26 [i_0] = var_4;
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        arr_30 [i_9] = (33187 + 1);
        arr_31 [i_9] [i_9] = (max((!1), 1));
        arr_32 [i_9] = var_8;
        var_32 ^= -17464;
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        var_33 = var_2;
        arr_36 [i_10] = (min(var_1, (~8160)));
        var_34 = -16905;
    }
    var_35 = ((((var_6 ? -20535 : 3709153291)) - -var_11));
    #pragma endscop
}
