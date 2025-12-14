/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1769546980802598106;
    var_20 = 1151076999;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (!var_6);
        var_21 = (16677197092906953510 ? 18381 : -19057);
        var_22 -= (arr_1 [2]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_23 = (max(var_23, var_7));
        arr_7 [0] [0] = min(var_5, ((-16677197092906953510 * (arr_1 [1]))));
    }
    #pragma endscop
}
