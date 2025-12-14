/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((min((~3574), var_10))), 106));
    var_14 = (((((min(var_1, var_5))) ? (max(16646, var_1)) : var_3)));
    var_15 = var_4;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max(144, 47195));
        arr_4 [i_0] = (((arr_2 [i_0]) ? 0 : ((~(((arr_1 [16] [i_0]) ? (arr_1 [i_0] [12]) : var_10))))));
        arr_5 [i_0] = ((((7826786574100717865 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (!var_12) : 32746);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_9 [8] = (min((((-32736 ? (arr_6 [i_1]) : var_4))), ((min((arr_8 [i_1]), (arr_0 [i_1] [i_1]))))));
        arr_10 [i_1] = (max(((max((max((arr_1 [i_1] [i_1]), (arr_8 [1]))), (var_6 <= var_12)))), (~var_7)));
    }
    #pragma endscop
}
