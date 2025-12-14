/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(var_7, 5774268651920551354)) % ((((var_4 + 2147483647) >> (var_2 - 2652708172512202294)))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_21 = ((var_19 - ((max(var_9, 1)))));

        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            var_22 = (min(var_22, (((((arr_0 [i_1 - 4] [i_0 + 1]) / (arr_3 [i_0 + 2] [i_0 + 3] [i_0 + 3])))))));
            var_23 = (max(var_23, ((((((var_0 && var_19) - ((var_9 ? var_1 : var_18)))) ^ var_15)))));

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                var_24 = (min(var_24, ((((!var_17) >> ((((var_4 ? (arr_6 [i_2 - 1] [i_2 - 1]) : var_13)) + 526276461572496712)))))));
                var_25 &= var_3;
                arr_8 [i_1] [15] = (min(((var_13 ? var_17 : var_11)), -1));
                arr_9 [i_0] [i_1] [11] [i_2] = ((~((-(arr_3 [i_0 - 1] [i_1 - 2] [i_2])))));
            }
        }
        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            var_26 ^= ((((((-(arr_0 [i_3] [i_3 - 1])))) / ((-1 ? var_2 : var_12)))));
            var_27 = var_9;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_28 &= ((~(arr_7 [i_0 + 1] [i_0 + 3] [i_0 - 1] [i_0 + 3])));
            arr_14 [i_4] [i_4] = ((var_4 ? var_18 : (arr_13 [i_0 + 2] [4] [i_0 - 1])));
            var_29 = (~var_2);
        }
    }
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        var_30 -= (min((min((min(1, var_17)), (var_4 + var_9))), var_0));
        var_31 = (max(var_31, var_19));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 9;i_6 += 1)
    {
        var_32 = (~(arr_13 [13] [i_6] [i_6]));
        arr_21 [i_6] = ((var_19 ? var_13 : var_6));
        arr_22 [i_6] [i_6] = (!var_5);
        var_33 ^= (!var_0);
        arr_23 [i_6] [i_6] = ((var_3 ? 1595246365 : var_14));
    }
    var_34 ^= var_11;
    var_35 ^= (((max(var_6, var_3)) >= var_5));
    #pragma endscop
}
