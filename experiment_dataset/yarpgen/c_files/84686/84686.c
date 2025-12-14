/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((!((max(-1, var_1)))));
    var_13 += min(((((max(var_11, var_3))) ? var_7 : var_0)), 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 += ((((var_10 == var_2) * ((var_10 ? var_7 : (arr_12 [i_0] [1] [i_2] [i_3] [4]))))) * (arr_0 [i_0] [i_1]));
                                var_15 = (min(var_15, ((min((max(((var_5 ? var_0 : (arr_1 [i_4] [18]))), ((min(1, var_8))))), ((((((arr_3 [i_3] [i_4 + 1]) || var_7)) && var_7))))))));
                                var_16 += ((-(((arr_12 [i_3 - 2] [i_4 - 1] [i_2] [i_2] [i_4]) ? (arr_12 [i_3 + 1] [i_4 - 1] [1] [i_3] [i_4]) : var_9))));
                                var_17 = (((arr_7 [i_0] [i_1] [i_3 - 1] [i_3 - 1]) ? ((~(arr_11 [i_0] [i_1] [i_3 + 2] [i_1] [3] [i_4 + 1]))) : (~var_5)));
                                var_18 += ((!(arr_7 [i_1] [i_3] [i_1] [i_0])));
                            }
                        }
                    }
                    var_19 += ((4565376758738321051 ? ((min(1, -6775))) : -1926916143));
                }
            }
        }
    }
    #pragma endscop
}
