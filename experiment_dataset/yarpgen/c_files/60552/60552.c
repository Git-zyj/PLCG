/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (~0);
        arr_4 [i_0] [i_0] = (~2117825841312480605);
    }
    var_12 = (((16115249873330142708 >> 59) ? (((5047017487073054114 ? (((min(168, var_4)))) : -var_10))) : (var_2 / var_10)));
    #pragma endscop
}
