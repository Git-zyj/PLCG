/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 -= (37 & (arr_0 [i_0]));
        var_19 = (arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_2 + 1] [i_0] [i_0] = ((((max((arr_1 [i_2 + 1] [i_2 + 1]), 30))) ^ (((!1252411806) ? (arr_4 [i_1]) : 142))));
                    var_20 = min(((-(arr_1 [i_2 - 1] [i_2 + 1]))), 33);
                    var_21 *= (((((min((arr_3 [17] [17] [23]), (-32767 - 1))))) ? ((223 ? 1 : -25)) : (!1)));
                    var_22 = var_12;
                    var_23 = (max(var_23, ((max((arr_1 [i_1] [i_2 + 2]), (min(var_8, 62)))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_24 = var_11;
                        arr_18 [16] [i_4] [i_4] = ((!((min((arr_2 [i_3] [i_4] [i_5]), (arr_12 [i_5] [i_4 - 1]))))));
                        var_25 -= ((((max((!32767), 49777))) ? (((!(arr_12 [i_4 + 2] [i_4 + 2])))) : 5119));
                        var_26 = (min(var_26, (2628562142369769337 >= 126)));
                        var_27 -= (min(((max((arr_14 [8] [i_5 - 1] [1]), (arr_14 [i_5] [i_5 - 1] [i_5])))), (((arr_16 [i_3] [i_4 + 2] [i_5 + 1] [i_6] [i_6]) + var_0))));
                    }
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        var_28 ^= (arr_2 [3] [i_4 - 1] [3]);
                        var_29 = (arr_8 [i_4]);
                        var_30 ^= ((((((arr_16 [i_5 - 1] [i_5] [i_4 + 2] [i_4] [i_4]) >> (arr_16 [i_5 + 1] [1] [i_4 + 2] [1] [i_4 - 2])))) ? ((((arr_17 [21] [i_4 + 3] [i_3] [21]) > (arr_20 [i_5] [i_4 + 1] [i_4] [i_3])))) : ((((arr_20 [i_4 + 1] [i_4 - 2] [i_4 - 2] [2]) == (arr_16 [i_5 + 1] [i_4] [i_4 - 2] [8] [i_3]))))));
                    }
                    var_31 -= ((((max((arr_10 [i_4 - 2] [i_5 + 1]), (arr_10 [i_4 + 3] [i_5 + 1])))) ? ((((!(arr_10 [i_4 - 1] [i_5 + 1]))))) : (((arr_10 [i_4 - 2] [i_5 + 1]) ? (arr_10 [i_4 + 1] [i_5 + 1]) : 0))));
                }
            }
        }
        var_32 = (arr_9 [i_3]);
        var_33 = ((!(arr_17 [7] [5] [i_3] [7])));
    }
    var_34 = (max(var_15, var_6));
    var_35 = (min((max(var_5, 1929875308048162180)), -8162415));
    #pragma endscop
}
