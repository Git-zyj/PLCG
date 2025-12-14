/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_3 && var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = ((((!((!(arr_5 [i_0])))))));
                                var_16 = (min(var_16, (min(-32758, -1))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_17 += (arr_6 [9] [i_1]);
                                var_18 = (min((((((-(arr_13 [7] [i_1] [1] [5] [1] [i_6])))) ? (arr_4 [i_5 - 2] [i_2 + 2] [i_0]) : ((-(arr_10 [i_1] [i_1] [i_1] [i_6]))))), (((((arr_11 [1] [i_5 - 1] [i_1 + 1] [i_1 + 1] [i_0] [i_0]) ? (arr_13 [i_0] [i_1] [i_0] [i_2] [i_5] [9]) : var_3)) & ((min(var_3, (arr_5 [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
