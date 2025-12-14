/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [8] [i_0] [i_0] [i_0] = ((!((((arr_1 [i_0 - 1] [i_0 + 1]) ? var_6 : 61043)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = ((((min(var_9, (-6972817965280916325 / 304114641766040211)))) ? (((arr_7 [i_2 + 1] [i_2] [i_3 - 1] [i_4]) ? (arr_13 [1] [1] [i_2 + 2] [3] [i_3 - 2]) : (arr_7 [i_2 - 1] [i_2] [i_3 - 1] [i_3]))) : (min((arr_7 [i_0] [9] [i_3 - 2] [i_4]), (((arr_7 [i_0] [i_2] [i_3 - 2] [i_4]) << (((((arr_4 [i_3] [i_1]) + 3531918793045667221)) - 47))))))));
                                arr_14 [0] [i_0] [i_1] [0] [18] = (((((arr_6 [i_0 + 1] [i_2 + 1] [i_2 + 1] [i_3 - 1]) ? (min(2269468579, var_4)) : (max(63, 2025498717)))) * (arr_2 [i_0] [i_1])));
                                arr_15 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] = (min((arr_2 [i_2] [i_2]), ((var_10 ? -var_5 : (min((arr_5 [i_4] [i_3] [i_0] [i_0]), (arr_10 [2] [4] [i_2] [i_3 - 1] [2] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_0;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                var_17 = ((((((max(var_3, var_0))))) + ((-6972817965280916325 ? 2380832356432390070 : 7472539835502572897))));
                arr_23 [i_5] [i_5] = (min(-var_13, ((~(arr_6 [i_5] [i_5] [i_6] [i_6])))));
            }
        }
    }
    #pragma endscop
}
