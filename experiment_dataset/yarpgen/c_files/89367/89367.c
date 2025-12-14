/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_4));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 - 2] [i_4] [0] [i_3] [i_0] [i_0 - 2] = (((((((((arr_6 [i_3]) ? var_13 : (arr_8 [i_0])))) ? (((arr_9 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0]) ? (arr_10 [i_0 - 1] [i_1] [i_2] [i_3] [i_4]) : (arr_6 [i_2]))) : (((57834 ? (arr_1 [9] [i_1]) : 101)))))) ? (101 & var_3) : (((var_0 ^ (arr_1 [i_0 - 2] [i_0 - 1]))))));
                                var_18 *= (((arr_8 [i_2]) != ((~(arr_7 [i_0 - 2] [i_3])))));
                                var_19 = 30942;
                            }
                        }
                    }
                    var_20 = (((((~(min((arr_1 [i_0] [i_1]), var_13))))) ? (((((min(var_16, var_1))) | ((var_14 ? 34593 : -102))))) : (arr_2 [8])));
                    var_21 = 21514;
                    var_22 = ((16742528820960407091 ? 101 : -7948203431569208028));
                }
            }
        }
    }
    var_23 = var_1;

    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_24 = (((arr_22 [14] [i_6] [i_7] [i_6 + 1]) < (min((arr_22 [i_5] [i_6] [i_7] [i_6 + 4]), (arr_22 [i_5] [i_6 + 4] [i_7] [i_6 + 1])))));
                        var_25 = (max(var_25, ((min(((((((87482749 ? (arr_14 [i_7]) : (arr_15 [i_5])))) || (((arr_14 [i_6]) && (arr_15 [i_5])))))), (arr_21 [i_6 + 1] [i_6 + 4] [i_7 - 1] [i_7 - 1]))))));
                    }

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_26 = (min(var_26, (((((max((arr_17 [i_7 + 1]), var_12))) ? ((~(min(16840999151109411654, (arr_16 [i_5]))))) : (arr_26 [i_6 + 4] [i_6 + 3] [i_6] [i_6]))))));
                        arr_27 [i_5] [i_9] [i_7 - 2] [i_9] |= (((((arr_16 [i_5]) ? var_15 : (arr_24 [i_9] [i_7 - 2] [i_6 + 1] [i_5]))) % ((((arr_24 [i_9] [i_7 - 1] [14] [i_5]) ? (arr_19 [i_5]) : (arr_26 [11] [i_6 - 2] [i_6] [i_6]))))));
                        var_27 = ((-2035905503 ? 30943 : 30922));
                        var_28 = (max(var_28, (((((((arr_14 [i_6]) ^ var_1))) >> (((max(var_16, (arr_17 [i_6 - 2]))) - 744105041)))))));
                        var_29 &= (((((~(min(2089863367, var_5))))) ? ((~(min((arr_17 [i_5]), var_8)))) : ((((arr_22 [i_5] [i_6] [i_6 + 4] [i_7]) ? (arr_22 [i_9] [i_6 - 2] [i_6 - 1] [i_9]) : (arr_22 [i_5] [i_6] [i_6 - 2] [i_9]))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 2; i_10 < 18;i_10 += 1) /* same iter space */
                    {
                        arr_31 [i_5] [i_7] [i_5] &= (var_6 / 255);
                        var_30 -= (((arr_24 [i_10 - 2] [i_7 + 1] [i_7] [i_7]) ? (arr_26 [i_10 - 2] [i_7 + 1] [i_7] [i_7]) : var_16));
                        var_31 = (max(var_31, (((var_6 ? (arr_24 [i_10 + 1] [i_6 + 1] [i_5] [i_10]) : (arr_24 [i_10 - 2] [i_6 - 1] [i_5] [i_10]))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 18;i_11 += 1) /* same iter space */
                    {
                        var_32 = ((~(arr_29 [i_7] [i_7 - 1] [i_7 + 2] [i_7] [i_7])));
                        var_33 = ((var_14 ? (arr_26 [i_11 - 1] [10] [i_7] [i_7 + 1]) : (arr_23 [i_11 - 1] [i_6] [i_7] [i_7 + 2] [i_6])));
                    }
                    for (int i_12 = 2; i_12 < 18;i_12 += 1) /* same iter space */
                    {
                        var_34 = (((arr_24 [i_5] [i_6] [i_7 - 1] [i_12]) ? (arr_24 [i_5] [i_5] [i_5] [i_5]) : (min((arr_24 [i_5] [i_6] [4] [i_12 - 1]), (arr_30 [i_12] [i_7 - 2] [i_6] [16])))));
                        arr_36 [i_5] [i_6 - 2] [i_5] [i_12] [i_5] [i_7] = ((-var_0 ? (arr_29 [i_5] [4] [i_6] [i_7] [i_12 - 1]) : ((var_11 ? (arr_32 [i_7] [i_6 + 4]) : (arr_32 [i_7] [i_6 + 4])))));
                    }
                }
            }
        }
        var_35 &= ((((((((arr_16 [i_5]) + 2147483647)) >> (((arr_20 [i_5] [6] [i_5]) - 8476689228152684382))))) ? (4404917391473826581 + 4294967295) : (min((((arr_16 [9]) ? -63 : 8388607)), (arr_28 [i_5] [i_5] [i_5] [i_5])))));
    }
    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
    {
        var_36 -= ((~(arr_32 [i_13] [i_13])));
        var_37 &= ((~((8554423300581497953 ? (arr_37 [1]) : (arr_30 [i_13] [i_13] [i_13] [i_13])))));
    }
    #pragma endscop
}
