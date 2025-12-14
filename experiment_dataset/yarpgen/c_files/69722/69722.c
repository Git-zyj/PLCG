/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 *= (max((((arr_2 [i_0]) | (arr_1 [i_0]))), (((~(arr_1 [i_0]))))));
        var_20 |= (arr_1 [i_0]);
        var_21 -= (((10611896773671491305 == 0) > ((-(arr_0 [i_0] [i_0])))));
        arr_3 [i_0] &= ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_2))) ? (81 - 1) : -1));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_22 *= (arr_4 [i_1] [i_1]);

        /* vectorizable */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_23 = (max(var_23, (((-(arr_5 [i_1]))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_24 -= ((((((arr_10 [i_2]) ^ (arr_7 [13] [i_4])))) ? (1613187643 <= 2239843536049473730) : 1613187647));
                        var_25 -= (!-19901);
                        arr_13 [i_1] [i_1] |= 830767320535142081;
                        var_26 = (max(var_26, (arr_9 [i_2] [i_2] [i_2 + 2] [i_2 + 2])));
                    }
                }
            }
            arr_14 [11] [i_2] [i_2] |= (arr_6 [i_1]);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_27 = (min(var_27, 3635017505363494764));
                            arr_23 [7] [i_6] [i_5] [i_2] [i_1] |= ((-(arr_19 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2 + 1])));
                        }
                    }
                }
            }
        }
        var_28 = (min(var_28, ((((((arr_6 [i_1]) * 1)))))));
        arr_24 [i_1] |= (((arr_17 [20] [i_1] [i_1] [i_1]) ? ((((((arr_15 [i_1] [i_1] [i_1]) ? var_11 : 50536))) ? (arr_7 [i_1] [17]) : (79 * 1))) : ((-(arr_4 [i_1] [i_1])))));

        for (int i_8 = 4; i_8 < 22;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        var_29 -= (min((2241389804 & 1777681492), (~255)));

                        for (int i_11 = 1; i_11 < 22;i_11 += 1)
                        {
                            var_30 = (min(var_30, 3635017505363494761));
                            var_31 = (min((arr_4 [i_8 - 3] [i_9 - 3]), ((47744 ? (arr_4 [i_8 + 2] [i_9 - 1]) : (arr_4 [i_8 + 2] [i_9 + 3])))));
                        }
                        var_32 = (max(var_32, (arr_26 [i_8] [i_8] [i_8])));
                    }
                }
            }
            var_33 = (max(var_33, (((5157 ? 27317 : 1)))));
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            arr_42 [i_13] [i_13] [i_13] [i_13] [i_13] &= 53877;
                            var_34 -= ((((min((arr_21 [i_1] [i_8 - 3] [i_12]), var_4))) ? (arr_37 [i_1] [i_8 + 1] [14] [i_14]) : (((((102 * (arr_39 [i_1] [i_8 - 3] [i_1] [i_13]))) << ((((-3366315223298988901 ? -19901 : 10543942935865527810)) - 18446744073709531692)))))));
                        }
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            arr_46 [9] [9] &= (arr_28 [i_1] [i_15] [i_15]);
            var_35 = (min(var_35, (arr_16 [i_15] [i_1])));
            var_36 = (max(var_36, (~4294967295)));
            var_37 *= (arr_28 [i_1] [i_1] [i_15]);
        }
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_38 = (arr_10 [i_16]);
        var_39 -= (arr_36 [i_16] [i_16] [i_16]);
    }
    var_40 = (min(var_40, ((max((var_15 ^ 31673), var_15)))));
    var_41 |= (((((!(((27315 ? 165 : var_2)))))) * (~0)));
    #pragma endscop
}
