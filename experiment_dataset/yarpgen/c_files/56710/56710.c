/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(min(4249713761, var_7))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (arr_4 [i_2]);
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((((!(arr_6 [i_2 - 4] [10] [i_1] [i_2 - 3]))) && ((((arr_2 [i_1 - 1]) ^ 83)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_1] [i_0] [i_4] [7] = ((min(((var_2 >> (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) - 2931142686)))), ((((arr_12 [6] [i_0] [i_0] [i_0] [i_0] [i_0]) | var_7))))));
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] = max((min(1866906281, 90)), (((arr_11 [i_4] [i_1] [i_1 - 3] [i_1 - 3] [i_2 - 1]) ? (arr_0 [i_0] [i_0]) : (arr_11 [i_2 - 3] [i_1] [i_1 - 3] [i_1 - 3] [i_2 - 1]))));
                                arr_15 [i_0] [2] [2] &= ((-0 > (min((var_13 + 7776817270875431975), ((max(var_16, (arr_11 [i_0] [6] [0] [i_0] [i_0]))))))));
                                var_19 |= ((!(((-(arr_9 [i_1 - 2] [i_2 - 2] [i_0] [i_1 - 2] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
