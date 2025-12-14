/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_12 = (max((arr_4 [i_0] [i_0]), ((((!var_8) ? var_4 : (var_8 ^ var_10))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = ((-((-(min((arr_8 [i_0] [i_1] [i_2] [i_3]), var_2))))));
                                arr_12 [i_0] [i_1] [i_2] [i_4] [i_3] [i_4] = (min(((((1 ? var_2 : (arr_1 [i_0]))) + -var_2)), ((min((!3793675577), (9116 && var_4))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_6] [i_5] [i_6] = (((!(arr_3 [i_0] [i_1] [i_6]))));
                                var_14 = ((3793675577 >> (127 - 101)));
                            }
                        }
                    }
                    var_15 = 248;
                }
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_16 += (arr_10 [i_0] [i_7] [i_1] [i_0] [i_0]);
                    var_17 = (min(248, (max(12411106105684787695, var_3))));
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    var_18 = (arr_13 [i_8] [i_1] [i_0] [i_0]);
                    arr_24 [i_0] [i_8] [i_8] = var_4;
                    arr_25 [i_0] [i_1] [i_8] = (~117);
                    var_19 = (min(((~((3849084658 ? 1 : var_1)))), ((((((var_5 ? var_7 : -292831356))) ? (((4898128519306400219 == (arr_10 [i_8] [i_1] [i_1] [i_8] [i_8])))) : (arr_22 [i_0]))))));
                }
                arr_26 [i_0] |= (((((((min(3543220240, 2))) ? -3164691052517660136 : 14))) ? ((max(var_10, var_9))) : (((-(arr_14 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]))))));
                var_20 &= (501291712 % 3164691052517660143);

                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {

                    for (int i_10 = 3; i_10 < 20;i_10 += 1)
                    {
                        var_21 += (arr_5 [i_1] [i_9]);
                        var_22 += (((((1 ? (arr_27 [i_0] [i_9] [i_9]) : 1))) && 0));
                        var_23 = (((var_8 ^ -32760) | ((111 ? 699296329 : 1))));
                    }
                    var_24 = (~123);
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 18;i_13 += 1)
                        {
                            {
                                var_25 = 3793675559;
                                var_26 = 56;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 21;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            {
                var_27 = (((min((arr_41 [i_14]), (arr_41 [i_14]))) | var_9));
                arr_45 [i_14] [i_14] = ((var_2 < (((1 ? (((var_1 == (-2147483647 - 1)))) : ((3164691052517660136 ? 0 : var_5)))))));
                arr_46 [i_14] [i_14] [i_14] = var_7;
                var_28 += (arr_29 [i_14] [i_14] [i_15] [i_15]);
            }
        }
    }
    #pragma endscop
}
