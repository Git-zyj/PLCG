/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_19 = (((arr_5 [i_0]) == var_1));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = (arr_0 [9]);
                                var_21 = (max(var_21, (((!((min(-8892756790392672811, (arr_10 [0])))))))));
                                arr_15 [i_3] [i_3] [i_2] [i_2] [i_2] = 4582103534410123490;
                            }
                        }
                    }
                }
                var_22 = (((arr_9 [i_0] [i_0] [i_0] [2]) ? ((((arr_4 [i_1 + 2] [i_1 + 2]) == (arr_5 [i_1 + 1])))) : 56));

                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    arr_18 [i_1] = ((-((~(arr_7 [i_1 + 2] [i_1] [i_1 + 1])))));
                    var_23 = ((((((!(((arr_2 [i_0] [i_1]) == (arr_4 [i_0] [i_1]))))))) == (arr_10 [1])));
                }
            }
        }
    }
    #pragma endscop
}
