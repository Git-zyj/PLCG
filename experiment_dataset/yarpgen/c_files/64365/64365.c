/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [5] = (min(((min(1, 15))), (arr_4 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_2] = ((+(((((min((arr_8 [i_0] [i_0] [i_2 + 3]), 0))) > (~58847))))));
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_3 - 1] = (min(((((min((arr_0 [i_3]), 1))) > (var_9 > var_0))), (min((arr_7 [i_2] [i_2] [i_2 + 2]), (arr_7 [10] [i_2] [i_2 + 2])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_10 = ((((~((min(1, var_3))))) <= (min((((arr_3 [3] [i_4]) ? (arr_16 [0] [i_4] [1] [1] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))), ((min(var_4, (arr_15 [i_0] [i_1] [i_4]))))))));
                            arr_17 [i_5] [i_0] [1] [i_0] = (arr_16 [i_5 - 2] [i_5 - 1] [1] [i_5 - 2] [i_5] [i_5]);
                            arr_18 [i_4] [i_4] [i_4] = ((((!((((arr_15 [0] [i_1] [1]) * (arr_2 [i_1])))))) ? (arr_13 [i_0] [1] [6]) : (min(1, ((1 ? 1 : (arr_15 [i_0] [i_0] [17])))))));
                        }
                    }
                }
                arr_19 [i_1] = ((((min((((137 >= (arr_2 [i_0])))), (min(var_7, (arr_4 [i_0])))))) * (min((((arr_4 [i_0]) ? (arr_3 [i_0] [i_1]) : 1)), (((arr_13 [i_0] [i_0] [i_1]) ? var_3 : var_4))))));
            }
        }
    }
    var_11 = (min(((-((min(1, 1))))), var_7));
    #pragma endscop
}
