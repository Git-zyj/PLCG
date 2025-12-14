/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = var_7;
                                arr_13 [9] [9] [3] [3] [3] = ((((arr_10 [i_4 - 1] [i_4 - 2] [i_4 - 2] [i_4 - 2] [5]) ? (arr_10 [i_4 + 3] [i_4 - 1] [13] [i_4 + 3] [i_4 + 3]) : (arr_10 [i_4 + 1] [i_4 - 1] [i_4 + 1] [20] [19]))) & (!var_3));
                                arr_14 [i_2] [18] [18] = -1;
                                var_15 = (min(1, -1));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_0] [1] = ((0 ? ((-1 ? 1 : (-127 - 1))) : -15));
                    var_16 = ((4683244007476581591 ? (arr_12 [6] [0] [6] [6] [6] [6] [6]) : 18));
                }
            }
        }
    }
    var_17 &= ((((18446744073709551615 & -13) == (var_2 > var_12))) ? var_3 : ((2 ? (!9106918249092710600) : var_10)));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            {
                arr_22 [i_5] = (((((((arr_20 [6]) ? (arr_4 [i_5] [i_5] [i_5]) : (arr_9 [17] [17] [9] [12]))))) ? (arr_19 [i_5 + 2]) : (arr_2 [i_5 + 2])));
                arr_23 [i_5] = ((var_0 ^ (1 & 1968334046)));
            }
        }
    }
    var_18 = (((((((!var_12) < (~var_0))))) != -1));
    #pragma endscop
}
