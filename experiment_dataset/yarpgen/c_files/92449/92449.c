/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_10 = (max(var_10, (((((min(((min(1, (-32767 - 1)))), (((arr_0 [i_0]) ? 6330 : (arr_1 [i_0])))))) ? var_2 : (((((arr_0 [i_0]) != (arr_1 [i_0 - 2]))) ? -32766 : ((var_1 ? (arr_1 [i_0]) : (arr_0 [i_0 - 2]))))))))));
        var_11 += (max(((((min(0, (arr_1 [i_0]))) ? (arr_1 [i_0 + 2]) : (max(var_2, (arr_1 [3])))))), (max(var_3, (arr_0 [i_0])))));
        var_12 += ((!((max(((min(-7881, -32755))), (~var_2))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (!(((((2048 ? var_1 : (arr_3 [i_1] [i_1]))) | (-32767 - 1)))));
        var_13 = (arr_3 [i_1] [i_1]);
        var_14 ^= (arr_3 [i_1] [i_1]);
    }
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        var_15 = (max((((~(((-32745 + 2147483647) >> 1))))), (arr_5 [i_2 + 2] [i_2 - 2])));
        var_16 = var_6;
        arr_8 [i_2 - 2] = -75;
        arr_9 [i_2] = (arr_5 [i_2] [i_2]);
    }
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_17 = (min(var_17, ((((var_5 ? (arr_3 [i_3 - 2] [i_3]) : var_7))))));
        arr_12 [13] [i_3] |= (((-32755 ? 1 : (((arr_10 [i_3] [i_3 + 2]) % 1546959267)))));
        var_18 = (min(var_18, var_8));
    }
    var_19 *= max(var_4, var_8);
    var_20 = 134;
    #pragma endscop
}
