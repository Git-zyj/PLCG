/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = (max(((((((var_0 ? var_17 : var_16))) ? (arr_0 [i_4] [i_2]) : (arr_9 [i_0])))), (min((min(var_2, (arr_7 [1] [i_1 + 1] [i_1] [i_1 - 1]))), (arr_0 [i_0] [i_0])))));
                                var_19 -= max((((var_0 >= var_0) ? var_3 : (arr_2 [i_1] [i_3] [i_4]))), ((min(187141084, 252))));
                                arr_10 [11] [i_4] = (max(((max((arr_9 [i_0]), (var_3 ^ var_9)))), var_6));
                                var_20 = (min((((min(var_12, var_3)))), (min(var_14, (arr_1 [i_2])))));
                                arr_11 [i_3] [i_2] [i_2] [i_3] [i_2] [16] = ((((min((min((arr_4 [i_0] [17] [i_2]), var_14)), ((var_14 ? (arr_6 [i_0] [i_1]) : (arr_3 [i_4] [i_3] [i_0 - 1])))))) ? (((+(((arr_2 [i_4] [i_1] [i_0 - 2]) ? (arr_6 [i_3] [i_4]) : var_17))))) : (min(((var_11 + (arr_2 [i_3] [i_3] [i_3]))), (((arr_2 [i_4] [i_3] [i_1 - 1]) - (arr_1 [i_4])))))));
                            }
                        }
                    }
                    arr_12 [i_0] [0] [11] [i_1] &= (((arr_6 [i_0 - 1] [i_1]) / var_14));
                }
            }
        }
    }
    var_21 = ((var_3 & ((var_9 ? (max(var_5, var_17)) : var_3))));
    var_22 = (((min(var_17, (var_2 * var_11))) * (min((max(var_0, var_5)), (!14164)))));
    #pragma endscop
}
