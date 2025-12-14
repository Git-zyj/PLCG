/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (((((var_2 ? var_16 : var_12))) ? var_5 : var_11));
    var_19 += (((((((var_12 ? var_9 : var_8))) ^ (max(4, var_11))))) ? (max(var_6, var_16)) : ((((((var_6 ? var_17 : 0)) > var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] |= 67;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_20 &= (((!2860188517062535426) || ((!(arr_8 [i_1] [i_1] [i_1 - 2])))));
                            var_21 = min((min((arr_8 [i_1] [i_1 - 2] [i_2 - 2]), (arr_8 [i_1] [i_1 - 2] [i_2 - 2]))), 18);
                            arr_12 [i_0] [i_1] [10] [i_0] &= (((arr_1 [i_0]) != (((var_4 < ((((!(arr_10 [i_3] [i_1] [i_2] [i_3]))))))))));
                            var_22 = (((((((min(18446744073709551615, (arr_10 [i_0] [i_1 - 2] [i_2] [i_1 - 2])))) ? (max((arr_3 [i_1] [i_2] [i_3]), 4294967277)) : (7 != -52)))) ? ((((((((!(arr_3 [i_3] [i_1 + 1] [11]))))) >= ((var_14 ? 1566546217188758473 : var_3)))))) : (max((64 | var_11), (((arr_10 [i_0] [i_1] [i_1] [i_3]) ? (arr_11 [i_0] [i_0] [i_0] [7]) : 3))))));
                        }
                    }
                }

                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    arr_15 [i_0] [i_1 - 1] [i_1] [i_0] = (((((arr_7 [4] [i_4] [4]) ? var_10 : (arr_2 [i_1])))));
                    arr_16 [i_0] [i_1] [i_4] [i_0] = (arr_0 [i_1]);
                }
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    arr_19 [i_5] [i_1] [i_5 - 1] = ((((((arr_3 [i_0] [i_1] [i_5]) ? (max(var_16, var_10)) : (arr_13 [i_1 - 2] [i_1 - 2] [i_5 + 1])))) ? (((((45 ? (arr_2 [i_0]) : (arr_13 [i_0] [i_1 - 2] [5]))) ^ 1566546217188758461))) : ((max(6, 137)))));
                    arr_20 [i_5] [i_5] [i_1 - 1] = ((((-12 ? (arr_18 [10] [i_1] [i_1] [10]) : (arr_1 [i_0])))) ? (((((126 ? (arr_18 [i_5 + 1] [i_0] [i_1] [i_0]) : var_11))) ? ((((!(arr_9 [i_5]))))) : (arr_4 [i_1 + 1] [i_0]))) : (((((18446744073709551613 ? 54147 : 58250)) | (arr_2 [i_0])))));
                }
                arr_21 [i_1 - 1] [i_0] [i_0] |= ((!(((((((arr_4 [i_0] [i_0]) >> (((arr_4 [i_0] [i_0]) - 534364147))))) ? ((min(20, 113))) : ((((arr_14 [i_0] [i_1] [i_1]) != 53394))))))));
            }
        }
    }
    #pragma endscop
}
