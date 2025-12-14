/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((min(var_5, 2047))) ? (-28094 >= 0) : 2066))) ? (((((var_1 ? var_11 : 7088))) ? var_17 : -2047)) : ((max(178, 7088)))));
    var_20 = (((((((min(var_16, 0))) + var_8))) ? ((((((-2047 + 2147483647) << (var_10 - 56676)))) ? (min(var_5, var_10)) : var_6)) : (((var_8 ? ((var_11 ? 2047 : var_2)) : ((var_9 ? var_16 : var_14)))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((arr_1 [i_0 + 1] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0 - 2] [i_0 - 2]));
        arr_4 [i_0 - 2] = (((arr_1 [i_0] [i_0]) ? -405281597 : ((0 ? -7088 : 0))));
        arr_5 [i_0] = (((((-862678596 % (arr_0 [1] [i_0])))) ? 65535 : (((arr_2 [i_0]) | (arr_1 [7] [i_0])))));

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            arr_8 [i_0] [i_1] [i_1 - 2] = arr_6 [i_0] [i_1 - 1];
            arr_9 [i_0] [i_0] [i_0] = (((((arr_6 [i_1 + 1] [i_0]) ? 70 : 65)) | (arr_7 [i_0 - 2] [i_0 - 2] [i_1 - 1])));
            arr_10 [i_0] [i_1] [i_0] = ((((1 ? 14753826278989855583 : 29344))) ? ((2047 << (178 - 176))) : ((-1438888846 & (arr_0 [i_0] [i_1]))));
        }
        arr_11 [i_0 - 2] = (((!(arr_6 [i_0] [i_0]))) ? (arr_1 [i_0] [2]) : ((-2048 ? 7088 : (arr_0 [i_0] [i_0]))));
    }
    var_21 = 7088;
    #pragma endscop
}
