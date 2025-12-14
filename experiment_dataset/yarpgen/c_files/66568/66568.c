/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] = (arr_4 [6] [i_0]);
                var_13 = (max(var_13, ((min(-var_9, (((!(arr_5 [i_1 - 1])))))))));
                var_14 = (((((~(arr_1 [i_1 - 1] [i_1 - 1])))) ? (((arr_0 [i_1 + 1] [i_1 + 1]) ? -1451677852 : ((-(arr_0 [i_1 - 1] [1]))))) : (arr_2 [i_1])));
                var_15 = (((min((arr_3 [i_0] [i_1]), (arr_4 [i_0] [i_1]))) + ((((max(-430156938, (arr_0 [i_0] [i_0]))) == -32765)))));
            }
        }
    }
    var_16 = var_4;

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_17 ^= (-(((56335 == (min(32765, 5460281540062508230))))));
        var_18 |= (((arr_1 [i_2] [i_2]) ? (min(((-67 ? (arr_3 [i_2] [10]) : (arr_9 [8]))), (arr_9 [i_2]))) : ((min((arr_3 [i_2] [18]), (((arr_4 [i_2] [i_2]) != -68)))))));
        var_19 = (max(((((arr_3 [i_2] [i_2]) ? (arr_3 [i_2] [i_2]) : 56375))), ((var_2 ? (arr_8 [i_2] [i_2]) : (arr_7 [i_2])))));
    }
    #pragma endscop
}
