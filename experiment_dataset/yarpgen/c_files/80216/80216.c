/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_4 ? var_15 : (max(2285299651, var_15))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((-2136884236041468578 + 2147483647) >> (((max((((arr_1 [1] [0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))), ((2383776302 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))))) - 110)));
        var_20 += (max((((arr_1 [4] [i_0 - 1]) ? (((arr_1 [i_0] [i_0 + 1]) ? (arr_0 [1]) : (arr_0 [i_0]))) : (arr_0 [i_0 + 1]))), (arr_1 [i_0 + 1] [i_0 - 2])));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_21 = (max(var_21, (((-(((arr_3 [1]) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 + 1]))))))));
        arr_6 [i_1] = ((((arr_1 [i_1 + 1] [i_1]) ? (arr_1 [i_1 + 1] [22]) : (arr_1 [i_1 - 1] [i_1]))));
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        var_22 = (min(var_22, ((max((((arr_0 [i_2]) == (arr_8 [i_2] [i_2 - 1]))), (((arr_5 [i_2]) >= (arr_7 [i_2 + 1]))))))));
        arr_10 [i_2 - 2] [i_2] = ((((~(arr_3 [i_2])))) ? (arr_1 [i_2] [i_2 - 1]) : (arr_3 [i_2]));
        var_23 = ((((((arr_9 [i_2 - 2]) >> (((arr_1 [i_2 - 2] [i_2]) - 123))))) ? (((arr_8 [i_2 + 1] [i_2]) ? (arr_4 [i_2]) : (arr_9 [i_2 - 2]))) : (((arr_4 [i_2]) & (arr_8 [i_2 + 1] [i_2 + 1])))));
    }
    #pragma endscop
}
