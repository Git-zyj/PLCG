/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_1 <= var_14);
    var_17 = (((var_6 - var_10) ? var_7 : (((((var_8 ? 57 : 186)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 &= -121;
                    var_19 = ((-((70 + (arr_4 [i_0] [i_1] [i_2 - 3] [i_1])))));
                    arr_6 [1] [10] [i_2 + 3] [i_2] &= ((((((var_14 ? var_15 : 4135634637151154313)))) ? (8191 > 0) : (arr_5 [i_0] [i_1] [i_2 - 2])));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_3] [i_0] |= (arr_5 [i_2] [i_2 + 3] [i_2 - 1]);
                        var_20 *= (arr_1 [i_3]);
                    }
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [3] = (i_0 % 2 == zero) ? (((var_12 << ((((((7124 * (arr_2 [i_0]))) + (arr_10 [1] [i_2 + 1] [i_1] [i_0]))) - 351672533))))) : (((var_12 << ((((((((7124 * (arr_2 [i_0]))) + (arr_10 [1] [i_2 + 1] [i_1] [i_0]))) - 351672533)) + 243840260)))));
                        arr_16 [i_0] = 1;
                    }
                    arr_17 [i_0] = 17026197643433056963;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 8;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 8;i_7 += 1)
                {
                    {
                        arr_28 [i_0] [i_5] [1] [6] [i_6] [i_0] &= (((((((arr_25 [11] [11] [i_6] [i_7 - 2]) * 0))) ? 184 : var_2)));
                        var_21 -= (((min((((arr_10 [i_0] [2] [1] [i_7]) ? (arr_19 [i_5 - 2]) : (arr_18 [i_7] [i_7]))), ((max((arr_22 [i_0] [i_0] [i_6] [i_7]), var_11)))))) ? ((((1 > 35) / var_14))) : (max((((arr_26 [i_0] [i_5 + 2] [i_6] [i_7 + 1]) * 0)), var_9)));
                        var_22 = ((-4135634637151154313 > (((((!73376165) > 184))))));
                    }
                }
            }
        }
        arr_29 [i_0] [i_0] = (max(((var_1 ? (!var_14) : (arr_2 [i_0]))), (arr_2 [i_0])));
    }
    #pragma endscop
}
