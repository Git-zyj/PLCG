/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((var_15 <= (arr_2 [i_0])));
        var_18 ^= (((((var_3 ? (arr_2 [13]) : var_1))) ? (!var_16) : ((var_15 ? 2952899876 : (arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = (((arr_1 [13] [i_0]) != (arr_1 [i_0] [i_0])));
        var_19 += (((arr_2 [i_0]) ? 1342067422 : 2952899873));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_9 [5] |= var_8;
        var_20 = ((!(arr_1 [i_1] [i_1])));
    }
    var_21 = var_10;
    #pragma endscop
}
