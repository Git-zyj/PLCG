/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((((((61883 ? 3653 : 2147483647))) || var_6)) && var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = ((-(arr_1 [i_0] [i_0])));
        arr_3 [i_0] = var_13;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_18 = (((arr_5 [i_0] [i_0] [i_1]) ? ((((arr_5 [i_0] [i_0] [i_1]) > (arr_2 [i_0])))) : (arr_1 [i_1] [i_0])));
            arr_6 [i_0] [i_1] = (((arr_2 [i_0]) ? (((arr_4 [i_1] [i_1] [i_0]) | (arr_2 [i_0]))) : (((var_3 ? (arr_5 [i_0] [i_1] [i_1]) : (arr_0 [i_0] [i_0]))))));
        }
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_19 -= (((arr_7 [i_2]) ? (min((((arr_8 [15]) ? (arr_8 [i_2]) : 4294967295)), ((max((arr_8 [i_2]), (arr_8 [i_2])))))) : ((max((((arr_9 [i_2] [9]) >> (var_6 + 48))), (arr_8 [i_2]))))));
        var_20 = (((arr_8 [15]) ? (((((var_9 ^ (arr_8 [i_2])))) ? (max(var_12, 32)) : 1)) : ((((arr_8 [i_2]) * (min((arr_8 [10]), (arr_9 [11] [11]))))))));
        arr_10 [0] = ((((((4294967295 * 0) ? ((var_0 ? 255 : 85)) : (arr_7 [i_2])))) ? (((((~(arr_8 [i_2])))) ? (((arr_8 [5]) ? (arr_7 [i_2]) : (arr_8 [2]))) : var_12)) : (((arr_7 [i_2]) ? (((arr_8 [i_2]) ? (arr_9 [i_2] [i_2]) : (arr_9 [i_2] [i_2]))) : (arr_7 [i_2])))));
    }
    #pragma endscop
}
