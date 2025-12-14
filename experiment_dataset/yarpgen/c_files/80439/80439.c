/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = (((arr_1 [i_0 - 1]) > (arr_1 [i_0 - 1])));
        var_21 += (((arr_1 [i_0 - 1]) >= (arr_0 [6])));
        arr_2 [8] |= (~(arr_1 [i_0 - 1]));
        arr_3 [i_0] [i_0] = (((~(arr_0 [i_0]))));
    }
    var_22 = (min(var_22, ((((461192155 < var_13) | var_14)))));

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] = (((arr_6 [i_1] [i_1]) > (65535 - 9223372036854775807)));
        var_23 = (~((((arr_4 [i_1] [i_1]) > ((~(arr_5 [i_1])))))));
        var_24 = ((((~(arr_6 [i_1] [i_1]))) * (((min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))))));
        arr_9 [i_1] = ((((!(~60))) ? (((~(arr_7 [i_1])))) : 1150455898));
    }
    #pragma endscop
}
