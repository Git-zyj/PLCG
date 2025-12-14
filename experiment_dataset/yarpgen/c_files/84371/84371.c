/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_9;

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((-1 && ((((~1595194967772064709) ? (arr_0 [i_0 + 2]) : ((max(1, -6806))))))));
        var_20 = arr_1 [i_0 + 2];
        var_21 += ((~(((!(arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_22 *= (((((arr_1 [1]) ? var_2 : 12))) ? var_1 : 1117483693);
        var_23 = (var_9 - var_4);
    }
    #pragma endscop
}
