/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = (max(-6658542936732271767, ((((((arr_1 [i_0] [i_0]) + 2147483647)) << (((((min(var_1, (arr_1 [i_0] [i_0]))) + 530474889)) - 8)))))));
        var_13 = (min((arr_0 [i_0]), (min((min(var_7, (arr_2 [i_0]))), (((~(arr_2 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] = ((((((var_2 + -6658542936732271751) ? (arr_2 [i_1]) : ((-2686893959931781871 + (arr_1 [i_1] [i_1])))))) ? ((((max(var_6, 2686893959931781890))) ? (arr_0 [i_1]) : (arr_0 [i_1]))) : (((-(max(676852502, var_11)))))));
        var_14 = (max(((((max((arr_2 [i_1]), var_9)) >> (2475335195 - 2475335170)))), (~var_7)));
    }
    var_15 = (((0 ? 40792 : 7085)));
    var_16 = ((~(((max(-676852478, var_10)) << (var_11 + 2023981019)))));
    #pragma endscop
}
