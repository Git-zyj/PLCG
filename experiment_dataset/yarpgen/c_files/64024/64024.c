/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 = ((((((max((arr_3 [i_0] [i_0]), var_2))) - (var_9 * var_10))) - (((var_3 && ((((arr_1 [i_0]) * var_0))))))));
                    arr_7 [i_1] [i_0] [i_1] = (max((((arr_6 [i_1] [7] [7] [i_1]) >> (((max(var_11, (arr_6 [i_0] [i_1] [3] [i_2]))) - 12159129220683907493)))), var_0));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_13 [i_2 + 1] [i_0] [3] [i_4 + 2] [i_1] = (-(arr_12 [i_1] [i_3 - 3] [i_1] [i_1]));
                                arr_14 [i_0] [i_0] [i_2] [i_1] [1] [i_0] [i_1] = (((arr_9 [i_3 - 2] [i_3 - 3] [i_3 + 1] [i_3] [i_3 - 3]) ? ((((!((max((arr_8 [i_1]), var_2))))))) : ((var_9 ? (((var_5 ? (arr_6 [i_0] [0] [i_3] [i_4 + 2]) : var_4))) : ((3773582057 ? 3773582057 : var_9))))));
                                arr_15 [i_2] [i_1] [i_2] [i_3] [i_4 + 2] [i_1] [i_3 - 1] = ((((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_1]) | (arr_6 [i_1] [i_1] [i_2 + 1] [i_3 + 1])))) ? (((~(((arr_8 [i_1]) + (arr_11 [i_1] [i_3] [i_2 - 2] [i_0] [i_1])))))) : ((var_7 ? var_12 : ((var_4 ? (arr_5 [i_0] [i_1] [i_2 + 1]) : var_12))))));
                                arr_16 [i_0] [i_1] = ((((arr_4 [i_4 + 1]) ^ (arr_9 [i_2 - 2] [i_2 - 2] [i_3 - 3] [i_3] [i_3 - 2]))));
                                arr_17 [i_0] [0] [i_2] [i_3] [i_4 - 1] [i_1] [i_0] = ((((((var_7 ? var_6 : var_10))) - (min(var_5, var_1)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (((((((max(var_6, var_2)))) > (max(var_6, 8080257783368690448)))) ? var_0 : var_3));
    var_15 = (((((~(~var_4)))) ? (((min((!var_7), var_12)))) : var_8));
    var_16 = (((-(var_9 > var_0))));
    var_17 = min(((var_3 ? -var_4 : 3335540538)), ((var_3 ? (!var_6) : ((var_4 ? var_2 : var_7)))));
    #pragma endscop
}
