/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 1;

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_1] = max((~1), (((max(var_13, 163)) - ((((arr_3 [i_0] [4] [i_1]) ? (arr_3 [i_1] [i_0] [i_0]) : (arr_4 [i_1])))))));
            arr_7 [i_0] [i_1] [i_1] = 186;
            arr_8 [i_0] [i_0] = (((((max(155, 5821378345220784366)) ? 26645 : -32749))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_11 [i_0] [i_0] [i_2] = (arr_9 [i_2] [3] [i_2]);
            var_16 = ((~(((((arr_1 [i_0]) + 2147483647)) >> (var_2 - 1149764390)))));
            var_17 = (max(-26670, 213));
            arr_12 [i_0] [i_2] [i_2] = (((!(arr_10 [i_0] [i_2] [i_0]))) ? (((arr_0 [i_2]) ? 43 : 13261898388262734351)) : (max((arr_10 [i_0] [i_2] [i_2]), (arr_10 [i_0] [i_2] [i_2]))));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_15 [i_0] [2] [i_0] = ((~var_7) ? (((((max(44588, var_1))) * ((min((arr_13 [i_0]), var_1)))))) : ((~(arr_10 [i_3] [i_3] [2]))));
            var_18 = ((-(((!(arr_9 [i_0] [i_0] [i_0]))))));
        }
        arr_16 [2] = ((~(arr_13 [i_0])));
        var_19 = ((var_0 ? ((-(max(697444552, var_5)))) : var_3));
        var_20 = (max(((var_10 ? (((arr_9 [i_0] [i_0] [i_0]) ? 1 : var_8)) : (((var_1 % (arr_13 [i_0])))))), ((((((arr_9 [i_0] [i_0] [i_0]) + 2147483647)) >> (((arr_9 [i_0] [i_0] [i_0]) + 14340)))))));
    }
    var_21 = var_8;
    var_22 = ((213 < (((((36 ? 0 : 44588))) ? 1 : 0))));
    var_23 = ((((var_12 < (var_6 == var_8)))));
    #pragma endscop
}
