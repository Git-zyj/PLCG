/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_20 += ((((var_5 ? -22 : 1)) <= (arr_0 [i_0])));
            var_21 = -var_15;
            arr_4 [i_0] [i_0] = (((arr_1 [i_1] [i_0]) & (arr_2 [i_1])));
            var_22 -= (((((2147483647 ? 85 : (arr_1 [i_0] [9])))) ? (arr_1 [8] [i_1]) : (((arr_1 [i_1] [9]) ? var_8 : (arr_3 [4] [i_0] [9])))));
        }
        var_23 = ((arr_2 [i_0]) > (arr_3 [i_0] [i_0] [i_0]));
        arr_5 [i_0] = -194750289;
    }
    var_24 = (((((var_14 ^ (var_5 != 18446787669539387)))) ? (((-var_0 ? (var_6 - var_15) : (var_18 >= 2147483647)))) : (((((8 ? -2147483647 : var_18))) ? ((min(5261124724970329023, var_1))) : (min(0, var_6))))));
    #pragma endscop
}
