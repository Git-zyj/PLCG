/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((~((var_8 ? var_4 : var_11))))), (min(var_2, var_3))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 += ((~(min((max(9223372036854775807, (arr_6 [i_3]))), -5574536896287297391))));
                                var_14 = (((max(-6, (arr_9 [i_0] [i_1] [i_1] [10]))) ^ (((((~(arr_1 [4] [i_0]))))))));
                                arr_15 [8] [i_1] [17] = (min(((max((arr_6 [i_1]), var_4))), (((-1024 * var_6) ^ 5574536896287297391))));
                            }
                        }
                    }
                }
                var_15 = (((arr_10 [i_1] [i_0] [i_0] [9]) ? (((((arr_9 [i_0 + 1] [i_1] [i_1] [i_0 + 1]) ? var_9 : (arr_12 [i_1] [i_1]))) + (((-(arr_8 [i_0] [i_0] [13] [i_0])))))) : (((((arr_10 [i_0 - 1] [i_0 + 1] [17] [i_1]) || var_9))))));
            }
        }
    }
    #pragma endscop
}
