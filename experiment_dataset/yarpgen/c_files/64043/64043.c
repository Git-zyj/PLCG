/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((49 ? 39 : 61));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_19 = ((-7422 ? 49 : 67));
        arr_3 [i_0] = (min(-57, (arr_1 [i_0])));
        var_20 = (((((32755 ? 56 : 1))) & (min(-32438, 13055798032348685690))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                var_21 = (((max((0 ^ -67), -74)) > ((-6522 ? -62 : 25619))));
                var_22 = var_17;
                var_23 = ((var_17 ? var_8 : 10));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_16 [i_1] [i_1] [10] [6] = ((+(((((arr_12 [i_1] [i_1 + 1] [i_2] [i_4]) + 2147483647)) >> (45 - 38)))));
                var_24 = (~((var_2 ? (arr_14 [1] [i_2]) : (arr_9 [i_1] [i_1 + 1]))));
            }
            var_25 = ((min(41413, -15575)));
            arr_17 [i_1] = var_5;
            arr_18 [i_2] [i_2] [i_1] = ((0 ? 3226119044 : -15581));
            var_26 += var_4;
        }
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            var_27 = (min((((((var_11 ? (arr_20 [i_1] [i_5]) : var_14))) ? (-67 + 45) : (arr_13 [i_1] [i_5] [i_5] [i_5]))), ((((min((arr_14 [5] [i_5 + 1]), 9950922577041934853)) != (arr_20 [i_1] [i_5]))))));
            arr_21 [i_5] [i_1 + 1] [i_5 - 1] = var_0;
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_28 -= var_8;
            var_29 = (min(((-4888433274249008811 ? (arr_10 [i_1 + 1]) : (((177 ? -23422 : 61800))))), (((2243478093657635294 ? ((-(arr_23 [i_1 + 1] [i_1 + 1]))) : var_12)))));
            var_30 = (max(25643, -23419));
        }
        var_31 = 32761;
    }
    #pragma endscop
}
