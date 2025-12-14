/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_4 [8] [i_0] = ((((((var_5 >> 1) ? (((var_0 + 2147483647) << (9007199254740991 - 9007199254740991))) : ((max(1, var_8)))))) ? ((((((((arr_0 [2] [i_0]) <= (arr_0 [i_0] [i_0 + 1]))))) & ((1 ? (arr_0 [8] [i_0]) : 1))))) : (max(((max(var_2, -32754))), 12864311463633666452))));
        arr_5 [i_0] [i_0] = (arr_2 [i_0 - 2] [i_0 + 2]);
        arr_6 [6] &= (arr_1 [i_0 - 1] [i_0]);
        arr_7 [i_0] = 58372741;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 = (arr_9 [i_1]);
        var_14 *= ((1 > ((~(arr_8 [i_1])))));
    }
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        var_15 = (min(var_15, ((max(((((arr_10 [i_2 - 1] [i_2]) + (arr_10 [i_2 + 1] [i_2 + 1])))), 12296471776024849812)))));
        arr_12 [i_2] = (((((min((arr_9 [i_2 - 1]), (arr_9 [i_2 - 3]))))) <= (arr_9 [i_2 - 1])));
        var_16 *= (max(((((32736 && 1) || (arr_10 [14] [14])))), (((((arr_8 [14]) || (arr_8 [i_2]))) ? (-17 || var_4) : (-32767 - 1)))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = (((arr_8 [i_3]) ? (((arr_9 [i_3]) ? var_7 : var_8)) : (((var_3 != (arr_8 [i_3]))))));
        var_17 = (((((((arr_1 [i_3] [i_3]) + (arr_3 [4] [i_3]))) + 9223372036854775807)) >> (((arr_13 [1] [i_3]) - 1358210373))));
        var_18 = (arr_13 [i_3] [i_3]);
        arr_16 [9] [i_3] = (((arr_8 [i_3]) / var_9));
        arr_17 [i_3] = ((9223372036821221376 ? (arr_10 [1] [i_3]) : 32753));
    }
    var_19 = ((var_6 >> ((((var_8 ? var_1 : 536870911)) - 18446744073709522887))));
    #pragma endscop
}
