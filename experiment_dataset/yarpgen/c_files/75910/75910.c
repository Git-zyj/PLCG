/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = var_6;
                var_18 = ((max(11, 2962545840)));
                var_19 = (min((min((arr_2 [i_0] [i_1] [i_1]), var_2)), (max(1332421455, 1332421456))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_20 -= ((0 ? ((~(arr_6 [i_2]))) : var_11));
        var_21 = ((+((60683 ? (arr_6 [i_2]) : (arr_6 [i_2])))));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_22 = (((!(~65525))) ? ((-(arr_6 [i_3]))) : (arr_4 [i_3] [i_3]));
        arr_9 [i_3] [i_3] = (max((min(((min((arr_8 [i_3]), 11))), (max(1332421457, 1152920954851033088)))), (~var_2)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_16 [i_5] [i_3] [i_3] [i_3] = ((-((max((max(var_1, 12)), var_3)))));

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_23 = ((!(((((max(194, var_11))) ? (max(2962545819, 0)) : -1146804327)))));
                        var_24 = (max((max(var_2, (0 - var_4))), var_7));
                        var_25 = ((min((max(1023, 65527), ((((arr_4 [i_3] [i_4]) + var_2)))))));

                        for (int i_7 = 2; i_7 < 15;i_7 += 1)
                        {
                            var_26 |= ((!(arr_5 [i_3 + 2] [11])));
                            arr_24 [i_3] [i_4] [i_5] [i_6] [12] [i_4] = -var_6;
                            var_27 = (max(var_27, ((max(-var_5, (arr_8 [i_6]))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        arr_28 [i_3] [i_3] [i_3] [i_3] [i_3] [11] = var_12;
                        var_28 += var_0;
                        arr_29 [i_3 + 2] [i_3] [i_5] [i_3] = 6535224974795190948;
                        var_29 = ((1694669454 ? 1588435554 : 16));
                    }
                    arr_30 [i_3] [i_3] [i_4] [i_3] = (max((max((arr_23 [i_3]), (~99))), (((((max(var_0, -8827))) >> (var_11 - 1748951436))))));
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 15;i_9 += 1) /* same iter space */
    {
        var_30 = 16;
        arr_35 [i_9] = (min(1332421457, 16));
        arr_36 [i_9] = (min(var_14, (min(((1649776391 ^ (arr_11 [i_9]))), (arr_31 [i_9 + 3] [i_9 + 3])))));
        var_31 += (3011456676 || -7487657878297072037);
    }
    var_32 |= var_5;

    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                {
                    var_33 = (max((arr_38 [i_11 + 3]), ((max(2962545840, var_7)))));
                    arr_45 [i_10] [i_11] [4] = 3011456676;
                    var_34 = (arr_39 [i_11]);
                    arr_46 [i_10] [i_11] [i_12] = ((-(max((arr_41 [i_10]), (min((arr_44 [i_10] [20] [20] [i_10]), var_12))))));
                }
            }
        }

        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            arr_51 [i_10] [i_13] = (max((arr_38 [i_10]), 2962545838));
            var_35 = (max(55738, 38416));
        }
    }
    #pragma endscop
}
