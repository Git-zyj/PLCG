/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (min(((((min(var_2, var_6))) ? ((var_3 ? var_7 : 47885)) : var_2)), (((var_4 ? var_7 : var_8)))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_14 *= ((max(var_9, var_8)));
        var_15 = (((max(-3432415291, (arr_0 [i_0 + 1]))) >> (((((var_5 ^ var_3) ^ (~var_5))) - 717960273))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_16 = ((((((arr_6 [i_0 + 2]) ? (max((arr_6 [i_0 - 1]), 862551995)) : var_7))) <= (min((((arr_2 [i_0 - 2] [i_1 - 4] [i_2]) ? var_10 : (arr_6 [i_0 + 1]))), (~var_6)))));
                    arr_7 [i_0 + 2] [i_0 + 3] [i_1 - 3] [i_2] = ((((-((var_2 ? var_6 : (arr_5 [i_0 + 2] [i_0 - 1] [i_0 - 1])))))) ? (max(((min(var_3, var_0))), ((var_4 ? (arr_2 [i_0 - 1] [i_1 + 1] [i_2]) : (arr_1 [i_0 + 3]))))) : ((max(((3432415300 - (arr_5 [i_0 + 2] [i_1 - 1] [i_2]))), 3432415299))));
                    var_17 *= ((var_7 ? (((((var_2 - (arr_0 [i_0 - 1])))) ? (arr_0 [i_2]) : (arr_6 [i_1 + 1]))) : (arr_5 [i_0 - 2] [i_0 + 1] [i_0 + 3])));
                    var_18 = (arr_6 [i_0 - 1]);
                }
            }
        }
        arr_8 [i_0 - 2] = var_9;
        arr_9 [i_0 + 3] = (max(var_11, var_9));
    }
    #pragma endscop
}
