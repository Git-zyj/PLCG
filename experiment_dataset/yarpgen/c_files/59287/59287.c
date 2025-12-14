/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_1));
        var_21 = (max(var_21, ((var_19 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((var_16 > 1) / ((var_13 ? (((arr_2 [i_1]) ? 1 : (arr_3 [i_1] [i_1]))) : (arr_5 [i_1] [i_1])))));
        arr_7 [i_1] = min((1 ^ 90), (min((arr_2 [i_1]), var_3)));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_22 = (min((((((min((arr_3 [i_2] [i_2]), var_12))) ? ((((var_14 >= (arr_0 [i_2] [i_2]))))) : (((arr_1 [i_2]) | 1))))), (((((8226242543653688651 ? var_14 : 1))) ? (((arr_5 [i_2] [i_2]) ? var_5 : var_17)) : var_13))));
        var_23 |= (max(((~(min(-19258, 8226242543653688659)))), var_2));
    }
    var_24 = (((161 ? 115 : 219)));
    var_25 = (max(((var_15 ? var_15 : (~1))), ((var_1 ? ((var_12 ? -15 : 5)) : (~var_17)))));
    var_26 = ((((((var_1 ? var_11 : var_10)))) ? var_10 : var_13));
    #pragma endscop
}
