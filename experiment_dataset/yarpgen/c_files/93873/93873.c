/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_7 ? 6635053313589574557 : -6635053313589574567))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        arr_4 [i_0] = (((var_6 ? var_7 : (arr_1 [i_0]))));
    }
    var_12 = ((max(((var_4 ? -18 : -6635053313589574558)), var_10)));

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_13 = ((((var_4 ? var_7 : var_9))));
        var_14 = ((((var_7 ? var_8 : var_8))));
    }
    #pragma endscop
}
