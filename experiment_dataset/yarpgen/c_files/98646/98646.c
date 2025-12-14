/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_8 ? var_5 : ((-2270192582247845001 ? var_2 : var_7))))) ? ((((((2147483647 ? var_10 : var_10))) ? var_8 : (var_1 * 50227)))) : var_6));
    var_12 = var_10;

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (1 <= 6);
        arr_3 [i_0] = (max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])));
        arr_4 [i_0] [i_0] = ((((((max(var_5, -64797829)) * ((((arr_0 [i_0]) > var_5)))))) % ((((max(1, 4095))) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        arr_5 [i_0] = (((arr_0 [i_0]) <= (arr_0 [i_0 - 1])));
        arr_6 [i_0] = 837371029;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_13 = var_3;
        var_14 = (arr_8 [i_1]);
        arr_11 [i_1] = (max(-11, -2462556029));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_15 = ((-(arr_1 [i_2 + 2])));
        arr_15 [i_2] [i_2] = (arr_0 [i_2 + 2]);
        arr_16 [i_2] = ((16005201639371701263 < (arr_10 [i_2 - 1])));
        var_16 = ((arr_14 [i_2 - 1]) ? 16 : 17);
    }
    var_17 = ((((min(8, (((0 ? 2313275566 : 2661656989)))))) ? 2047 : 1));
    #pragma endscop
}
