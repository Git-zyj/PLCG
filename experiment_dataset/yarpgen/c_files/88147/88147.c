/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88147
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

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_11 += ((+(((arr_13 [i_4] [i_4 + 3] [i_3] [i_3] [i_4 - 1] [i_3]) / ((((arr_7 [i_0] [i_1] [16] [i_4]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_3 [i_0]))))))));
                                var_12 = (arr_10 [i_2] [i_2 - 1] [i_2 + 1] [i_4 + 2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_13 += (((((arr_18 [i_2] [i_2] [i_2 + 1] [i_5 - 1] [i_5] [i_5] [i_5 + 2]) != (arr_7 [i_1] [i_1] [i_2 + 1] [i_5 - 1]))) ? 175024204 : (!7474)));
                                var_14 = ((((((arr_7 [i_5 - 2] [i_5 + 2] [i_5] [i_5 + 1]) / (arr_7 [i_5 + 2] [i_5 - 2] [i_5] [i_5 - 2])))) ? (((((-9030144940793177755 ? 29445 : -70))) ? (arr_4 [i_5 - 2] [i_5 - 1]) : (arr_9 [i_5] [i_5 + 2] [i_5] [i_5 + 1]))) : ((((arr_7 [i_2 - 1] [i_2 + 1] [i_2] [i_5 - 1]) || (arr_18 [i_0] [i_5] [i_2] [i_0] [i_6] [i_2] [i_2]))))));
                            }
                        }
                    }
                    var_15 = ((((((arr_16 [i_1] [i_2 + 1] [i_2 + 1] [i_1] [i_2]) ? 92 : (arr_16 [i_2] [i_2 + 1] [i_2] [i_2 - 1] [i_2])))) ? (((arr_10 [i_2] [1] [i_2 - 1] [i_1]) ? (arr_9 [i_2 - 1] [i_0] [i_2] [9]) : (arr_9 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_0]))) : (((arr_17 [i_0] [i_0] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1]) ? (arr_17 [i_1] [i_1] [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2 + 1]) : (arr_17 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_0] [i_2] [i_2 + 1])))));
                }
                arr_19 [i_1] = (((~29445) ? (((~(arr_9 [i_1] [i_1] [i_0] [i_0])))) : (((arr_12 [i_1] [13] [i_1] [i_0] [i_0] [i_0]) ? (arr_0 [i_0] [i_1]) : (arr_2 [i_1] [i_0])))));
                arr_20 [i_0] [i_0] [i_0] = (((arr_0 [i_0] [i_1]) ? ((-(arr_0 [i_0] [i_1]))) : (arr_0 [i_0] [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            {
                var_16 = (-70 ? -70 : 65535);

                /* vectorizable */
                for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
                {
                    arr_30 [i_7] = (arr_10 [i_7] [i_8] [i_7 - 1] [i_7]);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_17 = (~69);
                                arr_36 [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 1] = ((!(arr_13 [i_11 - 1] [i_10] [i_7] [i_7] [i_10] [i_9])));
                            }
                        }
                    }
                    var_18 -= (arr_6 [i_7 - 1]);
                }
                for (int i_12 = 1; i_12 < 17;i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            {
                                arr_47 [i_7] [i_8] [i_13] [i_7] = ((-(arr_26 [i_8] [i_12 + 1] [i_7])));
                                var_19 = ((((-(arr_44 [i_12 - 1] [i_12] [i_12 + 1] [i_12 + 1]))) - (arr_44 [1] [i_12 + 1] [i_12 - 1] [i_12])));
                                arr_48 [i_7] [i_14] [i_7] [11] [7] = (((((((arr_14 [i_7] [i_12] [i_14]) - (arr_29 [i_7])))) ? (arr_3 [3]) : (arr_39 [i_12 - 1] [i_12 - 1] [i_13] [i_13]))));
                            }
                        }
                    }
                    var_20 = ((!(arr_5 [i_7 - 1])));
                    var_21 = (min(var_21, (81 | 21358)));
                }
            }
        }
    }
    var_22 = var_8;
    var_23 &= var_10;
    var_24 = var_9;
    #pragma endscop
}
