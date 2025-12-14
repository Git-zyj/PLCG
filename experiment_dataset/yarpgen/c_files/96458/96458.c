/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= (arr_0 [i_0 - 1]);
        var_14 = ((((+(((arr_1 [i_0]) >> (((arr_1 [i_0]) - 89)))))) >= (6686528412936649869 == -1)));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_15 = (arr_0 [i_1]);
        var_16 = (max(var_16, ((((((var_5 + (arr_0 [i_1])))) && (min((((arr_1 [i_1]) != (arr_3 [i_1]))), (!var_11))))))));
        var_17 = (min(var_7, var_8));
        arr_5 [i_1 - 1] [i_1 - 1] = (min(var_10, (((!(arr_1 [i_1]))))));
    }
    var_18 = var_11;
    #pragma endscop
}
