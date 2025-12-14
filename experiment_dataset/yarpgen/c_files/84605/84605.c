/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 = ((48837 ? 1 : 1551181381));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] = (arr_9 [i_0] [1] [1] [i_3]);
                            var_12 = (max(var_12, (((!(1 >= 1551181400))))));
                        }
                        arr_14 [i_0] [i_3] = (!0);
                        var_13 *= ((~(((0 || 329768215181586627) ? var_3 : (((arr_3 [i_0]) ? (arr_7 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3]) : 2585227315))))));
                        var_14 ^= 6880907502204670564;
                        arr_15 [i_3] [i_1] [i_3] [i_1] [i_3] = (((1798963325664281689 || 2047627208) && 1501951880044391110));
                    }
                    for (int i_5 = 2; i_5 < 15;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_2] [i_5] [i_6] = ((((max((arr_12 [i_1] [i_5 - 2] [i_5 + 1] [i_5 - 1] [i_1] [i_1] [i_1]), 1551181389))) ? (-18 < -1224305402) : (((((1 ? 2585227315 : 3500598772))) ? 511 : (arr_2 [i_0] [i_0] [i_0])))));
                            var_15 = (arr_4 [i_0] [i_1] [i_0]);
                        }
                        var_16 = (max((((-(arr_10 [i_5] [i_1] [i_1] [i_5])))), (max((arr_4 [i_0] [i_2] [i_5]), (var_6 ^ 2585227330)))));

                        for (int i_7 = 3; i_7 < 15;i_7 += 1)
                        {
                            var_17 ^= ((((max(var_8, (arr_10 [i_7 - 2] [i_0] [i_0] [i_5 + 1])))) ? (max(121, (1203779923 | 1))) : var_1));
                            arr_24 [i_7] [i_2] [i_5] [i_7] = (arr_10 [i_0] [i_2] [i_7] [i_7]);
                            var_18 = (max(1, 91));
                            arr_25 [i_0] [i_7] [i_1] [i_2] [2] [i_5] [i_2] = (((arr_12 [i_7 - 3] [i_7 - 3] [i_7 - 3] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 2]) ? 127 : (max((max((arr_18 [i_2]), (arr_18 [i_7]))), (arr_7 [i_7] [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_7 - 3] [8])))));
                        }
                    }
                    for (int i_8 = 2; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        var_19 = (!(arr_3 [i_0]));
                        var_20 = (((((-(arr_23 [i_8] [i_8] [i_8])))) ? (arr_27 [i_8] [i_8] [i_8 + 1] [5]) : 1));
                    }
                    var_21 = (max(var_21, (arr_5 [0] [1] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
