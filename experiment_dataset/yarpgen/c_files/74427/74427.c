/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((~(((((((arr_0 [i_0] [i_0]) == (arr_1 [i_0] [i_0]))))) + (arr_1 [i_0 - 2] [i_0])))));
        var_17 -= var_12;
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        var_18 += var_2;
        var_19 = var_8;
    }
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        var_20 = (max(var_20, (((!(((var_14 ? (((24 ? (arr_7 [i_2] [i_2]) : var_8))) : (arr_6 [i_2] [i_2])))))))));
        arr_8 [i_2] = (arr_7 [i_2] [i_2]);
    }
    var_21 *= (var_10 & var_2);

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_22 += (var_2 == (!var_13));
        arr_12 [i_3] [i_3] &= ((+(((arr_0 [i_3] [18]) ? (arr_0 [i_3] [18]) : var_11))));
    }
    for (int i_4 = 4; i_4 < 9;i_4 += 1)
    {
        arr_16 [i_4] = (max((min((min(var_1, (arr_13 [i_4]))), ((max(1, (arr_9 [i_4])))))), (((((var_5 ? -14505 : var_9)) == (((arr_3 [i_4] [i_4 - 2]) % var_13)))))));
        var_23 ^= var_16;

        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            arr_20 [i_4] [i_5 + 1] = (((!0) ? (max(var_12, ((var_1 ? (arr_19 [i_4] [i_4]) : 1443416070)))) : (((((arr_11 [i_4]) <= 40))))));
            var_24 = (min(var_24, (((var_5 ? ((((min(1, 1443416070))))) : var_10)))));
            var_25 = (((min((arr_11 [i_4]), var_9))) ? (min((max((arr_15 [i_5] [i_4]), var_5)), (((arr_7 [i_5] [i_4]) - var_13)))) : (((var_8 % (max((arr_9 [i_5]), var_16))))));
            var_26 += (+(((var_10 <= (((((arr_10 [i_5]) == var_13))))))));
        }
        var_27 += ((24 == (((var_14 == ((~(arr_6 [i_4] [i_4]))))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                var_28 = (max(var_28, ((min(((((max(var_16, (arr_9 [i_6]))) & (((arr_0 [i_7] [8]) & var_0))))), (arr_24 [0] [0] [i_6]))))));
                var_29 = ((+((max((arr_5 [i_7]), 32767)))));
            }
        }
    }
    #pragma endscop
}
