/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((((max(((var_7 ? var_8 : var_6)), var_4))) ? ((((((var_12 ? -1 : var_1))) > (var_3 * var_4)))) : -var_2));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (min(var_14, 2133880653));
        arr_2 [i_0] [i_0] = (min((((((!(arr_1 [i_0] [i_0])))) * ((var_1 ? var_9 : (arr_1 [i_0] [i_0]))))), var_9));
        arr_3 [i_0] [i_0] = ((+((min((arr_1 [i_0] [i_0]), (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        var_15 += (((arr_5 [i_1] [i_1 - 3]) ? (!var_4) : var_5));
        var_16 = 33;
    }
    var_17 = (((var_8 + 2147483647) << (((((var_3 ^ var_7) ? (((var_7 ? var_2 : var_1))) : var_3)) - 31725))));
    #pragma endscop
}
