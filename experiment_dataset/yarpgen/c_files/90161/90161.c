/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_4;
    var_16 = var_13;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_3 [14] [i_0] = 4094555045;
        arr_4 [i_0] = var_2;
        arr_5 [i_0] [i_0] = (arr_2 [i_0 - 2]);
        arr_6 [i_0] = var_4;
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_11 [i_1 + 3] = (max(var_9, (arr_7 [i_1 + 3] [i_1])));
        arr_12 [i_1] = (min((((((min(4387034942354145241, var_0))) ? -44433 : 44433))), (max((((27816 ? 1 : 40931))), var_12))));
        var_17 = (max((((((max(var_5, (arr_1 [i_1]))))) & (((arr_7 [2] [7]) ^ 21103)))), ((max((arr_10 [i_1 + 1] [i_1 - 1]), (arr_10 [i_1 + 1] [i_1 + 2]))))));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_18 = (max(var_11, (((arr_13 [i_2 - 1] [i_2]) ? (arr_13 [i_2 - 1] [i_2]) : 17425407025839500736))));
        arr_17 [i_2] = ((~(min((((17425407025839500758 ? 0 : 44456))), (arr_13 [i_2 + 1] [i_2 + 1])))));
        var_19 += 10376;
    }
    var_20 = (max(var_20, (((((44433 ? var_6 : var_14)))))));
    var_21 = ((!((min(var_4, (max(var_5, var_7)))))));
    #pragma endscop
}
