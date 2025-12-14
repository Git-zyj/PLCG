/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_12 = (max((arr_0 [9] [i_0]), (arr_2 [i_0])));
        arr_3 [i_0] = (max((max((arr_2 [i_0]), (((arr_2 [i_0]) + (arr_1 [i_0]))))), (min((min((arr_2 [i_0]), (arr_2 [i_0]))), ((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))));
        var_13 = ((((min((arr_2 [20]), (arr_2 [0])))) ? (min((arr_2 [16]), (arr_2 [20]))) : (((arr_2 [18]) + (arr_2 [1])))));
    }
    var_14 += (~var_2);
    var_15 += ((~(max((min(var_10, var_7)), ((min(var_5, var_11)))))));
    var_16 = ((~((-var_3 ? (!var_4) : -var_1))));
    #pragma endscop
}
