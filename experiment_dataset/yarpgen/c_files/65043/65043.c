/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 *= ((((((min(var_10, var_14))))) ? (arr_3 [i_0]) : ((var_11 ? (((((arr_3 [0]) + 9223372036854775807)) << var_9)) : (arr_3 [i_0])))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_6 [i_0] = ((((min((arr_0 [i_0] [i_1]), (arr_2 [i_1])))) ? ((((~3899695826) | -var_8))) : (max(var_9, ((18446744073709551587 ^ (arr_2 [i_0])))))));
            var_16 = 0;
            arr_7 [15] [1] = ((((min(var_7, (arr_2 [i_0])))) ? (min((arr_4 [i_0]), 930447413881345173)) : ((min(205, ((0 << (var_0 - 10731824961807976861))))))));
        }
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            arr_11 [i_0] [i_2] = ((((min((min(1, (arr_8 [i_2] [i_0]))), 18446744073709551569))) ? (min(1, (arr_8 [i_2] [i_2 + 1]))) : 0));
            var_17 = 0;
            var_18 = var_10;
            var_19 &= (((min(var_1, (arr_2 [9])))) ? ((var_2 ? var_11 : (max(var_4, (arr_3 [i_0]))))) : (((~(arr_2 [i_0])))));
        }
        var_20 = (((((-(arr_10 [i_0])))) ? ((0 ? (arr_8 [23] [i_0]) : 28)) : (((253 ? var_7 : (arr_10 [i_0]))))));
    }
    var_21 = (max(((-7361 ? 1 : 170)), ((-2025510770 ? 0 : 1))));
    #pragma endscop
}
