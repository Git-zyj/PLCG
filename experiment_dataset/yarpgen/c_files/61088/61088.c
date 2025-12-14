/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_13 |= ((-(((arr_2 [i_0 + 1] [i_0 + 2]) ? (16 != 15753) : (arr_0 [i_0 - 2])))));
        var_14 = (min(var_14, 17));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] = (--126);
        arr_6 [i_1 + 1] = (arr_3 [i_1 - 1]);
    }
    var_15 = 14396;
    #pragma endscop
}
