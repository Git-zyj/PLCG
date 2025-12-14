/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((-var_16 == ((min(var_2, var_8))))) ? (((((var_13 ? var_6 : var_13))) & -var_11)) : ((min(var_9, -var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (arr_3 [i_0] [i_1]) : (((arr_0 [11]) << ((((max((arr_0 [i_1]), (arr_0 [i_0])))) - 110))))));
                arr_7 [12] [i_1] [15] = ((~(arr_2 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_21 = ((!((min((arr_5 [0] [0]), (max((arr_12 [i_1] [i_1] [7] [i_3]), (arr_12 [i_0] [i_1] [i_2] [i_3]))))))));
                            arr_16 [i_1] [1] [i_2] [i_2] [i_2] = ((~(arr_3 [i_1] [i_1])));
                            arr_17 [i_1] [1] [2] = ((-(arr_3 [16] [i_1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
