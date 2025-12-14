/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_0));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_12 -= (arr_1 [i_0]);
        var_13 = 96;
        var_14 = (min(var_14, (((((((arr_2 [i_0 + 1]) ? -96 : 144)) + 2147483647)) << ((((((~(arr_2 [6]))) + 9208)) - 16))))));
        arr_3 [i_0 + 2] [6] = -15;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_15 = (min(108, (min(1, var_8))));
        var_16 = ((arr_6 [i_1]) ? ((((-124 < (arr_6 [6]))))) : (((var_3 ? var_8 : var_8))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_17 = ((-70 <= (arr_8 [i_2] [i_2])));
        arr_10 [i_2] = 18446744073709551609;
        arr_11 [i_2] [i_2] = (((((((min(124, (arr_9 [i_2])))) ? -1 : (((arr_9 [i_2]) ^ 103))))) ? -1142017638 : (arr_8 [18] [20])));
        var_18 = -96;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_19 = var_7;
        var_20 = (((min(var_3, (arr_5 [i_3])))));
    }
    var_21 += var_3;
    #pragma endscop
}
