/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_8 ? (~var_13) : -var_8));
    var_16 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [6] [i_1] = var_13;
                    var_17 = (max(var_17, (((((((((-11772 ? var_4 : var_13))) ? var_11 : var_1))) ? ((max((!var_5), (arr_1 [i_0 + 2])))) : (arr_4 [i_0] [10]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((-543207881 | (((~var_7) ? ((min(var_13, (arr_14 [i_3])))) : (arr_5 [i_1] [15] [i_1] [i_1]))))))));
                                var_19 = (min(var_19, var_10));
                                var_20 = (max(var_20, (arr_6 [i_2 + 1] [i_2 + 1] [i_3 + 3])));
                                var_21 = ((-(((((2093056 >> (arr_12 [i_0] [i_1] [i_3 - 1] [7]))) <= (((((arr_3 [i_0] [18] [i_4]) && 4219369386)))))))));
                                var_22 += (max((((max(-4140660057844613729, 75597910)) - -var_12)), (((var_13 + (arr_12 [i_3 + 3] [i_3] [i_3 + 4] [i_3]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
