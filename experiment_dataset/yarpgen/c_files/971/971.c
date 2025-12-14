/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -15;
    var_18 = 15872;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = var_9;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_20 = ((var_6 ? 1135488124156492805 : var_13));
            var_21 |= (arr_3 [i_1]);
        }

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_10 [i_0] [i_2] = ((((max((arr_4 [i_0]), -95))) ? (min(2287853080, 255)) : (((max(106, -32762))))));
            var_22 = (min(((65281 ? (((min((arr_1 [i_0]), 0)))) : 0)), ((max(-5, (arr_8 [i_0] [9]))))));
        }
        arr_11 [i_0] = (min((min((arr_4 [i_0]), (arr_3 [i_0]))), (((arr_5 [i_0] [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_5 [i_0] [i_0] [7])))));
    }
    #pragma endscop
}
