/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((var_2 <= ((max(var_11, ((-19065 ? var_6 : 94))))))))));
    var_15 = (max((((((var_6 ? 63 : -1420165318))) ? var_5 : var_1)), var_3));
    var_16 = var_11;
    var_17 = 3;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_3 [0] = (((((max((arr_0 [i_0 + 2] [i_0]), (arr_2 [4] [1])))) ? (((arr_1 [i_0]) / (arr_0 [i_0] [i_0]))) : 15174)) << ((((~(arr_1 [i_0 - 2]))) + 57631)));
        var_18 -= ((((max((min((arr_2 [i_0 - 1] [i_0]), 1)), (((arr_0 [22] [i_0]) ? (arr_1 [7]) : (arr_2 [18] [3])))))) ? ((((arr_0 [i_0 - 1] [i_0 - 1]) <= (arr_0 [17] [i_0 - 1])))) : (arr_1 [i_0])));
        var_19 = ((((((arr_2 [i_0] [i_0]) ? (arr_2 [8] [8]) : 1))) ? (((((arr_2 [i_0 + 1] [i_0 - 1]) >= (arr_1 [i_0 - 1]))))) : (((((1 ? (arr_2 [i_0] [i_0]) : 18637))) ? (arr_0 [i_0] [17]) : (arr_1 [i_0 - 2])))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_20 -= (min(((max((((!(arr_4 [i_1] [i_1])))), -31))), (((((-24093 ? (arr_0 [i_1] [2]) : 0))) ? 33554176 : 1))));
        arr_6 [i_1] = (((arr_2 [i_1] [i_1]) ? ((109 << (((min((arr_2 [i_1] [i_1]), 32763)) - 32752)))) : (~-477372188)));
        arr_7 [i_1] = -262143;
    }
    #pragma endscop
}
