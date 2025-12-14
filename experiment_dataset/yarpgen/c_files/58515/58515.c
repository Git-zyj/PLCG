/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_11 |= (((((-110 ? 106 : (arr_5 [i_1 + 1] [i_1 + 1])))) ? ((-125 ? (((arr_4 [i_0] [i_0] [3]) + var_9)) : (arr_5 [i_1 + 1] [i_1 + 1]))) : ((((-47 == (((var_7 || (arr_1 [i_0]))))))))));
            var_12 = ((!((((3231948551852185789 / 62850) ? (((arr_2 [i_0] [i_1]) + (arr_5 [i_0] [i_0]))) : 68)))));
            var_13 ^= (((0 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))));
            arr_6 [i_1] = var_1;
            var_14 = (max(var_14, (arr_4 [i_0] [10] [i_1 + 1])));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_15 = (max(var_15, (((784046879 ? (max(110, 0)) : -16)))));
            var_16 = (max(var_16, 25));
            var_17 -= ((min((~35), (arr_8 [i_0] [i_2]))));
            var_18 -= var_6;
        }
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {

            for (int i_4 = 3; i_4 < 11;i_4 += 1)
            {
                var_19 = (max(1015808, 18446744073709551598));
                var_20 ^= (((((arr_11 [i_4]) + 2147483647)) << (((min((arr_2 [i_3 - 1] [i_0]), ((var_1 << (((arr_11 [i_4]) + 16518)))))) - 443))));
                var_21 = -120;
                var_22 = (((min((arr_8 [i_3 + 1] [i_4 - 1]), (min((arr_1 [i_3 - 1]), var_10)))) & (((-(((arr_8 [i_0] [i_0]) ? (arr_9 [i_0] [i_3] [i_4]) : var_2)))))));
                arr_14 [i_4] [i_3] [2] = ((~((min((arr_2 [i_0] [i_4]), (arr_2 [i_0] [i_4]))))));
            }
            var_23 += ((((min(((var_0 ? -67 : (arr_3 [i_3]))), ((max(var_2, 230)))))) ? (((((arr_5 [4] [i_3 - 1]) <= ((max((arr_11 [7]), (arr_2 [i_3 - 1] [i_0])))))))) : (((arr_2 [0] [i_0]) ? (arr_5 [i_3 + 2] [i_3 + 1]) : (max(var_1, (arr_12 [i_0] [i_0] [i_3 + 2] [i_0])))))));
        }
        var_24 = ((arr_10 [6] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_0]) : (((arr_3 [i_0]) ^ (arr_9 [i_0] [i_0] [i_0]))));
    }
    var_25 = var_10;
    #pragma endscop
}
