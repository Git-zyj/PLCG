/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((min(18446744073709551609, 0)) - (!var_5)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = (max((arr_5 [i_0 - 1] [i_0 - 1]), (arr_6 [i_0] [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_0] [i_0] = ((!(!var_9)));
                                var_14 = (i_0 % 2 == 0) ? ((((((((arr_9 [i_0] [i_3] [i_3 - 1] [i_3 + 3] [i_3 + 2] [i_3] [i_3]) ? (arr_9 [i_0] [12] [i_3 + 2] [i_3] [i_3 + 3] [i_3] [i_3]) : (arr_9 [i_0] [i_3] [i_3 + 2] [2] [i_3 + 1] [13] [20]))) + 2147483647)) >> (((((arr_9 [i_0] [2] [i_3 + 1] [2] [i_3 + 3] [i_3] [i_3]) ? (arr_9 [i_0] [20] [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 2] [i_3]) : (arr_6 [i_3] [i_3] [i_3 + 2] [i_3 + 1]))) - 18446744073709550839))))) : ((((((((arr_9 [i_0] [i_3] [i_3 - 1] [i_3 + 3] [i_3 + 2] [i_3] [i_3]) ? (arr_9 [i_0] [12] [i_3 + 2] [i_3] [i_3 + 3] [i_3] [i_3]) : (arr_9 [i_0] [i_3] [i_3 + 2] [2] [i_3 + 1] [13] [20]))) + 2147483647)) >> (((((((arr_9 [i_0] [2] [i_3 + 1] [2] [i_3 + 3] [i_3] [i_3]) ? (arr_9 [i_0] [20] [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 2] [i_3]) : (arr_6 [i_3] [i_3] [i_3 + 2] [i_3 + 1]))) - 18446744073709550839)) - 18446744073709525572)))));
                                var_15 = ((((((((arr_1 [14]) || var_0))) << (arr_10 [i_0] [i_1] [i_2] [i_3 + 3] [i_4]))) + (arr_3 [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_8;
    #pragma endscop
}
