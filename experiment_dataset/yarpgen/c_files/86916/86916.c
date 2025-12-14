/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_17 = min((((arr_0 [i_0 - 1] [i_0]) | (arr_0 [i_0 + 1] [i_0]))), ((((arr_1 [i_0 - 3] [i_0 - 3]) & var_5))));
        arr_2 [i_0] [i_0] = ((((((arr_1 [i_0 + 1] [i_0 + 1]) / var_13))) ? (max(var_8, var_15)) : var_3));
        var_18 = (max(var_18, ((((((!(arr_1 [i_0] [i_0])))) & ((((min(var_6, var_6))) ? var_2 : ((min(53, var_3))))))))));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = -6079719455557248684;
        var_19 = (min((((((1309163512 ? var_5 : 214))) ? 52 : (min((arr_1 [i_1] [i_1 - 2]), (arr_3 [i_1] [i_1]))))), ((min(0, 0)))));
        var_20 = (min(var_20, var_6));
    }
    var_21 &= ((~(((((var_3 ? var_16 : var_15))) ? var_7 : 17615))));
    #pragma endscop
}
