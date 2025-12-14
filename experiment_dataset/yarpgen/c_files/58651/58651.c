/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [5] = (((((1428535532 ? (arr_1 [i_0]) : 1428535524))) ? ((min((arr_1 [i_0]), (arr_1 [i_0])))) : (arr_1 [i_0])));
        var_12 = (min(var_12, (((((-var_9 ? var_0 : (((arr_1 [15]) ? (arr_0 [i_0] [i_0]) : -1252227706370271036)))) != ((((var_11 - 3) - (((-(arr_0 [i_0] [i_0]))))))))))));
        arr_3 [i_0] = (min(-1428535535, (arr_1 [i_0])));
        arr_4 [i_0] = ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_6)) : (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        var_13 = (max(var_13, (arr_5 [1])));
        var_14 = (min((max(((32665 ? 15 : (arr_5 [i_1]))), (max((arr_8 [i_1 - 1] [i_1 + 1]), (arr_5 [i_1 + 1]))))), (((((((arr_5 [i_1]) ? (arr_6 [i_1 - 1]) : (arr_0 [i_1 + 1] [i_1])))) | (((arr_1 [i_1]) ? var_0 : (arr_7 [i_1]))))))));
    }
    var_15 = ((var_11 ? -1428535532 : 26346));
    #pragma endscop
}
