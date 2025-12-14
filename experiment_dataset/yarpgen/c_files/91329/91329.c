/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_8));
    var_12 = (((((((var_0 ? var_0 : var_8))) ? ((var_2 ? var_4 : -103256211)) : ((var_0 << (var_8 - 36))))) << (var_4 - 1602970275)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_13 *= (((var_0 <= var_6) && ((((((arr_2 [5]) + 2147483647)) >> (var_9 + 3841127861958357037))))));
        arr_3 [i_0] = (((arr_0 [i_0 - 1] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : var_7));
        arr_4 [i_0 - 2] [i_0] = ((var_3 | (((var_1 ? 54043195528445952 : var_7)))));
        var_14 = (((arr_2 [i_0 - 2]) ? (((arr_1 [i_0] [i_0]) ? var_5 : var_4)) : (((var_5 <= (arr_0 [i_0 + 1] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_15 = ((((((arr_5 [8] [i_1 - 1]) ? (arr_1 [4] [i_1]) : 7583373052650260350))) ? ((((arr_0 [7] [i_1 - 2]) ? (arr_5 [9] [9]) : (arr_2 [i_1])))) : var_2));
        var_16 = var_0;

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_17 = (arr_8 [i_2] [i_1]);
            arr_11 [i_2] [i_1] = ((var_2 != ((((arr_8 [i_2] [i_1]) ? (arr_7 [i_1]) : var_10)))));
            var_18 |= (((arr_8 [i_1 + 1] [i_1 - 1]) >= var_6));
        }
    }
    var_19 = (max(var_0, (((((var_5 ? 4294967286 : var_10)) < (min(var_7, 54043195528445969)))))));
    var_20 = (min(var_20, (max(((((var_6 > var_2) ? var_8 : (var_6 & var_5)))), (var_6 & var_1)))));
    #pragma endscop
}
