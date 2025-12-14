/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = var_5;
        arr_3 [i_0] |= var_1;
        arr_4 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_5));
        var_12 &= ((var_6 >> (var_6 - 552202869)));
    }
    for (int i_1 = 2; i_1 < 7;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_10 [i_1] = ((((((max((arr_8 [i_2] [i_2] [i_1]), 3)) >> (((max(var_5, (arr_5 [i_1 - 1] [i_2]))) - 316977680))))) ? var_1 : (((var_9 != var_8) ? ((max(var_3, var_2))) : var_8))));
            var_13 = (((arr_5 [i_1] [i_1 + 2]) ? (arr_1 [i_1 + 1]) : (arr_5 [i_1] [i_1 + 1])));
            arr_11 [i_1] = (max((-62177554 + 62177553), -62177541));
            var_14 = ((arr_6 [i_1] [3]) << ((((((max(var_6, (arr_8 [i_2] [1] [i_1])))) ? (arr_0 [i_1 + 3] [i_1 - 1]) : -86)) - 3379872004255111324)));
        }
        var_15 -= ((-972173359 ? 88732317 : -96));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_16 = ((((-62177541 || (arr_14 [i_3]))) ? var_9 : (arr_13 [i_3])));
        var_17 = (max(var_17, ((((arr_0 [i_3] [i_3]) + (((arr_13 [i_3]) ? (arr_0 [i_3] [i_3]) : (arr_13 [i_3]))))))));
        var_18 = (min((((((62177554 ? 31744 : (arr_1 [i_3])))) ? var_10 : ((min((arr_12 [i_3] [i_3]), var_8))))), -62177554));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = (126 ? ((1795900832 ? 1528486462 : 126)) : var_1);
        var_19 = (min(var_19, (((((((((var_8 / (-2147483647 - 1)))) + var_9))) ? (max(var_0, 62177541)) : ((-72 ? 88732317 : ((-16 / (-2147483647 - 1))))))))));
        arr_18 [i_4] = ((((((((1528486462 ? -3996064660844332935 : (arr_1 [i_4])))) ? var_9 : (~6783251337324752134)))) ? ((((arr_1 [i_4]) ? (arr_1 [i_4]) : (var_4 - 105)))) : ((33 % (((arr_0 [i_4] [i_4]) + var_10))))));
        var_20 = (max(var_20, ((((arr_1 [i_4]) ? (arr_1 [i_4]) : (arr_1 [i_4]))))));
    }
    #pragma endscop
}
