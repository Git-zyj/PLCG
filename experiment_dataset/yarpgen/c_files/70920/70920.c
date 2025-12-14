/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((((max(145591816, 2584831076))) ? var_2 : var_4)), var_1));
    var_12 = var_3;
    var_13 = 131071;
    var_14 = (max(var_14, var_5));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_15 = ((((max(var_5, (arr_2 [i_0] [i_0 - 1])))) ? ((((max(var_6, var_8)) >= (!2251799813685247)))) : (((((arr_0 [i_0]) / (arr_0 [i_0]))) ^ var_7))));
        var_16 = ((((((arr_1 [i_0] [i_0 - 1]) ? (arr_1 [8] [i_0 - 1]) : var_9))) ? (max(var_3, (arr_1 [i_0] [i_0 - 1]))) : (max(var_9, (arr_1 [i_0] [i_0 - 1])))));
    }
    #pragma endscop
}
