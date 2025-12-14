/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_2, ((~((13911650472447323564 ? var_3 : var_6))))));
    var_19 = ((1879048192 >> (-5530510505967960233 + 5530510505967960245)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((arr_0 [i_0]) ? var_0 : 1879048210)));
        arr_3 [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (arr_6 [i_1] [i_1]);
        var_20 = var_2;

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_10 [i_1] [i_1] [i_2] = var_3;
            var_21 += (((((1 ? -396607350 : 192))) ? (((arr_8 [i_1]) ? (arr_8 [i_1]) : (arr_8 [i_1]))) : (((arr_5 [i_2]) ? var_0 : (arr_0 [i_1])))));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_13 [i_1] [i_3] [i_3] = (min(var_11, (((~(arr_1 [i_3]))))));
            arr_14 [i_3] = ((((((arr_6 [i_1] [i_3]) ? (arr_8 [i_1]) : (arr_6 [i_1] [i_3])))) ? ((8 ? 16777215 : 62)) : (arr_8 [i_1])));
            var_22 -= ((!(arr_0 [i_1])));
        }
        var_23 -= (((((0 >> (var_12 + 1734351976)))) ? (arr_5 [i_1]) : (arr_5 [i_1])));
    }
    var_24 = 27525;
    #pragma endscop
}
