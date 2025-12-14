/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = -2147352576;
                var_15 |= ((var_8 ? (((~(max(var_4, var_1))))) : (((arr_4 [i_0] [i_1]) ? ((var_13 ? var_0 : (arr_0 [i_0]))) : (arr_1 [i_0] [i_1])))));
                var_16 = min(((((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_1])))), (max((arr_1 [i_0] [i_1]), 2315509423)));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_10 [9] [i_2] [12] = (max((~16439), ((var_13 ? 4593671619917905920 : (arr_8 [i_0] [i_1] [i_0] [i_2])))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_17 = (4593671619917905920 ? 130816 : 0);
                        arr_13 [13] [i_2] [i_2] = var_3;
                        var_18 = var_10;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_19 = var_11;

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_20 -= ((var_7 ? (arr_7 [i_5] [15] [i_1] [i_0]) : ((-((var_9 ? var_4 : (arr_12 [7] [i_4])))))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_2] [i_4] [i_0] = ((-(max((((var_13 ? var_3 : -1092053504))), (min(var_2, (arr_0 [i_0])))))));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_21 = ((((var_7 ? ((max(2315509427, (arr_1 [i_4] [i_0])))) : ((var_11 ? 15905305622904830776 : var_12)))) % (((-(min(var_3, 1928021270)))))));
                            arr_23 [i_0] [i_1] [i_0] [i_6] [i_0] [i_6] |= (--0);
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_22 = var_9;
                            arr_26 [i_0] [i_2] [i_0] = min((((61922 ? (arr_6 [i_2]) : (arr_6 [i_0])))), ((var_13 ? 13853072453791645695 : (arr_6 [i_0]))));
                            var_23 = (((((-(!var_13)))) ? (arr_3 [i_0] [i_1]) : ((((min((arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_5))) ? 33553920 : var_2))));
                            var_24 = (min(var_24, ((max(((max((arr_17 [13] [1] [i_2] [6] [i_1] [i_0]), (arr_17 [14] [14] [i_1] [i_2] [i_4] [i_7])))), var_7)))));
                        }
                    }
                    for (int i_8 = 3; i_8 < 14;i_8 += 1)
                    {
                        var_25 = ((var_10 ? ((var_10 ? ((0 ? (arr_29 [i_0] [1] [i_0] [i_8]) : -1903154491)) : (((-53 ? (arr_1 [i_0] [i_2]) : var_3))))) : var_11));
                        arr_30 [i_2] [i_8] = ((((((((835776754 ? -61 : (arr_15 [6] [i_1] [i_1] [i_1])))) ? (!var_11) : (arr_20 [i_0] [i_1] [i_1] [12] [i_8 - 3])))) ? (!var_6) : ((127 ? (arr_25 [i_8] [4] [i_8] [i_8 - 1] [14] [6] [i_0]) : var_12))));
                        arr_31 [i_8 - 3] [i_2] [i_2] [i_8] = (max((((!(arr_3 [i_0] [i_8 - 3])))), (max(var_13, (max(0, var_3))))));
                    }
                }
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    arr_35 [i_9] [i_1] [i_1] [i_0] = ((((max((((102 ? var_2 : 8191))), ((var_12 ? (arr_15 [i_0] [6] [6] [i_9]) : 13093235588072263446))))) ? ((((!(arr_15 [i_0] [i_1] [i_9] [i_9]))))) : 3620705103161152969));
                    arr_36 [10] [i_1] [i_9 - 1] = (max((!var_9), (((var_10 ? var_7 : 0)))));
                    var_26 ^= var_11;
                }
            }
        }
    }
    var_27 = (max(var_27, ((max((((!(!var_8)))), (~0))))));
    var_28 = max(3123303552, (((!(((var_1 ? var_5 : 1)))))));
    #pragma endscop
}
