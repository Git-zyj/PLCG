/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_11 = -2;
        arr_2 [i_0 - 1] = (arr_0 [i_0 + 1]);
        arr_3 [i_0 + 1] [4] = 42;
        var_12 = (min(var_12, var_8));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_13 = (!(~-1));
        var_14 = ((((min(((21983 ? var_4 : 1633382498169113271)), ((min(4032, var_8)))))) ? (arr_0 [i_1 + 1]) : -var_4));
        var_15 = ((-251329280 ? (((arr_0 [i_1]) & -17741)) : (min(-1, ((-(arr_4 [i_1])))))));
    }
    var_16 = ((~(max((!-21960), 0))));
    #pragma endscop
}
