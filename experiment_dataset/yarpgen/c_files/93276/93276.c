/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = 143;
        arr_4 [i_0] = (~143);
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] = min(((19514 ? ((1 ? 19514 : -2038474455)) : (arr_1 [i_1]))), (((((18371028474280963543 ^ (arr_6 [i_1]))) == 155))));
        arr_8 [i_1] = max((min((arr_5 [i_1]), ((max(-19506, 8388))))), -1);
        arr_9 [i_1] = (min((min(-var_13, 26682)), var_2));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_12 [i_2] = (18107471287737636825 - 20162);
        var_21 ^= ((2147483647 == (max(-2073, (arr_10 [i_2])))));
    }
    #pragma endscop
}
