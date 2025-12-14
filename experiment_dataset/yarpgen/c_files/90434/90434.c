/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = var_0;
        arr_4 [i_0] [i_0] = ((9720456482570878814 ? (12222462142569700906 >= 1) : (arr_0 [i_0] [6])));
        var_10 = ((var_7 ? 9396375186602896532 : var_0));

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            var_11 *= 9720456482570878814;
            arr_9 [i_0] = 10337392120107153102;
            var_12 = (((var_4 & var_6) ? (((((arr_2 [i_0]) != (arr_2 [5]))))) : 8726287591138672794));
            arr_10 [i_0] = (arr_6 [i_0]);
            arr_11 [i_0] = (((-23 ? (arr_2 [i_1]) : 10337392120107153102)));
        }
    }
    var_13 ^= (~1);
    var_14 = 165539121;
    var_15 = var_9;
    var_16 = ((((12222462142569700906 ? 6549806643307995288 : -31))) ? (max(var_2, 18446744073709551615)) : -var_6);
    #pragma endscop
}
