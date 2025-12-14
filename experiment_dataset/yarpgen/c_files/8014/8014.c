/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (((((4094879185820367756 ? 191 : 5) * (0 && 7)))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [15] = (max(((255 ? -4501376036085420052 : 240)), ((((-9223372036854775807 - 1) ? (arr_0 [i_0 - 1] [i_0 + 1]) : (((arr_0 [i_0] [8]) / var_7)))))));
            var_15 = (max(((((var_14 ? 28054 : (arr_0 [20] [1]))))), ((-(((arr_5 [i_0]) * (arr_1 [i_0])))))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_16 = (max(var_16, ((((~154192439) <= -5)))));
            arr_10 [18] [i_2] = (max((arr_7 [i_2] [i_0]), (((min(0, (arr_2 [i_2])))))));
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_17 = (((var_0 * (arr_9 [i_3] [i_3] [i_3]))));
        var_18 = (--18301);
        var_19 = var_12;
        var_20 ^= var_14;
    }
    var_21 = (min(var_21, ((max(18301, 55433)))));

    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_22 = ((((((!(arr_2 [i_4]))) && (63250 && 6509144022953907010))) ? (arr_8 [i_4]) : ((max(((var_0 ? 15 : var_10)), (((!(arr_2 [i_4])))))))));
        var_23 = ((var_14 | (max((arr_2 [i_4]), ((-28640 ? -18307 : 2713458600))))));
        var_24 = var_11;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_19 [i_5] = ((~(arr_18 [i_5] [i_5])));
        var_25 = 66;
        var_26 = (((17850 + 5197) | (max(((((-2147483647 - 1) ? 23726 : -9))), ((var_8 ? 18374 : 2221456748405711570))))));
        arr_20 [i_5] = (max((((((var_3 ? (arr_17 [6]) : var_12))) || (((-30364 ? var_0 : (arr_18 [2] [15])))))), (((arr_14 [i_5] [i_5]) && 1581508696))));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_23 [3] = ((((((arr_8 [i_6]) ? var_13 : var_6))) || var_5));
        var_27 = ((~(-2147483647 - 1)));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    arr_28 [1] [i_7] [i_7] = ((!((((arr_4 [i_7]) ^ var_14)))));
                    var_28 = (max(var_28, (arr_14 [11] [11])));
                }
            }
        }
    }
    var_29 = (~62);
    var_30 = var_6;
    #pragma endscop
}
