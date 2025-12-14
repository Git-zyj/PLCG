/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 = -13;

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_21 |= var_14;
            var_22 ^= ((((max((arr_3 [0]), (arr_3 [i_1])))) ? (((arr_2 [i_1]) ^ var_11)) : var_15));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_23 = ((-((max(-26, (arr_4 [i_0] [i_2] [i_0]))))));
            arr_6 [i_0] [i_0] [i_2] = var_10;
            var_24 = 16762932374023894622;
            var_25 = (max(var_25, ((((~((var_7 & (arr_5 [i_0])))))))));
            var_26 = ((((~(arr_1 [i_0]))) != (arr_1 [2])));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_10 [0] [i_3] = (max(13, ((-(arr_8 [i_0] [7] [i_3])))));
            var_27 ^= ((((max((((arr_2 [i_0]) ? -14 : -30)), ((var_12 ^ (arr_0 [i_0])))))) & (((arr_4 [i_0] [i_0] [i_3]) * (arr_3 [i_0])))));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_28 = (min(var_28, ((((min(var_14, (arr_8 [i_0] [i_0] [i_4]))) & (((((var_18 - (arr_9 [i_0] [i_0] [i_4])))))))))));
            var_29 &= (((((~137) ? (((arr_5 [3]) ? var_1 : var_12)) : var_6)) < (((~(var_10 ^ var_0))))));
            arr_14 [i_0] [i_0] = (arr_7 [i_0] [i_4]);
        }

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_30 *= (min(65512, 42498));
            var_31 = (min(var_31, ((min((((~(arr_16 [i_0])))), 12)))));
        }
        var_32 |= min((arr_11 [i_0] [i_0] [i_0]), ((((arr_16 [i_0]) ? var_14 : (arr_16 [i_0])))));
        var_33 &= (arr_4 [i_0] [i_0] [i_0]);
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_34 -= ((((((arr_7 [i_6] [12]) ? (arr_7 [i_6] [i_6]) : (arr_7 [i_6] [i_6])))) ? (((((arr_18 [i_6]) || var_12)))) : ((-(var_12 / 4385361133402923403)))));
        var_35 |= (min(2133599899921784227, (arr_15 [i_6])));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {
        var_36 = (min((arr_16 [7]), (((-(arr_19 [i_7]))))));
        arr_23 [i_7] [4] = ((((!((var_12 < (arr_16 [i_7])))))));
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_37 = 23043;
        var_38 -= arr_21 [i_8] [i_8];
    }
    #pragma endscop
}
