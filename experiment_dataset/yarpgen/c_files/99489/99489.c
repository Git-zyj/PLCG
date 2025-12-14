/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((1 ? var_11 : var_4));
    var_14 = var_8;
    var_15 = (min(var_15, (((((min(-1, (min(var_5, var_1))))) ? (((((var_10 ? 1363654398 : var_8))) - ((1 ? var_2 : var_10)))) : 176)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 += (arr_0 [8]);
        arr_4 [i_0] [i_0] = var_11;
    }
    for (int i_1 = 3; i_1 < 7;i_1 += 1)
    {
        var_17 += 176;
        var_18 = (max(var_18, ((min((((arr_2 [i_1 - 2]) ? (arr_2 [i_1 + 3]) : (arr_2 [i_1 + 3]))), (!var_10))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_19 *= (min(1, (min((((arr_9 [6] [i_2]) ? -31207 : 1)), (~var_5)))));
        var_20 *= ((max(var_2, var_1)));
        var_21 = (((((79 ? ((var_4 ? (arr_2 [i_2]) : var_10)) : (1 / 1)))) ? (arr_9 [i_2] [19]) : var_8));
    }
    var_22 = var_3;
    #pragma endscop
}
