/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (max(var_11, ((max(var_7, (max((max(var_3, var_4)), (!805306368))))))));
    var_12 += var_2;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] &= (((7 ? ((max((arr_0 [i_0]), (arr_0 [i_0])))) : (arr_0 [i_0]))));
        var_13 = (max(var_4, (((~(arr_0 [i_0]))))));
    }
    var_14 = (min(var_14, (((~(((-24 ? 62571 : 1))))))));
    #pragma endscop
}
