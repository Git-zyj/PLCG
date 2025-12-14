/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [8] [i_0] [i_0] = 1237168363;

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_8 [i_0] [i_2] [i_1] [i_2] = (((min((arr_1 [i_2]), (arr_5 [i_0] [i_1] [1]))) + (arr_6 [i_0] [i_0] [1])));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = (((arr_3 [i_2]) ? (arr_7 [i_0] [2]) : 3057798932));
                    arr_10 [i_2] [i_1] [i_1] [11] = (((~-125) ? (((((var_10 ? var_5 : 1071621564))) ? (((arr_0 [7]) | 0)) : ((var_0 ? 61015 : 125)))) : (((((4294967295 && (arr_2 [i_1] [i_2]))) && var_10)))));
                }
                arr_11 [i_1] [12] [i_1] = (((((((-2595716157477567396 ? 2032 : (arr_0 [i_0]))) % (((0 || (arr_5 [i_0] [i_1] [i_1]))))))) ? ((((!(arr_5 [i_0] [i_1] [i_1]))))) : (max(1237168342, ((max((arr_2 [i_0] [11]), (arr_6 [i_0] [i_1] [i_1]))))))));
            }
        }
    }
    var_14 ^= var_10;

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_15 = ((+((((((arr_0 [14]) ? (arr_0 [6]) : (arr_23 [i_3] [3] [i_4] [i_5] [i_5] [i_5] [i_7])))) ? ((min((arr_25 [i_3] [i_5] [i_6] [i_5] [i_6] [i_7] [i_5]), 1870066233))) : (((arr_22 [i_3] [i_4] [i_5] [i_7]) ? (arr_19 [i_4]) : 1237168363))))));
                                var_16 = (min(var_16, (((((max(var_3, (arr_19 [i_3])))) || -111)))));
                            }
                        }
                    }
                    var_17 ^= ((min(142, var_8)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    var_18 = (min(var_18, (((-((((arr_17 [3] [i_8]) > (arr_17 [i_3] [i_8])))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                arr_39 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = (((((((98 ? 65535 : 1))) ? (((!(arr_2 [11] [i_3])))) : 33426)) > (((!(arr_23 [i_3] [i_3] [i_3] [10] [i_3] [i_3] [i_3]))))));
                                arr_40 [i_10] [i_10] [i_9] [i_10] [i_8] [i_10] = ((((((var_5 || (arr_35 [10] [i_11] [i_10] [i_10])))) > (((arr_24 [i_3] [i_8] [i_9] [i_10] [i_9]) ? var_3 : (arr_1 [i_3]))))));
                            }
                        }
                    }
                }
            }
        }
        var_19 -= (min(((min(482210709, (arr_1 [i_3])))), (arr_5 [i_3] [i_3] [i_3])));
        arr_41 [i_3] = (-(!var_4));
    }
    #pragma endscop
}
