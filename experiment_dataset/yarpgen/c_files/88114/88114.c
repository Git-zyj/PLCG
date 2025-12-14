/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = (min((~var_9), 24605));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (min((arr_1 [i_0]), (((~(arr_0 [i_0]))))));
        arr_2 [i_0] = ((max(((24 ? 24 : (arr_1 [i_0])), ((max((arr_1 [i_0]), 37)))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_17 = (min(var_17, var_2));
        arr_6 [i_1] = 219;
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_18 = (max(var_18, (((+(((arr_8 [12] [12]) ? (((var_13 ? var_4 : (arr_9 [6])))) : (arr_7 [11]))))))));
        var_19 = (arr_9 [i_2]);
        arr_10 [i_2] = var_2;
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_14 [i_3] = ((((~(arr_13 [i_3]))) & ((max((arr_13 [i_3]), (arr_13 [i_3]))))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_19 [i_3] = ((((((((arr_17 [i_4] [i_4] [i_4]) ? var_4 : -8))) ? (arr_0 [i_3]) : (arr_13 [i_4]))) < (((1099511627775 && (arr_1 [i_4]))))));
            var_20 = 9223372036854710272;
            arr_20 [2] [i_4] &= var_2;
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_24 [i_3] [10] [i_5] = ((-(((var_7 >= (arr_22 [i_3] [i_3]))))));
            var_21 = (arr_12 [i_5]);
            var_22 &= 24;
        }
        arr_25 [i_3] = ((((min((arr_13 [i_3]), (arr_13 [i_3])))) ? ((min((arr_13 [i_3]), (arr_13 [i_3])))) : ((max((arr_13 [i_3]), (arr_13 [i_3]))))));
    }
    var_23 = (var_1 ? -var_4 : ((24 + ((var_4 ? var_6 : 62)))));
    var_24 = ((-5222725218716047318 >= ((172 ? (((min(218, 228)))) : (45 | 1099511627775)))));
    #pragma endscop
}
