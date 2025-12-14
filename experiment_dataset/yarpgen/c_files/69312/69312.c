/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = ((((max(1207903244, var_4))) / (max(((min(var_6, var_8))), var_0))));
    var_17 = (max(((var_11 ? (~11525455551619143745) : (((max(80, 80)))))), var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_18 = (((((arr_2 [i_1]) ? (arr_2 [i_2]) : (arr_2 [i_2])))) ? (((arr_2 [i_0]) ? 60665 : 91)) : ((82 ? var_3 : var_1)));
                            arr_12 [i_0] [i_2] = ((!((((arr_7 [i_0] [24] [i_0]) ^ (arr_7 [i_0] [i_1] [i_3]))))));
                        }
                    }
                }
                arr_13 [8] = (max((!1), ((((((arr_4 [i_0] [i_0] [i_1]) ? var_3 : var_8))) ? -22 : var_2))));

                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {

                    for (int i_5 = 3; i_5 < 23;i_5 += 1)
                    {
                        arr_21 [13] [i_1] [1] [i_1] = ((-(((arr_17 [i_5] [i_4 + 2] [i_0] [i_0]) >> (var_9 - 20586)))));
                        var_19 &= var_13;
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_20 = ((~(arr_9 [i_1] [i_6])));

                        for (int i_7 = 2; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            arr_27 [i_7] = ((-(arr_2 [i_4 + 4])));
                            arr_28 [i_0] [i_1] [i_4] [i_4] [i_7] [i_7] [i_0] = -979;
                            arr_29 [15] = (((arr_7 [i_0] [i_0] [i_0]) ? (arr_14 [i_4 + 4] [i_1] [i_7 + 2]) : -61203));
                            arr_30 [i_7] [i_7] [i_7] [i_7] [i_7] = 1207903244;
                        }
                        for (int i_8 = 2; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_21 = (((arr_20 [i_4 - 1] [i_4] [i_4 - 1] [i_8 + 2] [i_8 - 1]) ? var_10 : ((var_9 % (arr_17 [i_0] [i_4 + 4] [i_6] [1])))));
                            arr_33 [i_0] [i_1] [i_4] [i_6] [i_4] = (arr_3 [i_4]);
                            arr_34 [i_0] [i_1] [i_0] [i_6] = ((arr_15 [i_0] [i_1] [1]) ? (arr_15 [20] [i_1] [i_1]) : 45479);
                        }
                        for (int i_9 = 1; i_9 < 24;i_9 += 1)
                        {
                            arr_38 [i_1] = (!var_14);
                            arr_39 [i_0] [i_0] [i_6] [1] [i_0] [i_9] [i_9] = (arr_2 [i_9]);
                            arr_40 [i_0] [4] [15] [i_0] [i_9] [i_0] = -4870;
                        }
                        arr_41 [i_6] [15] [i_0] = (((arr_3 [i_1]) ^ (arr_3 [i_1])));
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        arr_45 [i_0] [i_0] [i_4] [i_10] = ((!((max((-22 % var_3), (max(-466648715, (arr_14 [i_0] [5] [10]))))))));
                        var_22 = ((((var_7 ? (max(var_2, 60666)) : (~1661500563))) == (((193 ? (((var_11 ? var_7 : 298361031))) : -4734738679275688282)))));
                        var_23 = (max(var_10, (((!17659990321896105926) ? ((max(var_4, (arr_3 [i_10])))) : ((min(-26319, 95)))))));
                        arr_46 [i_0] [i_4] [i_10] = (((((arr_18 [0] [i_4 + 4] [22] [i_0]) ? var_7 : (arr_18 [i_0] [i_4 + 4] [i_0] [i_10]))) != ((62 ? 1174060453 : -65))));
                    }
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        arr_49 [i_0] [i_1] [i_4] [i_1] [1] [i_0] &= var_1;
                        var_24 = ((((((~var_9) ? (~25719) : ((22 ? 10218 : var_13))))) ? ((((((var_5 ? (arr_31 [i_1] [9]) : var_9))) ? ((241959314 ? var_6 : (arr_22 [3] [i_0] [i_1] [i_4] [i_4] [18]))) : (arr_17 [14] [13] [i_4] [14])))) : 2479968149));
                        arr_50 [4] = (arr_5 [2]);
                    }
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        var_25 = var_7;
                        arr_53 [i_0] [i_0] [i_1] [i_4] [i_4] [2] = (max(var_2, ((max(107, 72)))));
                    }
                }
                for (int i_13 = 3; i_13 < 23;i_13 += 1)
                {
                    arr_57 [i_0] [i_1] [7] [i_13] = ((((~((1 / (arr_2 [i_13])))))) ? ((-1 | ((min(var_4, 251))))) : ((((arr_15 [i_0] [i_1] [i_0]) || 162))));
                    var_26 += (((~var_5) ? var_0 : (((min(83, var_8))))));
                }
                arr_58 [i_0] [i_0] = (!var_1);
            }
        }
    }
    #pragma endscop
}
