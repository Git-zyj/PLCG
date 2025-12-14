/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 33046;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 &= (arr_0 [i_0]);
        arr_4 [i_0] = ((((((((arr_1 [i_0]) ? 18446744073709551615 : 18446744073709551615))) ? (((arr_3 [i_0]) ? 17514 : (arr_3 [5]))) : ((((arr_0 [i_0]) && (arr_0 [i_0])))))) % ((4266570075 ? 32767 : 32758))));
        arr_5 [i_0] = (arr_3 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] = (((((var_10 ? (arr_6 [4]) : (arr_6 [i_1])))) ? 18446744073709551615 : (arr_6 [i_1])));
        arr_9 [1] [i_1] |= ((-((var_7 ? 108 : 32767))));
        var_17 = ((((arr_7 [i_1]) ? var_6 : (arr_7 [i_1]))));
    }
    #pragma endscop
}
