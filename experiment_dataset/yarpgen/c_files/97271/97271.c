/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_19 = ((253 >> ((((3373869450 + (arr_2 [i_0 + 2]))) - 3373869547))));
        arr_3 [i_0] [i_0] = (((arr_0 [i_0 - 1] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 - 1])));
    }
    var_20 = var_8;
    var_21 = (min(var_21, ((max(61437, ((-921097845 ? (min(var_0, 4294967288)) : (1 >= 7448703448272988762))))))));
    var_22 = (max(var_22, var_0));
    #pragma endscop
}
