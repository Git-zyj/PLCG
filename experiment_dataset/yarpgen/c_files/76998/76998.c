/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(var_7, ((-5003 ? 97018093 : var_12))))) ? var_12 : var_5));
    var_17 = (max(var_17, ((min(((var_10 ? (min(5012, var_11)) : -26530)), ((~(min(-4998, 753197143)))))))));
    var_18 -= ((((~(~var_0)))) ? var_2 : var_4);
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = ((max(var_5, (arr_3 [i_0] [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] = (((5017 < (arr_7 [9] [i_2 + 2] [9] [11]))));
                                var_21 = ((((((arr_7 [i_3] [i_3 - 1] [i_3] [1]) ? (arr_7 [4] [i_3 - 1] [i_3 - 2] [i_1]) : (arr_7 [i_4] [i_3 + 1] [5] [i_1])))) ? 3023459210024442898 : (((arr_7 [i_3] [i_3 - 1] [0] [0]) ? (arr_7 [8] [i_3 - 2] [i_1] [12]) : (arr_7 [i_3] [i_3 - 1] [6] [1])))));
                                arr_14 [3] [2] [i_2] [0] [i_2] [1] [6] = var_11;
                                var_22 = (((274877382656 ? -4999 : -753197129)));
                                var_23 = (max((((arr_11 [1] [i_1] [0] [i_3] [i_2 + 3] [6]) ? (arr_11 [i_0] [1] [i_2] [i_3 + 1] [i_2 + 2] [i_1]) : var_7)), ((((((arr_11 [i_0] [i_1] [i_2] [1] [11] [i_4]) ? var_9 : (arr_9 [i_4] [i_3 - 1] [i_2] [5]))) >= (((min(4, (arr_11 [i_0] [5] [4] [i_2] [i_3] [12]))))))))));
                            }
                        }
                    }
                }
                arr_15 [6] [i_1] [4] = (((((13 ? -1956 : -var_13))) ? ((5008 ? (arr_12 [1] [i_1] [i_0] [i_0] [i_0]) : (arr_5 [i_1] [i_0]))) : (arr_1 [i_0])));
                arr_16 [i_0] [11] = (min((max(-1, (arr_6 [i_1] [6] [i_0] [i_0]))), (arr_10 [i_0] [i_0] [i_1] [i_1] [i_1])));
            }
        }
    }
    #pragma endscop
}
