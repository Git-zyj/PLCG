/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_10 && var_0) ? var_2 : ((max(var_6, var_1))))) - (((var_10 >= (!var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [9] [i_1 + 1] [12] = (((((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_0]) : (arr_3 [i_0]))))) ^ var_2));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_12 = ((((((arr_11 [i_1 - 2] [i_1 - 2] [1] [i_1 + 1]) ? (arr_11 [i_1 - 2] [i_1 - 1] [i_1] [i_1 + 1]) : 91))) ? var_3 : (((((((arr_2 [i_0] [15] [i_0]) || (arr_11 [1] [i_1] [i_2] [i_3])))) < (((arr_15 [i_0] [i_2] [9] [i_0] [0] [i_3]) % var_9)))))));
                                var_13 ^= (max((((arr_14 [i_1 - 2] [i_4] [i_4 + 1]) ? (arr_7 [i_1 - 1] [8] [10] [i_4 + 1]) : (arr_12 [i_1 + 1] [i_1] [i_4]))), (((-(arr_14 [i_1 + 1] [i_1] [3]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_14 = (((((((((arr_8 [i_0] [6] [i_0]) || (arr_2 [i_5 + 1] [i_1] [i_0]))))) > var_0)) ? (((((arr_13 [14] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [7]) + 2147483647)) >> (((arr_6 [i_0] [0] [i_6]) - 47100)))) : ((1 ? (91 % 165) : (arr_15 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1])))));
                                var_15 -= (((((arr_19 [i_0] [i_1] [i_2] [i_1] [i_6 - 2]) >= (arr_3 [1]))) && ((!(arr_18 [i_1] [10] [i_5 + 2] [i_5])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
