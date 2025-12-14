/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_1 [1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = -1082994925;
                                var_15 = (max(var_15, -37828));
                                arr_16 [i_4 + 2] [1] [1] [i_0] = ((37840 ? 37828 : 5209362566026888108));
                            }
                        }
                    }
                }
                var_16 = (min(var_16, (((~(arr_15 [3] [1] [i_0] [i_0] [i_0] [6]))))));
                var_17 = (10999352961121306978 >= -5209362566026888108);
            }
        }
    }

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                {
                    arr_27 [i_7] [0] [0] [i_5] |= (max(-2268544715574029316, 24));
                    var_18 = var_2;
                    arr_28 [i_5] [i_5] [1] [i_7] = 10999352961121306978;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {
                        arr_39 [i_10] [2] [2] [i_5] |= ((1 >= ((~(arr_21 [i_10] [19] [i_8])))));
                        arr_40 [i_5] [i_5] [i_5] [24] = (max((arr_17 [i_10]), (((((10999352961121306994 ? -5209362566026888109 : (arr_29 [i_8]))) < (arr_30 [i_5] [i_5] [i_5]))))));
                    }
                }
            }
        }
        var_19 = (((((arr_17 [i_5]) ? ((min(0, var_3))) : ((22365 ? var_7 : var_0)))) * 127));
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        arr_43 [i_11] = ((-1658603150771909409 ? 2849902063365741860 : 107));
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 8;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                {
                    var_20 = ((((min((min((arr_12 [i_11] [i_12] [i_13] [i_13]), 7447391112588244621)), 5547912606771090769))) ? (~53) : (arr_48 [i_11] [i_11] [i_13])));
                    var_21 = 9757645932827351066;
                }
            }
        }
        var_22 -= (((arr_17 [i_11]) * (((((arr_10 [i_11] [i_11] [i_11] [i_11]) < (arr_33 [i_11] [i_11] [i_11])))))));
        var_23 = -121;
    }
    var_24 = var_11;
    var_25 = ((max(((var_8 >> (var_1 + 3923423633844382288)), var_1))));
    var_26 = (max((min(-341793316, var_3)), (~68698490)));
    #pragma endscop
}
