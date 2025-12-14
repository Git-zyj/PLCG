/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_6 >> (var_10 - 1854996585)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [18] = (((min((arr_0 [i_0]), (arr_0 [i_0]))) > ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [2] [i_4] &= (min(((var_1 ? var_3 : var_3)), (((arr_2 [i_4 - 1]) ? (arr_2 [i_4 - 4]) : var_3))));
                                var_13 = (((-(arr_15 [5] [8] [i_4 + 1] [10] [i_4] [i_4 - 1] [i_4 - 2]))));
                            }
                        }
                    }
                    arr_17 [7] [i_2] [14] [12] = ((((min((((32765 ? 242 : -118))), (max((arr_8 [i_2]), var_6))))) ? (((((max(var_8, (arr_13 [i_0] [i_1] [i_1] [i_2]))) == (arr_8 [i_2]))))) : (min((var_10 | var_11), ((((arr_11 [5] [i_1] [i_1] [i_2]) == var_6)))))));
                    var_14 &= (max((51533 | var_0), (max((arr_11 [i_0] [i_1] [i_2] [i_0]), (((arr_0 [i_0]) ? (arr_1 [17] [i_0]) : var_4))))));
                    var_15 = ((((((4294967279 ? 20 : 66977792)))) ? (((!(((1 ? 28186 : 5718)))))) : var_8));
                }
            }
        }
        var_16 = (max(var_16, ((min(((-var_0 ? var_7 : (arr_4 [7] [i_0] [i_0]))), ((min(26, var_6))))))));
    }
    #pragma endscop
}
