/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_10 = (!(!-var_9));
        var_11 = (((((~(arr_2 [i_0])))) ? (min(var_9, (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])));
        var_12 = (arr_1 [i_0]);
        var_13 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_14 = (min((((arr_1 [i_1]) ? var_5 : (arr_1 [i_1]))), (arr_1 [i_1])));
        var_15 = ((((~(~var_3))) % (((((255 % (arr_1 [i_1]))))))));
        var_16 = var_5;
        arr_5 [i_1] = 8388544;
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_17 = var_7;
        var_18 = 54187;
    }
    var_19 &= (min(var_2, var_7));
    #pragma endscop
}
