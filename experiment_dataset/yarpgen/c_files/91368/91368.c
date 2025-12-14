/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((651980414269521678 << (15551 - 15517)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_11 = (min(var_11, 37954));
        arr_4 [i_0] = var_9;
    }
    for (int i_1 = 3; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] = ((-((252 ? (arr_5 [i_1 - 2]) : (arr_5 [i_1 - 3])))));
        var_12 = ((min((~var_1), (arr_7 [i_1]))));
        var_13 = (min((min(((((arr_7 [i_1]) >= -5012332785115896537))), 1512830546)), var_0));
        arr_9 [i_1] = (arr_6 [i_1]);
        var_14 = ((~((+((min((arr_6 [5]), var_0)))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_15 = ((!((min((!var_1), 0)))));
        var_16 = (((arr_11 [i_2] [i_2]) && -1512830538));
        arr_14 [i_2] = -17;
        arr_15 [i_2] = (var_7 ? (((arr_6 [i_2]) ? (arr_13 [i_2] [5]) : (arr_13 [i_2] [i_2]))) : (arr_7 [i_2]));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {
        arr_18 [i_3] = (((!var_1) ? (!1512830546) : var_4));

        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            arr_21 [i_3] = var_4;
            var_17 = ((-(arr_1 [i_3 + 1])));
            arr_22 [8] &= (arr_19 [i_3]);
            var_18 = (arr_5 [10]);
        }
        var_19 = (~var_9);
    }
    #pragma endscop
}
