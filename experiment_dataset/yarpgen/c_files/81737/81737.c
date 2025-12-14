/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 13;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_15 = (!var_8);
            var_16 = (arr_1 [i_1]);
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_17 = (arr_3 [i_0] [i_0] [4]);
            var_18 = (min(var_18, ((min(13, 112)))));
        }
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            var_19 = (min(var_19, var_7));
            var_20 = (min(4829285046502605031, -28));
            arr_10 [i_0] = ((~(min((((arr_0 [i_0]) ? 29 : var_1)), (arr_3 [i_0 + 1] [5] [i_3])))));
            var_21 = (max(var_21, (max((arr_5 [i_0] [i_3 - 1]), (min((var_1 == 0), (min(-9, (arr_6 [10] [i_3])))))))));
            arr_11 [i_0] [i_3] = (((((63 + (max((arr_0 [i_0]), var_1))))) ? ((((((var_7 > (arr_3 [i_0] [i_3] [i_3]))))) ^ ((var_3 ? (arr_6 [i_0] [4]) : var_1)))) : (-1 >= var_2)));
        }

        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            arr_14 [i_0] = ((((min((var_11 == var_11), var_4))) & (arr_3 [i_0] [i_0] [i_0])));
            var_22 *= (((arr_1 [i_0]) && ((min((((arr_3 [i_0 + 1] [i_0] [i_4]) ? 4057587230 : var_2)), (((-(arr_0 [i_0])))))))));
            var_23 *= (arr_6 [6] [i_0 + 1]);
            arr_15 [i_0] [i_4] = (min(((min((217 || -28), (13 || 193)))), -28));
        }
    }
    var_24 *= var_1;

    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        arr_18 [i_5] = 63;
        var_25 = ((((((arr_8 [i_5]) ? (arr_8 [i_5]) : var_5))) ? (arr_6 [i_5] [i_5]) : (arr_3 [i_5] [4] [i_5])));
    }
    var_26 *= ((var_9 ? var_5 : (max(var_7, (var_6 || var_4)))));
    #pragma endscop
}
