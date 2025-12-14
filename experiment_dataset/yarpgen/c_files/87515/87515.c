/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((4240041782765600823 ? var_7 : var_4));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 -= ((1 ? 0 : var_6));
        arr_2 [i_0] = var_1;
        var_20 ^= min(-1417552576, ((((var_4 ^ (arr_1 [i_0] [i_0]))))));
        var_21 = (max(((12 ? 162 : 1417552576)), (arr_1 [i_0] [i_0])));
        arr_3 [i_0] = 1417552575;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1] = min((((((((arr_4 [i_1]) != var_5))) != var_14))), ((((162800164 ? (arr_5 [i_1]) : (arr_0 [i_1] [i_1]))) >> (63754 - 63739))));
        var_22 *= ((var_9 ? -1 : (arr_6 [i_1] [i_1])));
    }
    var_23 = var_14;
    #pragma endscop
}
