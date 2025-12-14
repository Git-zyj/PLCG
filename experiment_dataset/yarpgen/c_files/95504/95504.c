/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((max(var_9, var_9)))));
    var_11 = (max(var_11, 1925438348));
    var_12 = ((var_8 * var_8) ? var_0 : ((var_3 ? var_4 : (57476 / -5639109732792293267))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] = 4294967294;
                var_13 = (max(var_13, (arr_2 [i_0] [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_1] [i_1] [1] [i_4] = (((((var_1 ? (((arr_14 [9] [i_1] [10] [i_3] [i_3] [12] [i_0 + 2]) ? (arr_5 [i_1] [i_2] [i_4 - 1]) : -4029)) : 100))) ? (((arr_0 [i_0 - 3]) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 + 3]))) : (((((-(arr_11 [i_1])))) ? (((var_5 + 2147483647) >> (-97 + 113))) : 153))));
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_1] = (((((max(var_6, (arr_12 [i_2] [i_1] [4] [4] [i_1]))) ? var_6 : (((((arr_11 [i_1]) <= var_2))))))));
                                var_14 = (min(((var_4 ? (((var_5 ? var_0 : (arr_10 [i_0] [i_4 + 1] [i_1] [i_4 + 1] [i_1])))) : 274877898752)), (((((((var_2 >= (arr_3 [i_0] [i_1]))))) | (arr_9 [i_1] [i_1] [i_1] [i_3] [i_4] [i_0 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
