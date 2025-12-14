/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = (((arr_0 [i_0] [i_0]) <= -5092));
        var_11 = (((~0) - var_8));
        var_12 = (((arr_1 [i_0]) ? 32767 : var_5));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_13 = (((-5092 + 2147483647) << (((-14779 + 14791) - 12))));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_14 = ((-((((((arr_0 [i_1] [i_2]) | var_9))) - (min((arr_7 [i_1]), var_4))))));
            var_15 = -5092;
            arr_9 [i_1] = ((((!(arr_8 [i_1 - 1]))) && (arr_8 [i_1 + 4])));
        }
        var_16 ^= (((var_4 <= var_4) >= (((arr_2 [i_1 + 2]) / ((((arr_4 [i_1]) & var_8)))))));
        var_17 = (((-((((arr_8 [13]) || 2410678567986974710))))));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_18 = (((((((arr_5 [i_3]) != (arr_5 [i_3]))))) <= ((((((((arr_7 [i_3]) + 2147483647)) << 0))) ? ((var_6 ? 0 : (arr_5 [i_3]))) : (arr_7 [i_3])))));
        var_19 = ((min((((-2283 < (arr_7 [i_3]))), (((arr_8 [i_3]) ? var_1 : (arr_11 [i_3])))))));
        arr_13 [i_3] [6] = (((((4611686018427387903 - (arr_10 [i_3])))) ? (((!(arr_3 [i_3])))) : 1));
        var_20 = (((((((min(-57422854497963163, var_8))) || (((~(arr_6 [i_3] [i_3]))))))) << (((((arr_2 [i_3]) ? ((-5092 ? (arr_8 [i_3]) : -2056693577)) : 1)) - 2300687887652705040))));
    }

    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_21 = (max(var_21, ((((((((~(arr_0 [i_4] [i_4]))) ^ var_8))) ? 5092 : (((max(127, 8235130726695374455)) - var_8)))))));
        var_22 |= 13776780505999451039;
        var_23 = (+(((arr_0 [15] [i_4]) ? var_0 : (arr_0 [i_4] [i_4]))));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_24 = (max(var_24, 5092));
        var_25 = (min(var_25, (((1437134042 - ((-(((!(arr_0 [i_5] [i_5])))))))))));
        var_26 = (((0 | 255) << ((((max((arr_3 [i_5]), (arr_3 [i_5])))) - 18820))));
        var_27 = (max(var_27, (((((arr_16 [i_5] [i_5]) && (arr_16 [i_5] [i_5])))))));
    }
    for (int i_6 = 4; i_6 < 16;i_6 += 1)
    {
        var_28 ^= (!-4669963567710100577);
        var_29 = ((!((13776780505999451039 && (min(var_6, (arr_0 [i_6] [i_6])))))));
    }
    var_30 = -9;
    var_31 = 9213;
    #pragma endscop
}
