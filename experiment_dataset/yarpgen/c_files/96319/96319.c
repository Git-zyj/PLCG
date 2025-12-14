/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_17 <= var_2);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = var_8;
        var_21 = 0;
        arr_4 [i_0] = ((!(arr_1 [i_0])));
        var_22 -= ((((0 != (arr_0 [12] [i_0]))) ? (arr_0 [i_0] [i_0]) : 1));
    }
    var_23 = 1;
    var_24 = (((((!(37524 * var_4)))) * (((!(((4294967295 ? 1473774905 : 276117746))))))));
    #pragma endscop
}
