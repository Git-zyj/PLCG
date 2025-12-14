/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((((((~64) ? ((max(var_6, 27156))) : (var_9 + -64)))) ? ((min(var_0, (min(var_18, var_18))))) : ((276972724 ? -75 : 26652))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 -= (arr_3 [i_0]);
        arr_4 [i_0] = 73;
        var_22 += 3251;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            arr_10 [i_1] [i_1] [i_2] = var_6;

            /* vectorizable */
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                var_23 = (max(var_23, (arr_0 [i_3])));

                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    var_24 = (max(var_24, (((arr_13 [i_3] [i_2] [i_3 + 1]) >= var_9))));
                    var_25 = ((-(((-26653 < (arr_5 [1] [i_4]))))));
                    arr_17 [i_4] = (((((arr_6 [8]) ? var_6 : var_19)) << (((arr_14 [12] [10] [i_2 - 1] [i_4 - 2]) + 11826))));
                    arr_18 [i_4] [i_4] [i_3] [i_4] [10] = ((!(-2147483647 - 1)));
                }
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_26 = (max(var_26, (((((min(((0 ? 88 : (arr_20 [i_1] [i_5] [i_5] [i_1]))), (((arr_6 [12]) ? -64 : 2147483647))))) ? (~8) : 0)))));
                            arr_26 [i_1] [i_5] [i_1] = (((max(var_19, (var_14 == 56)))) ? (120 ^ var_14) : (max(-1, (-88 > 188))));
                        }
                    }
                }
                var_27 *= ((-(((-26652 > 33554176) ? var_14 : (var_8 <= 495792535)))));
                arr_27 [i_1] [i_2] = (arr_5 [13] [i_5]);
            }

            for (int i_8 = 3; i_8 < 14;i_8 += 1)
            {
                arr_32 [i_1] [12] [i_1] = ((!((((min(var_8, var_8)) * (((var_13 ? var_6 : -134217728))))))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_28 = (min(var_14, var_7));
                            var_29 = (((var_4 || (arr_34 [i_9 + 2] [i_9 + 1] [i_9 + 2]))));
                            var_30 = ((((min(-var_9, (((!(arr_38 [i_1] [0] [1] [i_8 + 1] [0] [i_8 + 1] [i_8 + 1]))))))) ? 81 : var_15));
                            var_31 = ((((arr_8 [i_2 - 1] [i_8 - 2]) + (arr_8 [i_2 - 1] [i_8 - 3]))));
                        }
                    }
                }
                arr_39 [i_2] [i_2] [i_2] [10] = ((-495792529 + (arr_31 [i_1] [i_2] [i_8])));
                arr_40 [i_2 - 1] [i_2] [4] [i_2] = (((max(2147483647, 433144119)) << (((!(arr_12 [i_2 + 3] [i_2 - 1] [i_2 - 1]))))));
            }
            var_32 += (arr_5 [i_2] [i_1]);
        }
        var_33 = var_7;
        arr_41 [i_1] = (max(var_19, (min(var_8, (arr_37 [1] [i_1] [i_1] [i_1] [i_1] [6] [14])))));
    }
    var_34 = var_13;
    var_35 = (max((((var_4 > ((var_13 ? var_4 : (-2147483647 - 1)))))), (((-89 / var_17) ? (var_5 && 31268) : 31268))));
    #pragma endscop
}
