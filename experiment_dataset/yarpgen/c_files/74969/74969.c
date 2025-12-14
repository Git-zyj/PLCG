/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(max((var_7 > var_6), (var_6 + 1)))));
    var_14 = var_8;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_9;
        var_15 &= var_4;
        var_16 ^= (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_17 *= ((3 & ((((arr_4 [i_1 + 2]) | (arr_6 [2] [2]))))));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_18 = (max(var_18, ((((((1260606935 - (arr_9 [i_1 + 1] [i_1 + 3] [i_1])))) ? (arr_7 [i_1]) : (arr_4 [i_1]))))));
            arr_10 [i_1] [i_2] [i_1] = (i_1 % 2 == 0) ? (((64755 * ((var_4 ? (((arr_3 [i_1]) >> (var_1 - 15816))) : (arr_7 [i_1])))))) : (((64755 * ((var_4 ? (((((arr_3 [i_1]) + 2147483647)) >> (var_1 - 15816))) : (arr_7 [i_1]))))));
        }
        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {
            var_19 = ((((((arr_11 [i_1] [i_3 - 2] [i_1]) ? (arr_3 [i_1]) : ((1 ? 64755 : 1539))))) ? (arr_12 [i_1]) : (((~(arr_5 [i_1 + 2]))))));
            arr_14 [i_1] [i_1] [i_3] = (min(((((((arr_3 [i_1]) ? (arr_4 [i_1 + 1]) : 780))) ? ((((arr_8 [i_3 + 1] [i_1 + 1]) > var_10))) : (arr_13 [i_3] [i_3]))), 1290542492));
            var_20 = var_9;
            var_21 ^= (((((((((-251153002 + 2147483647) >> (var_8 + 8378760449038741190)))) ? 1 : 949493587608543999))) ? ((7417023750515060472 ? ((max(var_10, var_1))) : ((var_12 ? var_10 : (arr_7 [1]))))) : (((arr_3 [i_3]) ^ (((arr_7 [22]) / 780))))));
            arr_15 [i_1] = 1290542492;
        }
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            var_22 = (arr_4 [i_4 + 1]);
            arr_18 [i_1] = (arr_13 [i_1 + 2] [i_4]);
        }
        arr_19 [i_1] [8] = (arr_6 [i_1] [i_1]);
    }
    var_23 = (max(var_23, (((((max((var_0 + var_0), var_12))) ? (max(var_0, 127064851)) : (max(33997, var_9)))))));
    var_24 = (min(var_24, var_12));
    #pragma endscop
}
