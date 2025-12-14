/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = var_9;
                    var_12 ^= (min((!-601194135), ((var_5 ? var_4 : (0 & var_3)))));
                }
            }
        }
        var_13 = (arr_6 [i_0 + 1]);
        var_14 = (((arr_3 [i_0] [i_0]) ? (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (((arr_1 [i_0] [i_0 - 2]) ? var_4 : ((var_10 ? 0 : var_8))))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    {
                        var_15 = 1;
                        arr_17 [i_0] [i_0] [i_3] [i_4] [i_0] [i_5 - 1] = 601194135;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_33 [i_6] = var_1;
                                arr_34 [i_7 - 3] [i_9 - 2] [i_6] [i_7 - 3] [i_6] = (~var_3);
                                arr_35 [i_6] [i_7 - 1] [i_8] [i_9 + 1] [i_6] = (arr_24 [i_6] [i_10]);
                            }
                        }
                    }
                    arr_36 [i_6] [i_6] [i_8] [i_6] = 0;
                    var_16 = ((((((arr_19 [i_6]) ? (arr_19 [i_6]) : -601194135))) ? (arr_27 [i_6] [i_8] [i_6] [i_6]) : (max(((var_7 ? -601194135 : var_9)), -var_7))));
                    arr_37 [i_6] [i_6] [i_6] = ((var_8 ? (((var_4 * ((14378632954553414488 ? var_8 : var_3))))) : (min((((0 ? -601194135 : (arr_30 [i_6] [i_6] [i_6] [i_6] [i_8] [i_6])))), ((var_8 ? 128 : var_6))))));
                    var_17 = 6629850930681967517;
                }
            }
        }
        arr_38 [i_6] = 127;
    }
    var_18 = (~var_7);
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            {
                arr_44 [i_11] [i_11] = ((~((((arr_43 [i_11]) && var_1)))));
                var_19 -= (-(arr_40 [i_11]));
                var_20 = (!var_9);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 0;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            arr_50 [i_13] = ((34359738304 ? ((var_6 ? (arr_41 [i_11]) : (arr_40 [i_12]))) : (((arr_40 [i_13 + 1]) ^ var_2))));
                            arr_51 [i_11] [i_11] [i_11] [i_11] [i_12] [i_14] &= (((arr_41 [i_11]) ? (max((((var_0 ? (arr_47 [i_12] [i_11] [i_11]) : -351230862))), 4068111119156137128)) : (((((min(18446744039349813312, -7438962254344488331))) ? ((min(125, (arr_45 [i_14])))) : 4025493280)))));
                            var_21 = (min(var_21, (((((min(var_7, (arr_43 [i_13 + 1])))) ? var_0 : (arr_43 [i_13 + 1]))))));
                            var_22 = ((-(((((var_5 ? (arr_47 [i_13 + 1] [i_13] [i_13]) : 1534339940))) ? var_10 : var_1))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
