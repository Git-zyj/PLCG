/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_10 = (min(var_10, ((((arr_1 [i_0]) | (((arr_1 [i_0]) ? (((((arr_3 [i_0]) && 633173993)))) : 633173993)))))));
        var_11 -= (((((!((min((arr_2 [i_0] [i_0]), -2514574159888840369)))))) >> (((!((65523 >= (arr_1 [i_0]))))))));
    }
    var_12 = (min((31744 & 65523), var_8));
    var_13 -= (!var_2);
    #pragma endscop
}
