/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (67108863 < 30331);
    var_20 = (~var_14);
    var_21 = var_5;
    var_22 = (5511 * 35205);

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] &= (arr_2 [i_0]);
        arr_4 [i_0] = (max(((min((min(3377803723, -122)), 35205))), (((max(121, 16704159801323150006)) / 35206))));
        var_23 *= (((min((3151658740124381228 >= 122), (min((arr_1 [i_0] [12]), (arr_0 [i_0] [i_0]))))) ^ (((~(((arr_2 [i_0]) ? var_5 : -100)))))));
        arr_5 [i_0] = var_13;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_10 [i_1] = 774967582;
        arr_11 [i_1] = ((3377803723 ? 30337 : 65535));
        arr_12 [i_1] [i_1] = (((((-(arr_7 [i_1])))) ? ((var_13 / (arr_1 [i_1] [i_1]))) : (arr_1 [10] [i_1])));
        arr_13 [i_1] |= (122 * 8599516723588769443);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_18 [i_2] = ((9879562169598302662 ? ((-(arr_15 [i_2] [i_2]))) : (((arr_15 [i_2] [i_2]) ? (arr_15 [i_2] [i_2]) : (arr_14 [i_2])))));
        var_24 = (arr_0 [i_2] [i_2]);
    }
    #pragma endscop
}
