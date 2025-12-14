/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -22;
    var_12 = (max((((((var_10 ? var_7 : 0))) ? (((var_5 ? 0 : var_2))) : ((var_6 ? var_6 : var_6)))), var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_13 *= (arr_1 [i_2]);
                        arr_9 [i_0] [i_0] [i_0] [i_0] = 47;
                        arr_10 [i_3] [i_0] [i_0] [i_0] = ((1 == ((-120 ? 648133090 : (-2147483647 - 1)))));

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            arr_13 [13] [i_1] [i_0] [i_0] [i_1] = (arr_6 [i_0] [i_1] [i_3]);
                            var_14 = ((((3760 + ((max((arr_2 [i_3]), var_7))))) / ((max((!5), 111)))));
                            arr_14 [5] [i_0] [i_2] [i_3] [i_4 + 1] = (min(((~(235 / -105))), ((max(var_10, 124)))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_2] [i_5] = ((((arr_4 [i_0] [i_5]) == (arr_0 [i_5] [i_0]))));
                        arr_20 [i_0] [8] [i_2] [i_5] &= ((((max(var_3, -67))) ? (arr_11 [i_5] [i_1] [i_1] [4] [i_5]) : (((var_3 ? (((arr_0 [i_0] [i_2]) ? (arr_17 [i_5] [1] [i_0]) : var_4)) : (arr_2 [i_5]))))));
                    }
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_2] = ((-55 ? (arr_21 [i_0] [i_0] [i_0]) : 74));
                        arr_24 [i_0] [i_0] [i_0] [i_0] = (((arr_12 [i_6 + 1] [i_1] [i_2] [i_6 - 3] [i_0]) ^ ((max((arr_12 [i_6 + 1] [i_1] [i_2] [i_6] [i_2]), (arr_12 [i_6 + 1] [i_1] [5] [i_1] [i_1]))))));
                        arr_25 [i_0] [i_1] [i_2] [i_0] = ((2691537026 ? 32505856 : 1603430270));
                        var_15 = (((-1154242380 / 2147483635) & (max(648133106, (arr_17 [i_6 - 2] [i_2] [i_1])))));
                    }
                    arr_26 [i_0] [i_1] [i_0] [i_2] = 1;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_16 = ((min((arr_7 [i_8 + 1] [i_8 + 1] [i_0] [i_8] [i_8 + 1]), (arr_7 [i_8 + 1] [i_8] [i_0] [i_8 - 2] [i_8 + 1]))) + ((max(291155416, -29))));
                                var_17 *= 106;
                            }
                        }
                    }
                    var_18 = (-83 & 37608);

                    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        var_19 = ((((1 + (arr_29 [i_0] [i_0] [i_0]))) - ((0 ? ((min(-117, 80))) : 3921716764))));
                        var_20 -= 37618;
                        var_21 -= ((1 ? 1603430252 : (((1603430270 ? 15 : 65535)))));
                        var_22 = (((+(max((arr_36 [i_0]), -1078361843)))));
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        var_23 += (arr_15 [i_0] [i_1] [i_1] [i_0] [i_1]);
                        var_24 = (((((max((arr_32 [1] [1] [1] [i_10] [i_10]), 91))) && (242 / 8))) ? (arr_29 [7] [i_0] [7]) : ((-(arr_34 [i_0] [i_1] [i_0]))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [i_1] [i_11] [i_11] [i_11] [i_0] = (-1 / 12);
                        var_25 += var_3;
                        var_26 = (221 >= (arr_28 [i_1] [i_2] [i_11]));
                    }
                }
            }
        }
    }
    var_27 = var_5;
    #pragma endscop
}
