/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [3] [i_2] = var_9;
                    var_19 = (max(var_19, ((max(((max(((var_15 ? (arr_5 [13]) : (arr_5 [i_1]))), (arr_3 [i_0])))), ((-var_4 ? var_12 : (arr_2 [i_2 + 1]))))))));
                    var_20 *= ((var_5 >> (var_5 - 17602189292780439536)));
                    var_21 = (max(var_21, (arr_2 [2])));
                }
            }
        }
    }
    var_22 = (max(((((var_11 ? var_2 : var_3)))), (max(3728786352, 255))));
    #pragma endscop
}
