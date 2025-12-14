/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_10);
    var_14 = (0 + 1073741824);
    var_15 = (((((((var_12 ? var_11 : var_2))) ? var_6 : var_3)) != ((((var_5 && ((min(var_3, var_0)))))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (((!18446744073709551615) ? (28672 - 255) : ((~(8396354059570022090 | 0)))));
        arr_5 [i_0] [i_0] = (max((((arr_3 [i_0] [i_0 + 3]) & ((((arr_1 [i_0]) ? (arr_1 [i_0 - 1]) : 2147450880))))), (((max((arr_3 [i_0] [i_0]), 32767)) >> ((((1 ? (arr_3 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) - 1795811141290590906))))));
    }
    #pragma endscop
}
