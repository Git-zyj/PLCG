/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_16 = (((arr_12 [i_0 + 2] [2] [i_0 + 1] [i_0 + 1] [i_0]) ? ((((!((max(2147483621, (arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [i_4])))))))) : (max(((1734563399 ? (arr_8 [i_4] [i_3] [i_1] [i_1]) : var_3)), var_4))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (arr_0 [i_3] [i_1]);
                                var_17 |= min((((arr_7 [i_0] [i_1] [i_1]) ? (((arr_1 [i_2]) ? (arr_2 [i_0] [i_1]) : var_2)) : (arr_13 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 + 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]))), (arr_12 [i_0] [i_0 + 3] [i_0] [i_0 - 3] [i_0 - 3]));
                            }
                        }
                    }
                    arr_15 [i_0] [4] [24] = (((((-var_5 ? var_5 : (arr_10 [1])))) ? (min(1880366993863772546, ((((arr_3 [1] [1]) ? (arr_2 [i_0] [i_1]) : (arr_11 [i_2] [i_1] [i_0 + 2])))))) : var_15));
                }
            }
        }
    }
    var_18 = var_4;
    var_19 += ((-var_13 ? var_3 : (((max((!var_10), (!var_3)))))));
    #pragma endscop
}
