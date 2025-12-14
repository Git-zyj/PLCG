/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_1 || var_4);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_11 = ((var_0 || (arr_0 [12])));
        arr_2 [i_0] [i_0] = (min((max(var_1, (arr_1 [i_0]))), 126));
        arr_3 [i_0] = arr_0 [i_0];
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = (((((~var_5) / -13691)) != ((((arr_5 [i_1]) < (arr_5 [i_1]))))));
        var_12 |= arr_4 [i_1];
        arr_7 [2] = ((((min((arr_5 [i_1]), (arr_5 [i_1])))) || ((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1]))))));
        var_13 = ((((min((max((arr_4 [i_1]), (arr_0 [i_1]))), (-126 || -116)))) ? (((!(arr_0 [i_1])))) : -123));
        arr_8 [1] [i_1] = (((((127 > (arr_1 [i_1])))) == (arr_0 [i_1])));
    }
    var_14 = (max(var_14, (((~(((var_1 < 126) ? var_6 : (var_3 == var_9))))))));
    #pragma endscop
}
