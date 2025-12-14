/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (-6615 ^ 981971217);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = (((((max((arr_3 [i_0]), 6617)) * (121 + -32489))) == (max((arr_3 [i_0]), (23 * -1)))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    var_21 = (max(var_21, (arr_6 [i_0] [i_0])));
                    var_22 *= (arr_6 [i_3 - 1] [i_1 + 1]);
                    arr_14 [i_0] = 131;
                    arr_15 [i_0] [i_1] [i_0] [i_1] [i_3] = arr_1 [15] [i_0];
                }
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_23 &= ((-1 & (arr_7 [i_1 + 1] [i_5] [i_1 + 1])));
                        var_24 = ((var_12 ? (((arr_12 [i_0] [i_0] [i_0] [i_0] [3]) | -9223372036854775807)) : 15699));
                    }
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        arr_24 [i_0] [i_1] [i_0] [i_4] [i_0] = arr_0 [i_0];
                        var_25 = (((arr_13 [i_0] [i_6 - 1] [1] [1] [i_4 - 3] [i_0]) % -376698652006785400));
                    }
                    var_26 = (var_5 % var_5);
                }
                arr_25 [9] [i_0] = (((~-9223372036854775807) ^ (arr_19 [i_0] [i_1 - 2])));
            }
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    {
                        var_27 = (arr_31 [i_0]);
                        var_28 = (arr_22 [i_0] [i_0] [i_1 - 2] [i_1] [i_7 - 3] [i_8]);
                        var_29 = ((-1815653793 & (var_13 - var_9)));
                    }
                }
            }
            arr_32 [i_0] = (1815653792 & ((~(arr_2 [i_0]))));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            var_30 &= (min(0, (min(130, 8669174455173448194))));
            var_31 = (max(var_31, ((max((min(-var_8, 6601)), (119 - var_5))))));
            var_32 = (arr_0 [i_9]);
        }
        arr_37 [i_0] = (!99);
    }
    var_33 = 52;
    var_34 = (min(((max(-1556555684, (121 + 39740)))), 10590571264459702160));
    var_35 = ((-(((var_18 * var_14) ? var_7 : var_17))));
    #pragma endscop
}
