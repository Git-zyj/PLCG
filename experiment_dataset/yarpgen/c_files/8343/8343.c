/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_18 = 0;
        var_19 = (arr_1 [i_0] [i_0 - 1]);
        var_20 = (((arr_2 [i_0]) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 22;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_21 = var_3;
                            var_22 = 9572;
                        }
                        var_23 = ((var_13 ? (!var_8) : ((var_15 ? var_11 : (arr_3 [i_0])))));

                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            var_24 = (max(var_24, (!var_13)));
                            var_25 = (((-(arr_13 [i_0] [2] [i_2 + 4] [i_3] [2] [i_5] [i_0]))));
                        }
                        var_26 &= ((-(arr_9 [i_0] [i_1] [i_3])));
                        var_27 = (((~var_6) % 45256));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        var_28 = (arr_5 [i_6] [i_6]);
        var_29 = (arr_0 [i_6 - 2] [1]);
        var_30 = (((arr_16 [i_6] [1]) ? var_15 : ((4 ? 0 : var_4))));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        var_31 = 9572;
        var_32 = ((!(arr_7 [i_7] [i_7 - 1])));
        var_33 = (-(arr_6 [i_7 + 1] [3] [i_7 + 1]));
    }
    var_34 = var_8;
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 21;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 23;i_12 += 1)
                        {
                            {
                                var_35 = ((~(((arr_0 [i_8 + 1] [i_11 + 3]) ? 9569 : var_14))));
                                var_36 = (arr_28 [i_8 + 1] [i_11 + 3]);
                            }
                        }
                    }
                    var_37 = ((((((var_1 + 2147483647) >> (((arr_12 [i_10 + 2] [i_8 + 1] [i_9 + 2] [i_8 + 1] [i_8 + 1] [i_8 + 1]) + 110))))) ? ((+((24471 ? (arr_22 [i_8]) : var_3)))) : var_9));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 23;i_14 += 1)
                        {
                            {
                                var_38 = ((((max(var_15, (9572 - 0)))) ? -1802745726 : var_16));
                                var_39 = (arr_6 [i_8] [i_8] [16]);
                            }
                        }
                    }
                    var_40 = ((-((((max(var_9, var_12))) ? (((!(arr_24 [i_9 + 1])))) : var_1))));
                }
            }
        }
    }

    for (int i_15 = 0; i_15 < 17;i_15 += 1)
    {
        var_41 = max((arr_28 [i_15] [i_15]), ((~((0 >> (var_1 + 53))))));
        var_42 |= (max((((arr_30 [i_15] [i_15] [i_15] [i_15]) & (arr_28 [i_15] [i_15]))), (((arr_28 [i_15] [i_15]) ? (arr_30 [16] [i_15] [i_15] [i_15]) : var_16))));
        var_43 ^= ((((1 - ((9572 ? (arr_15 [10] [20]) : var_4)))) - var_14));
    }
    for (int i_16 = 1; i_16 < 21;i_16 += 1)
    {
        var_44 = var_9;
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 25;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 25;i_18 += 1)
            {
                {
                    var_45 = 4294967295;
                    var_46 = ((60454 ? var_16 : (max((arr_22 [i_16 + 3]), (arr_13 [i_18] [18] [i_16] [i_16 + 1] [18] [i_16] [i_18])))));
                    var_47 -= (((((1802745725 + (var_12 != 1)))) ? ((max(0, 0))) : (!0)));
                }
            }
        }
    }
    var_48 = -3953300477421103588;
    #pragma endscop
}
