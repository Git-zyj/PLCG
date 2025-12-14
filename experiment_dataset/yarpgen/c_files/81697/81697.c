/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [15] = (((((max(-581395514, (arr_2 [i_1] [i_1] [i_1]))))) ? ((155 ? (85 | -1) : (min((arr_2 [1] [i_0] [i_1]), (arr_4 [i_1]))))) : ((((204 * 1048576) ? 189 : (((max(200, 34514)))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_1] [12] [i_1] [i_1] = ((~((var_1 ? ((-(arr_2 [i_0] [i_2] [i_4]))) : ((max((arr_8 [i_0] [i_0] [i_2] [i_0]), (arr_3 [i_4] [i_3]))))))));
                                var_19 -= (-(min((~193), (((arr_3 [i_2] [i_2]) | (arr_14 [i_4]))))));
                                var_20 = (((((-(arr_8 [i_0] [i_3 + 3] [i_3 + 1] [i_4 + 3])))) ? (((-127 - 1) ? ((~(arr_2 [2] [2] [i_4]))) : ((((arr_3 [i_0] [4]) + (arr_14 [i_1])))))) : (((-1335650107 ? (204 + var_13) : ((2147483633 + (arr_11 [12] [i_3] [i_2] [i_2]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (max(((-var_3 ? (var_4 | var_0) : (((var_2 ? var_0 : var_1))))), (((var_18 | (max(var_8, var_5)))))));
    #pragma endscop
}
