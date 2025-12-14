/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 1;
        arr_4 [i_0] = (((var_7 - (arr_2 [2]))));
        arr_5 [i_0] [1] = (((arr_1 [i_0]) - (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_20 = (max(var_20, ((((arr_8 [1]) && ((!(arr_8 [8]))))))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_21 = (min(var_21, (arr_6 [6])));
            arr_11 [i_1] [i_2] = var_7;
        }
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            arr_15 [i_3 + 1] [i_3 - 4] [5] = var_7;
            var_22 = (1486525908 || -1);
        }
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            arr_18 [i_4 + 1] [i_4 + 1] [i_4 - 1] &= (var_18 / 9229337863790967027);

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                arr_22 [i_1] [20] [14] = (arr_13 [i_1] [3] [1]);
                arr_23 [i_1] [i_4 + 1] [i_5] = (~-9);

                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_23 *= (arr_16 [i_6] [8] [i_4 - 1]);
                    var_24 = (((0 >> (4294967295 - 4294967276))));

                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        arr_29 [12] [i_5] [i_5] [i_4 + 1] [14] [4] [i_6] |= (((arr_6 [i_4 + 1]) * (9217406209918584576 * 66)));
                        arr_30 [i_4 + 1] [i_5] = (((arr_13 [13] [3] [i_7 + 3]) * (arr_9 [9] [17])));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_25 = ((9229337863790967024 * (((arr_10 [1] [i_1]) / 9217406209918584574))));
                        arr_34 [15] [i_4 + 1] [3] [20] [i_8] = var_14;
                    }
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_26 = ((((((arr_21 [i_1] [i_6]) ^ var_7))) ? (((arr_20 [1] [5] [1]) ? var_19 : (arr_20 [i_4 + 1] [16] [i_6]))) : (((var_13 >> (9217406209918584580 - 9217406209918584580))))));
                        var_27 = (max(var_27, -65519));
                    }
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        arr_40 [10] [i_4 - 1] [i_5] [15] [20] [i_10 + 1] [i_1] |= (((!var_7) != var_15));
                        var_28 = (arr_26 [i_1] [1] [20] [i_10 + 3]);
                        var_29 ^= (~-6);
                    }
                    arr_41 [1] [i_4 - 1] [i_5] [i_6] |= (arr_6 [6]);
                }
            }
            var_30 = (max(var_30, (((((var_5 || (arr_38 [i_1] [9] [4] [i_4 + 1] [i_4 - 1]))) ? (arr_6 [i_4 - 1]) : (!65408))))));
        }
        for (int i_11 = 2; i_11 < 20;i_11 += 1)
        {
            var_31 = ((-(arr_43 [i_1] [i_11 - 1] [i_11])));
            var_32 = (arr_31 [i_11 - 1] [i_11 + 1] [i_11 - 2] [i_1] [12] [i_1]);
            var_33 = (!-2006969258);
            var_34 = (max(var_34, ((((arr_37 [i_1] [i_1] [i_11 - 2] [i_11 + 1]) / (arr_10 [12] [11]))))));
        }
        var_35 = (min(var_35, var_13));
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 22;i_12 += 1)
    {
        arr_46 [16] |= (((var_19 / 914055218878968323) * 65414));
        arr_47 [i_12] = ((~(arr_45 [i_12])));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 0;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {
                {
                    var_36 += 9217406209918584580;
                    var_37 = var_9;
                }
            }
        }
    }
    var_38 = ((1 && (((255 ? (!-1) : (max(-21, 1486525908)))))));
    var_39 ^= ((-(((max(37056, var_8))))));
    #pragma endscop
}
