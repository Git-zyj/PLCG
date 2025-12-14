/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((~(!1)))) * (min((max(var_6, var_1)), var_1))));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_11 = (arr_2 [i_0 - 2]);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_12 = ((!(((((min(5946589945213847278, -5946589945213847287))) ? (arr_1 [i_1]) : (arr_2 [i_0 - 1]))))));
                var_13 = (arr_1 [5]);
                var_14 = ((((~(arr_7 [i_0 - 2] [i_0] [i_0] [i_0 - 2]))) * (arr_7 [1] [i_0] [i_0] [5])));
                var_15 = ((!((max((max(35184372088831, 16256)), (arr_6 [i_0] [i_2]))))));
            }
            var_16 = (-(((((1 ? var_5 : var_8))) ? (-5946589945213847265 - 48326) : (arr_6 [i_0] [i_1]))));
        }
    }
    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {
        var_17 = (arr_3 [i_3]);

        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            var_18 = min((max((min(18446744073709551614, (arr_6 [i_3] [i_3]))), ((max(3149398742691075760, (arr_2 [i_3])))))), ((-var_3 - (arr_12 [1] [i_4] [i_4]))));
            var_19 = var_4;
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_20 = ((~(max(var_4, ((max(var_7, var_7)))))));
            var_21 = var_1;
        }
        var_22 = ((((((arr_13 [6] [9]) != var_6))) * (((arr_0 [i_3 - 2]) ? (arr_0 [i_3 + 2]) : (arr_0 [i_3 - 2])))));
        var_23 &= (((-3149398742691075768 <= 5946589945213847286) + var_4));
    }
    for (int i_6 = 2; i_6 < 16;i_6 += 1)
    {
        var_24 &= (!var_6);
        var_25 = arr_19 [i_6];
    }
    #pragma endscop
}
