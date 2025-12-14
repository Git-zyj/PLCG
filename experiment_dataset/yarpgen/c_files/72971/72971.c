/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max(var_2, (((var_6 ? var_7 : 31384))))) | (((~((var_0 ? var_7 : var_3)))))));
    var_11 = (!var_6);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 += ((+(((!1) & (!1)))));
        arr_3 [i_0] |= ((!(((((max(0, (arr_1 [i_0])))) ? (arr_1 [13]) : (((arr_2 [i_0] [i_0]) ? (arr_0 [2]) : 1)))))));
        arr_4 [i_0] = ((((!(arr_0 [i_0]))) && ((((arr_1 [i_0]) ? var_6 : (arr_1 [i_0]))))));
        var_13 |= (max(21248, (max((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))), (33004 * 1)))));
        arr_5 [i_0] = ((~(((max(1, var_6)) ? 25396 : (29810 | 531511471)))));
    }
    var_14 = var_7;
    #pragma endscop
}
