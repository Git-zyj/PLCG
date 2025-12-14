/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_14 ^= ((~(min((arr_0 [i_0 - 2]), var_5))));
        var_15 += ((!((max((!2639), (arr_1 [i_0 + 1]))))));
        arr_2 [i_0] = (max((max((arr_0 [i_0 - 2]), (arr_1 [i_0 + 1]))), ((max((arr_1 [i_0 - 2]), -1071507627)))));
        arr_3 [i_0 - 2] = (min(1, (arr_1 [i_0])));
    }
    var_16 = (max(var_16, (((+((((var_11 <= var_2) != ((var_4 ? var_1 : 1071507627))))))))));
    #pragma endscop
}
