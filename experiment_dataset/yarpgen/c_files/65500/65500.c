/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 29;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_12 = ((!(arr_1 [i_0])));
        var_13 = (!(((2076094824 ? (((var_5 ? 1 : 1))) : (((arr_2 [i_0] [i_0]) & 2076094824))))));
        arr_4 [i_0] = ((~var_8) <= ((max((arr_1 [i_0]), (~233)))));
        var_14 = ((~(((arr_1 [i_0 + 1]) ? 22 : (min(-1444246833912042554, (arr_1 [8])))))));
        var_15 = (((((arr_0 [i_0] [i_0]) * 9223372036586340352)) * (arr_0 [i_0] [i_0 - 1])));
    }
    var_16 = ((2 < (((((var_7 ? 0 : var_5)) > -var_2)))));
    var_17 = ((var_8 ? 0 : ((var_10 ? 7 : 9223372036586340352))));
    var_18 = 2022567295;
    #pragma endscop
}
