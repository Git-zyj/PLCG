/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (((var_12 >= (max(-329883956, (1 + 13))))))));
                                var_14 = (((!var_4) ? (((((((arr_4 [i_0] [i_1]) > var_11)) && ((((arr_13 [i_0 - 2] [i_0 - 2] [i_0 - 2] [4] [i_0 + 2] [i_0 + 1]) ? (arr_13 [i_4] [i_3] [i_0] [i_0] [i_0] [i_0]) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))) : (max(var_2, ((var_2 ? var_3 : 18446744073709551615))))));
                            }
                        }
                    }
                }
                var_15 = ((11423482655577824393 ? ((((arr_5 [i_0 + 2] [i_0 - 2]) + (((arr_1 [i_0] [i_0]) ? (arr_8 [i_0 - 2] [i_0 - 2] [i_0 + 2] [i_0 - 2]) : (arr_2 [i_0] [i_1])))))) : ((-(arr_13 [i_1] [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0])))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_23 [i_0] [1] [i_0] [i_0] [i_0] = (((((arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 1]) | 1)) / 109));
                            arr_24 [i_0] [i_0] [5] [i_6] [i_0 + 1] = ((((arr_14 [i_0 - 1] [i_0 + 1] [1] [i_0 - 1] [i_0]) ? (arr_22 [i_0 + 1] [i_1]) : 1)));
                            arr_25 [i_0] [i_1] [i_5] [i_5] = ((1 ? var_4 : (9411462367901109818 || -25678)));
                            var_16 = (max(((((arr_7 [i_6] [i_1] [i_5] [i_6]) || 69876237))), (((arr_15 [i_0 - 1] [i_0 - 1]) ? ((-4072876854116349034 ? (arr_13 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [11]) : var_3)) : (max(9035281705808441797, 65504))))));
                            arr_26 [i_0] [i_0] [i_1] [i_5] [i_5] [i_0] = ((((max(((-(arr_13 [i_0] [i_0] [i_1] [i_1] [i_5] [7]))), (arr_12 [i_0] [i_0 + 2])))) ? (((!-556484813) << (((var_1 + var_8) - 31148)))) : (((((-(arr_5 [i_0 + 1] [i_0 + 1])))) ? -1497896705 : 13342039508088537988))));
                        }
                    }
                }
            }
        }
    }
    var_17 = var_10;
    #pragma endscop
}
