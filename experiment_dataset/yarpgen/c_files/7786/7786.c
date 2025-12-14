/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, 4084557655));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (((0 != 2) ? 18446744073709551615 : -1393269971));
        var_21 = (min(var_21, (((var_7 / (arr_0 [i_0]))))));
    }
    var_22 &= (((((((min(6182816682325402409, 127))) ? (min(2648201948, var_7)) : var_3))) ? 6623362845813653824 : (-2147483647 - 1)));
    var_23 = (min(var_23, (47879 - var_11)));
    #pragma endscop
}
