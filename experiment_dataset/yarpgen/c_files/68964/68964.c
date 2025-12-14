/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = ((((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (((100 <= (arr_0 [i_0] [i_0]))))))) ? (arr_0 [i_0] [i_0]) : ((((-(arr_1 [5])))))));
        arr_2 [3] = (max((((((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : var_4)) + 2147483647)) >> (-100 + 129))), (((((8555638539586931732 + (arr_0 [i_0] [i_0])))) ? (max((arr_0 [i_0] [i_0]), (arr_1 [i_0]))) : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_18 |= ((((min((arr_1 [i_1]), (arr_3 [6]))) >= (max((arr_5 [1]), (arr_4 [4] [i_1]))))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_19 = (~(arr_0 [1] [i_2 + 1]));
            var_20 = (min(var_20, ((((arr_5 [4]) ? (arr_8 [i_1] [0]) : (arr_8 [i_1] [2]))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_21 = (arr_10 [i_1]);
            var_22 = 101;
        }
        var_23 = (((((((max((arr_4 [i_1] [i_1]), (arr_9 [i_1] [i_1])))) ? 1 : ((((arr_7 [i_1] [i_1]) ? 3748382762 : var_6)))))) ? (((-101 ? 1786771276 : -101))) : (min((min(101, -8790315801481210037)), ((((arr_5 [i_1]) ? 1 : (arr_5 [i_1]))))))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_24 = (arr_3 [0]);
        var_25 = (arr_12 [i_4] [i_4] [i_4]);

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_17 [i_4] = ((((((((~(arr_0 [i_4] [i_4])))) ? ((min((arr_9 [i_4] [i_4]), (arr_9 [i_4] [i_4])))) : (arr_3 [i_4])))) ? (max((max(var_1, 1)), (1 ^ 78))) : (((~((~(arr_13 [i_4]))))))));
            var_26 = arr_9 [i_4] [i_4];
            arr_18 [i_4] = (arr_1 [i_4]);
        }
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            var_27 = (((((-(((arr_21 [i_4]) ? (arr_8 [i_4] [i_4]) : 78))))) ? ((((arr_4 [i_4] [i_6 + 2]) > ((var_15 ? -122 : var_0))))) : (10519066951714785388 > 1786771276)));
            arr_23 [9] [i_4] = (((((((max((arr_7 [i_4] [i_4]), (arr_9 [i_4] [i_4])))) ? var_5 : (arr_8 [i_6 + 4] [i_4])))) ? (((((var_1 ? var_12 : (arr_6 [i_4] [i_4] [i_4]))) ^ ((~(arr_19 [i_4] [i_6 + 4] [i_4])))))) : (arr_15 [i_4] [i_4])));
        }
        var_28 = (-101 - 611460484);
        arr_24 [i_4] = ((var_6 == (-var_14 && 1786771276)));
    }
    var_29 = 10519066951714785402;
    var_30 &= ((-(min(var_7, ((var_6 ? 10714 : var_8))))));
    var_31 = (min(var_31, (((var_3 ? (var_0 != var_9) : var_5)))));
    #pragma endscop
}
