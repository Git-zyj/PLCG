/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((var_1 ? (var_6 - var_7) : -var_4)), var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    var_13 = (arr_1 [i_0]);
                    arr_9 [i_0] [i_1] [i_2 + 2] = var_10;
                }
                arr_10 [i_1] = 49692167;
                arr_11 [1] = (((~0) ? -var_11 : (1 / 7691451613572869839)));
            }
        }
    }

    for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((-((var_10 ? (arr_12 [i_3 + 1]) : var_9))));

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_14 = (((((1 ? (-2147483647 - 1) : 1))) >= (((min((arr_13 [i_4] [i_4]), (arr_12 [i_4]))) / var_8))));
            var_15 = var_8;
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    {
                        var_16 = (max(var_16, var_0));
                        var_17 = (min(var_17, (!4294967287)));

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 13;i_7 += 1)
                        {
                            arr_25 [i_3 - 1] [i_3] [i_5] [i_6 - 1] [i_6 - 1] [i_5] [i_6] = (arr_23 [i_4] [i_4] [i_5] [i_6] [12]);
                            arr_26 [i_3] [i_3] [12] [i_5] [i_5] [i_3] = (7691451613572869817 ? (arr_16 [i_7] [4] [i_5]) : ((~(arr_23 [i_3] [i_3] [i_3] [i_3] [i_3]))));
                        }
                    }
                }
            }
            arr_27 [i_3] = ((min(((-(arr_17 [i_4])), (((1 != (arr_15 [i_3]))))))));
        }
        for (int i_8 = 2; i_8 < 13;i_8 += 1)
        {
            var_18 = (((((max(var_7, 0)))) ? var_4 : var_2));
            var_19 = (max(var_19, -var_9));
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {
                        var_20 = arr_22 [i_3] [i_9] [i_9] [i_10] [i_9] [i_11];
                        arr_37 [i_3] [i_9] [i_10] [i_9] = (~(arr_32 [i_3 + 2] [i_9] [i_10] [i_11]));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    {
                        arr_46 [i_12 - 1] [i_14] = var_0;
                        var_21 ^= (min((((arr_42 [4] [i_12 - 1] [i_12 + 3] [i_3 + 1]) | (arr_42 [i_3 + 2] [i_13] [i_12 + 2] [i_3 + 2]))), ((~(arr_44 [i_3] [i_3 - 1] [i_12] [i_12 + 2])))));
                        var_22 = (max((arr_17 [i_14]), (((var_8 == (((arr_40 [i_14] [i_13]) ? 46896 : (arr_13 [i_3 + 2] [i_13]))))))));
                    }
                }
            }
        }
    }
    for (int i_15 = 2; i_15 < 12;i_15 += 1) /* same iter space */
    {
        arr_50 [10] = (min(((~(((arr_18 [i_15 + 2] [i_15] [i_15] [i_15]) ? 1760061501 : (arr_47 [i_15]))))), ((max((((arr_32 [3] [3] [i_15 - 2] [i_15 - 2]) >= (arr_43 [i_15] [i_15] [i_15] [i_15]))), (((arr_18 [i_15] [i_15] [i_15] [i_15]) == (arr_18 [i_15] [i_15 + 1] [i_15] [i_15 + 2]))))))));
        var_23 = (max(65505, (arr_17 [10])));

        for (int i_16 = 1; i_16 < 10;i_16 += 1)
        {
            var_24 = arr_29 [i_15] [i_16] [i_16];
            var_25 = (min((arr_48 [i_16 + 4] [i_15 - 1]), (arr_48 [i_16 + 1] [i_15 - 1])));
        }
        var_26 = ((((-((3949 ? 1 : 65534))))) ? 7 : ((-(max((arr_17 [1]), var_4)))));
    }
    #pragma endscop
}
