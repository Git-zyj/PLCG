/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = 2090005071;
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] [i_0] = (max(((~(~-1285585355))), 45188));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_14 = (arr_5 [i_1] [i_1]);
        var_15 = (arr_5 [i_1] [i_1]);
        arr_6 [i_1] = (max((((!((((arr_5 [i_1] [i_1]) ? 1285585352 : 11655348844882543929)))))), var_8));
        arr_7 [i_1] [i_1] = ((~(arr_5 [i_1] [i_1])));
    }
    var_16 = var_1;
    var_17 = (-9223372036854775807 - 1);
    #pragma endscop
}
