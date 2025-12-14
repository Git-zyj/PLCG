/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_1;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        var_20 = ((~((~(arr_0 [i_0])))));
        var_21 = ((min(107, 2786111079)));
        var_22 |= 1277433913;
        arr_4 [3] = ((!(((1277433913 ? 157 : ((76 ? 2629270045 : 149)))))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_1] [i_1] [i_1] = ((((((arr_8 [i_2 - 1] [i_2] [i_2]) ? (arr_8 [i_2 - 1] [i_2] [i_2]) : (arr_8 [i_2 - 1] [i_2] [i_2])))) ? (arr_7 [i_1 - 1]) : ((max(103, 2629270061)))));
            arr_10 [i_1] [i_1] = (arr_7 [i_2 - 1]);
        }
        var_23 = (max(var_23, (arr_6 [i_1])));
        arr_11 [1] [1] = (~85);
        var_24 = (((~(arr_7 [i_1 + 1]))));
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_15 [10] = ((arr_13 [i_3] [i_3]) ? (!169) : ((-(~2150434252))));
        var_25 &= (arr_0 [9]);
        arr_16 [i_3] = arr_1 [i_3];
        arr_17 [i_3] [i_3] = (arr_5 [i_3]);
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_20 [i_4] = (arr_19 [i_4] [i_4]);
        var_26 ^= -1586790718;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_23 [i_5] = ((((1586790717 ? (arr_7 [i_5]) : (arr_6 [i_5]))) + (arr_6 [i_5])));
        arr_24 [i_5] [i_5] = (((((-8322385084544254972 ? 1 : (arr_21 [i_5])))) ? (arr_21 [i_5]) : (((arr_21 [i_5]) ? (arr_21 [i_5]) : (arr_7 [i_5])))));
    }
    #pragma endscop
}
