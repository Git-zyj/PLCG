/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= 9223372036854775807;
    var_14 -= 4208952208;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = ((-9223372036854775807 ? (!8224160437255149392) : 1));
        var_16 = ((+(((23307 & -120) << (((var_5 + 28404) - 12))))));
        var_17 = var_0;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((var_2 ? 17108 : (arr_3 [i_1 - 1])));
        var_18 = (arr_4 [i_1 + 1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    {
                        var_19 = var_8;
                        var_20 ^= ((8224160437255149388 ? (-2147483647 - 1) : 1596668473302942788));
                    }
                }
            }
        }
        arr_19 [i_2] [2] = 40;
        arr_20 [i_2] = (56430 * 837051171214365002);

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_24 [i_2] [i_2] [i_6] = 7229361390801131047;
            arr_25 [i_2] [9] = var_6;
            var_21 = ((7229361390801131047 ? var_11 : var_4));
            arr_26 [i_6] = ((((-40 ? (-127 - 1) : 60))) ? ((var_1 ? (arr_10 [i_2]) : var_12)) : var_12);
            var_22 = (((arr_23 [i_2] [i_2] [i_2]) ? 837051171214364993 : 26790));
        }
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                arr_32 [i_8] = 63;
                arr_33 [0] [i_8] [i_2] = ((var_8 & (arr_13 [i_7 + 1] [i_7 - 1] [i_7 + 2])));
            }
            var_23 = ((((arr_21 [9]) ? 56430 : (arr_14 [6] [i_7] [i_2]))));
            arr_34 [i_2] = (8533870781167414142 / (arr_27 [i_7 + 1] [i_7 - 1] [i_7]));
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            var_24 = var_6;
            var_25 = var_5;
            arr_38 [i_9] [i_2] = -60;
        }
        var_26 = (((var_4 ^ 3762) ? 86 : var_11));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_27 = (max(147595368, ((-(arr_39 [i_10] [i_10])))));
        var_28 += (((((54528 <= var_9) ? (min(var_12, 1024)) : (arr_39 [i_10] [i_10])))) & (max(7602652737483612384, var_6)));
        arr_42 [i_10] = ((var_11 | (((min((!-26790), 1965))))));
    }
    #pragma endscop
}
