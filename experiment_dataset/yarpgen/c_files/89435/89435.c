/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((11292 << ((((var_5 ? var_12 : var_1)) - 3033400259))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [10] |= ((54236 ? 941793058664363218 : 54236));
        var_18 = var_1;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_19 = var_15;
        var_20 += (((((~((~(arr_5 [i_1] [i_1])))))) ? var_15 : (((((-9223372036854775805 ? (arr_4 [i_1]) : -8488537494863031182))) ? (((-(arr_4 [i_1])))) : (min(9223372036854775807, var_6))))));
        var_21 |= (((~368623780) ? (((((15477 ? -8488537494863031181 : 1924848742))) ? ((var_12 ? (arr_4 [i_1]) : -8403255880203478855)) : (-8488537494863031182 & 7704987238450229191))) : ((((((4052897467 ? 2372657767659656550 : var_2)) >= (min((arr_4 [i_1]), var_8))))))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_22 = ((~(arr_6 [10])));
        arr_8 [10] [11] = ((((((-4052897467 && (((arr_5 [i_2] [i_2]) <= 2876752634)))))) | (((arr_1 [i_2]) ? (var_4 ^ var_16) : (((arr_6 [i_2]) ? (arr_1 [i_2]) : (arr_0 [i_2] [3])))))));
        arr_9 [i_2] |= ((((var_0 >> (-54217 + 54231))) & var_15));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_23 = (arr_5 [i_3 + 1] [i_3 + 1]);
        var_24 = arr_5 [i_3] [i_3];

        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            arr_15 [i_3] [11] = ((var_15 <= ((8488537494863031180 ? -var_10 : ((4294967295 << (var_11 - 2865203510374201648)))))));
            var_25 = ((min(((min((arr_10 [i_3]), var_9))), 9223372036854775804)));
            arr_16 [i_3] [i_4] = ((-(arr_5 [i_4 - 1] [i_4 - 1])));
            var_26 -= (((((arr_4 [i_3 - 1]) & (arr_4 [i_3 - 1]))) + ((~(arr_5 [i_3 + 1] [i_3 + 2])))));
            var_27 *= ((((min((arr_10 [i_3 + 2]), (arr_10 [i_3 + 2])))) && 941793058664363218));
        }
        var_28 += ((((((arr_14 [i_3 - 1] [i_3 + 2]) ? (arr_14 [i_3 - 1] [i_3 + 2]) : var_6))) && (arr_4 [i_3])));
    }
    #pragma endscop
}
