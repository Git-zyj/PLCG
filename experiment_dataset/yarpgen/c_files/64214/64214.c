/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_10;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((min((arr_0 [i_0]), (min((arr_1 [i_0]), (arr_0 [i_0]))))), ((min((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_14 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_15 = (min(var_15, ((max((arr_6 [i_1]), (arr_3 [i_1] [i_1]))))));
        var_16 -= (max((arr_3 [i_1] [i_1]), (arr_6 [i_1])));
        arr_7 [i_1] = (arr_4 [i_1]);

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_17 = (arr_9 [i_1] [i_1] [i_1]);
            arr_10 [i_1] [i_2] = (min((arr_4 [i_1]), (arr_3 [i_1] [i_2])));
            var_18 ^= ((max((arr_5 [i_2]), (arr_3 [i_1] [i_2]))));
        }
    }
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        var_19 = (arr_4 [i_3]);
        var_20 = (arr_5 [i_3]);
        arr_15 [i_3] = (arr_3 [i_3] [i_3 - 2]);
        arr_16 [i_3] = arr_5 [i_3];
    }
    var_21 = var_5;
    #pragma endscop
}
