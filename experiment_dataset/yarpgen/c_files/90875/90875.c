/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = 12587928418012121924;
                var_12 = min(var_6, (arr_5 [i_0] [i_0] [i_0]));
            }
        }
    }
    var_13 |= (((((((32045 ? var_10 : 12992))) ? var_2 : var_9)) <= (!var_0)));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                arr_13 [i_3] [i_3] [i_4 + 1] = ((((min((arr_12 [i_4 - 2] [i_4] [1] [i_4]), (arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4])))) % ((-((23 ? var_7 : -32043))))));
                arr_14 [i_3] = (((arr_6 [i_4 - 1]) ? (((arr_8 [i_4] [1]) * (((max((arr_10 [5]), (arr_0 [i_3]))))))) : ((((arr_10 [i_4 + 1]) | (arr_10 [i_4 + 1]))))));
            }
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                arr_17 [i_2] [i_3] [1] [i_5] = (arr_9 [i_5 + 2]);
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_14 &= ((((min((arr_22 [i_6 - 1] [i_6 - 1] [1] [1] [3]), (arr_18 [4] [i_6] [i_6 + 1] [i_6] [i_6] [i_6])))) ? ((~(arr_22 [i_6] [i_6 - 1] [i_6] [i_6] [i_6]))) : 2667987679));
                            arr_23 [i_2] [i_3] [0] [i_6] = ((((((-(arr_1 [i_3] [i_5]))) ? (arr_5 [i_2] [i_3] [4]) : var_0))));
                            arr_24 [i_2] [i_3] [i_2] [i_6] [i_3] [i_7] = (((((var_7 ? (arr_4 [i_2] [i_5 + 2]) : (arr_4 [i_2] [i_5 - 1])))) && var_1));
                            arr_25 [i_3] = (arr_20 [i_6 + 1] [i_3] [i_5]);
                            arr_26 [i_3] [i_6] [6] [i_3] = (((arr_3 [13] [i_2]) ? (arr_15 [i_2] [3] [i_2]) : ((-(arr_3 [9] [13])))));
                        }
                    }
                }
            }
            arr_27 [i_3] = (((arr_4 [i_2] [i_2]) * ((((arr_4 [i_2] [i_3]) ? (arr_12 [i_2] [i_2] [i_3] [i_3]) : (arr_12 [i_2] [i_3] [13] [i_2]))))));
        }
        for (int i_8 = 2; i_8 < 13;i_8 += 1)
        {
            var_15 = 8901261860159179647;
            var_16 |= ((+(((arr_28 [i_8 - 2] [i_8 + 1]) + (arr_28 [i_8 - 2] [i_8 - 1])))));
            var_17 = (((((arr_7 [i_2] [i_8 + 1]) && (arr_7 [i_2] [i_8 + 1]))) ? (arr_21 [i_8] [i_2] [i_8 + 1] [i_2] [i_8 + 1] [i_8 + 1]) : (((((arr_28 [i_8 - 1] [i_8 - 2]) <= (((var_4 << (var_2 - 125))))))))));
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
        {
            var_18 = ((+((max((arr_0 [12]), (max(55066, var_6)))))));
            arr_32 [i_2] [i_2] = ((((((((arr_28 [i_9] [i_9]) + (arr_4 [0] [i_9])))))) != (max(((((arr_8 [i_2] [5]) ? 24437 : 12))), (arr_6 [i_2])))));
            var_19 = 84;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            arr_44 [i_13] [1] [i_10] = (arr_22 [i_13] [i_12] [13] [i_2] [i_2]);
                            var_20 = (((arr_42 [i_11 - 1] [i_11 - 1] [i_11 - 1]) == (arr_42 [i_11 - 1] [i_11] [i_11 - 1])));
                        }
                    }
                }
            }
            arr_45 [5] = (((arr_29 [i_2] [i_10]) ^ (arr_39 [i_2])));
            /* LoopNest 3 */
            for (int i_14 = 3; i_14 < 10;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        {
                            var_21 = (arr_39 [i_16]);
                            arr_54 [i_15] [1] [i_15] = (arr_19 [i_15] [i_14] [i_14] [i_15] [i_10]);
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                for (int i_18 = 3; i_18 < 13;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 14;i_19 += 1)
                    {
                        {
                            var_22 += (arr_28 [i_18 - 3] [i_18 - 3]);
                            arr_63 [i_10] [1] = (((arr_29 [i_18 - 2] [i_18 + 1]) ? ((((((arr_52 [i_19] [1] [9]) + 2147483647)) >> (((arr_36 [i_2] [3] [i_2]) - 22273))))) : (arr_11 [i_18 + 1] [i_18 - 3])));
                        }
                    }
                }
            }
        }
        arr_64 [i_2] = (((arr_53 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_37 [11]) : (max((arr_8 [i_2] [i_2]), (arr_8 [i_2] [i_2])))));
    }
    #pragma endscop
}
