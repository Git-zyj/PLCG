/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((((~var_9) + (!var_5))));
    var_19 ^= var_4;
    var_20 = ((var_11 ? (((min(var_16, var_4)))) : var_6));
    var_21 = ((~(max(var_7, -var_5))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [11] [i_0] = ((-18 ? 190 : -18));
        var_22 = var_9;
        arr_4 [i_0] = ((((!(arr_0 [4] [i_0]))) ? var_5 : (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = (min(4160598571, 1));
        arr_8 [4] [10] = -var_17;
        arr_9 [i_1] = var_1;
        var_23 = max((((var_3 && ((((arr_6 [i_1] [i_1]) % (arr_6 [i_1] [i_1]))))))), (((arr_2 [i_1]) / (arr_2 [i_1]))));
        var_24 = (max((~var_11), ((var_0 | (arr_5 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_12 [1] = (arr_10 [i_2]);
        var_25 += (!var_17);
        var_26 = (max(var_26, 21955));
        var_27 = (min(var_27, ((min(((((min(var_4, 90))) ? var_8 : var_0)), (((((-(arr_11 [i_2] [1])))) ? ((-(arr_2 [12]))) : ((min(var_17, var_14))))))))));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_28 -= (((!((max(1, 4160598571))))));
        arr_17 [i_3] = ((var_16 ? ((~(arr_13 [i_3]))) : (((max((arr_13 [i_3]), var_7))))));
        arr_18 [i_3] = (~19173);
        var_29 = (arr_16 [i_3] [i_3]);
    }
    #pragma endscop
}
