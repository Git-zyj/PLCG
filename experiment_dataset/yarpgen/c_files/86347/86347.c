/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_20 -= (((max(124, 0)) != 1532837575));
        var_21 = (max(((127 ? 4294967295 : (max(0, (-127 - 1))))), ((max(-104, 2030424790725158429)))));
    }
    for (int i_1 = 2; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (((53 * (((!((min((arr_3 [i_1]), 2147483647)))))))))));
        var_23 = (((max(8, (arr_2 [i_1 + 2])))) ? ((((2030424790725158453 != (arr_2 [i_1 + 2]))))) : 115300411);
        var_24 = ((var_19 << ((((var_18 << (var_13 - 536845790756581779))) - 505026229384708083))));
        arr_4 [i_1] [i_1] &= (max(((((((arr_1 [11]) << var_19)) < var_16))), ((((max((arr_1 [i_1]), (arr_2 [i_1 - 1])))) ? -var_12 : ((var_13 << (90 - 47)))))));
        var_25 = (max((((!((max((arr_3 [i_1]), (arr_1 [i_1]))))))), (127 / 756512627)));
    }
    var_26 = ((((~(var_1 | 49721))) | (((~(max(var_15, 2826569959)))))));
    var_27 &= (((min((max(var_14, var_13)), (11569 + -123))) * var_19));
    #pragma endscop
}
