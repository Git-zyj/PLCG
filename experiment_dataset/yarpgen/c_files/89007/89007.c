/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-8 ? 11673925105783846174 : 55));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = min(var_2, 31);
        var_11 = (max(var_11, -1000684616));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] [13] = -var_9;
        var_12 = 111;

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_13 = ((+((var_8 ? (((arr_2 [14]) ? (arr_1 [i_1] [20]) : var_6)) : (arr_10 [9] [7])))));
            var_14 = -var_6;
            arr_12 [i_1] [14] [i_2] = ((((!(arr_11 [11]))) ? var_7 : var_3));
            var_15 = (arr_6 [i_1] [11]);
            var_16 = (min(var_16, (((var_3 ? ((((min(var_3, -3643854269085249644)) + 4093893887))) : 134217727)))));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_17 = ((arr_2 [2]) ? (~-1846221827456353779) : ((1152921504606846975 ? ((18446744073575333888 ? -110 : 12603028543705056385)) : 12146519644539745391)));
            arr_15 [i_1] = var_6;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_20 [0] [i_1] = ((var_1 & ((var_4 ? 134217718 : var_9))));
            arr_21 [i_1] = var_8;
            arr_22 [4] [14] [2] &= (!var_4);
            arr_23 [i_1] [2] [i_1] = (((((-21 ? var_6 : -18114))) ? (((-(arr_14 [i_1] [i_1])))) : 2713047009));
        }
        var_18 = var_0;
    }
    #pragma endscop
}
