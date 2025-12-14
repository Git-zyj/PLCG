/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        var_18 = ((((max((~0), (arr_1 [i_0 - 3])))) ? (((max((arr_1 [i_0]), 0)))) : (arr_1 [i_0])));
        arr_2 [i_0] = (((arr_1 [i_0 + 1]) - ((((arr_1 [i_0 + 2]) > (arr_1 [i_0 - 2]))))));
        var_19 = (((arr_0 [i_0]) ? (max(104, ((var_8 ? 13 : 0)))) : ((max((var_3 % 1), (arr_0 [i_0 + 1]))))));
        arr_3 [i_0] = (max(-35, -1));
        arr_4 [i_0] |= max(-var_5, (((~(arr_0 [i_0 - 1])))));
    }
    var_20 = (max(var_20, (((8 ? var_10 : (max((~var_9), var_4)))))));
    #pragma endscop
}
