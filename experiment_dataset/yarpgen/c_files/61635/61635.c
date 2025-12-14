/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = (((arr_1 [i_0]) / var_9));
        arr_4 [i_0] = ((~(arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_11 |= (arr_6 [i_1] [i_1]);
        arr_8 [i_1] = (((arr_6 [i_1] [i_1]) ? ((65520 ? 16 : (arr_7 [i_1]))) : (((var_3 ? var_5 : var_1)))));
        arr_9 [i_1] = (-5239786178277558378 + 7398801551865969044);
    }
    var_12 |= 65520;
    #pragma endscop
}
