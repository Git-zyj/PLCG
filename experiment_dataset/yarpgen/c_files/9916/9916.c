/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = ((((59 >> (98 - 69))) > (0 * 0)));
        var_13 = (max(var_13, (((((((arr_1 [i_0] [i_0]) >= (arr_1 [i_0] [i_0])))) >> ((((1501525623 << (arr_3 [i_0]))) - 1501525596)))))));
    }
    var_14 = ((((((var_6 / var_6) == (var_1 <= 1501525637)))) << ((((var_0 && -1501525637) != (var_0 % var_1))))));
    var_15 = (((((var_0 || 127) >> (var_6 - var_6))) & (((var_1 && var_7) / (255 || var_9)))));
    #pragma endscop
}
