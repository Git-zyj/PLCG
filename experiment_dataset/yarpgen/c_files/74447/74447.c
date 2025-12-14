/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_15 &= (((32767 ^ var_8) ? (arr_2 [i_0] [i_0 - 2]) : (((115 < (arr_1 [i_0 + 1] [i_0]))))));
        var_16 = (arr_1 [i_0 + 1] [i_0 - 2]);
        var_17 = (((arr_2 [i_0 - 2] [i_0 + 1]) ? -57 : (arr_2 [i_0] [i_0 + 1])));
        var_18 = ((~(arr_0 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_6 [i_1] = (arr_3 [i_1 + 1] [11]);
        var_19 = (max((((arr_4 [7]) ? ((((arr_3 [i_1] [i_1]) >> 0))) : (max((arr_5 [i_1] [i_1]), var_11)))), (min((((3574584151032299901 ? (arr_4 [i_1]) : 66))), (((arr_3 [i_1] [i_1]) ? 32098 : 2814628364125111973))))));
        var_20 = ((-32767 ? (arr_5 [i_1 + 1] [i_1 + 1]) : (((!(arr_5 [i_1 + 1] [i_1 + 1]))))));
    }
    var_21 ^= var_3;
    #pragma endscop
}
