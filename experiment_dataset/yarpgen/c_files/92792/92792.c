/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((-((44658 ? (arr_1 [0] [0]) : (arr_0 [i_0] [i_0]))))) * ((((((arr_2 [i_0]) ? 0 : 44658))) ? (((arr_1 [i_0] [i_0]) ? (arr_0 [8] [i_0]) : (arr_1 [i_0] [i_0]))) : ((20878 ? 1141 : 44658))))));
        var_19 = (max(1, -2455));
        arr_4 [i_0] [14] = ((20877 ? (((!((((arr_2 [i_0]) ? 180 : (arr_0 [i_0] [i_0]))))))) : ((65535 ? 1 : 1))));
        var_20 *= ((((((!(arr_2 [0]))) ? ((min(1, 44665))) : (((arr_2 [4]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0] [6]))))) & (((arr_1 [1] [4]) ? ((max(-24155, (arr_1 [i_0] [i_0])))) : (((arr_2 [2]) ? (arr_2 [4]) : (arr_0 [i_0] [10])))))));
        var_21 = (min(((34620 ? -4192 : 20845)), (((((107 ? 44641 : 1365414181))) ? ((max(1, 44658))) : 20878))));
    }
    var_22 = var_17;
    #pragma endscop
}
