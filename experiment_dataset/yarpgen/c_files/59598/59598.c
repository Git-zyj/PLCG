/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_13 = ((((max((((arr_3 [i_0]) % (arr_0 [i_0]))), ((max(60, 2147483647)))))) ? (arr_2 [i_0 - 1]) : ((((-2147483647 - 1) != ((198 ? 15542 : 134)))))));
        arr_4 [i_0] = (~49994);
        arr_5 [i_0] = (max((((arr_0 [i_0 - 1]) & (arr_0 [i_0 - 1]))), ((((((24388 & (arr_0 [i_0])))) ? -32177 : var_4)))));
    }
    var_14 = (max(var_14, ((((min(49994, ((max(var_7, var_11)))))) ? var_10 : var_6))));
    #pragma endscop
}
