/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((((((var_13 ? 1 : var_17))) ? (0 != var_0) : (17230247941813801161 == 17230247941813801161))) != (max((var_10 * -1), var_5)))))));
    var_19 = ((((((1 ? 17230247941813801155 : 31744)))) != ((var_13 ? (min(var_7, var_5)) : (var_4 | var_5)))));
    var_20 = ((var_16 ? (var_12 <= var_6) : (min(2852092883611160167, var_0))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = (arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = (((((((-(arr_1 [1] [i_0])))) ? ((((arr_0 [i_0]) && (arr_1 [3] [3])))) : (1216496131895750441 > 5328940106115008354))) * (((min(-1, (arr_1 [i_0] [i_0])))))));
        var_22 = 1502174909;
        var_23 ^= (-705472703 <= ((var_7 ? (5328940106115008365 != 0) : ((13117803967594543251 ? (arr_0 [i_0]) : var_8)))));
        arr_3 [i_0] [i_0] = (max((arr_1 [i_0] [i_0]), (((((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (~1089042569) : (arr_0 [i_0]))))));
    }
    #pragma endscop
}
