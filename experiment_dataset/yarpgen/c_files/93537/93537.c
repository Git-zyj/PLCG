/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (arr_3 [0] [0] [0])));
                    var_21 = (max(var_21, 4001860954));
                    var_22 -= (((784165559 << 1) <= (((arr_7 [i_1]) ? (((arr_6 [i_0] [8] [i_1]) ? 1467176614081093738 : 3510801736)) : ((((arr_1 [i_0]) >> (((arr_2 [i_0 - 2] [i_0] [i_0 - 3]) - 3679)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_23 = (((arr_10 [i_1] [i_2] [i_2] [i_1]) != (arr_10 [i_0] [i_1] [i_2] [i_4])));
                                arr_14 [i_2] = ((((((((arr_1 [i_3]) & (arr_5 [i_0] [i_1] [i_2] [i_4])))) ? (arr_10 [i_0 - 2] [i_2] [i_2] [i_4]) : ((((arr_4 [i_1] [i_3]) ? 3510801707 : (arr_1 [i_0]))))))) ? (arr_8 [i_2]) : (!121));
                                var_24 = (arr_8 [i_2]);
                                var_25 = (arr_3 [i_1] [i_1] [i_1]);
                            }
                        }
                    }
                }
            }
        }
        var_26 ^= (arr_8 [4]);
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_27 = (((arr_16 [i_5]) ? 48129 : (arr_15 [i_5] [i_5])));
        var_28 += ((((((((arr_16 [i_5]) ? 784165559 : (arr_15 [i_5] [i_5]))) / (arr_15 [i_5] [2])))) ? (arr_15 [i_5] [4]) : (arr_15 [i_5] [i_5])));
        var_29 = (max(var_29, (arr_15 [i_5] [17])));
        arr_18 [i_5] = (((((((arr_16 [i_5]) ? (arr_16 [i_5]) : (arr_15 [i_5] [i_5]))) << (((arr_15 [i_5] [i_5]) - 94)))) << (((arr_16 [13]) - 21126))));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_21 [i_6] [i_6] |= (arr_10 [i_6] [i_6] [i_6] [i_6]);
        arr_22 [i_6] = (arr_2 [14] [14] [14]);
    }
    var_30 = 3510801737;
    var_31 = var_18;
    var_32 = (((((!(!var_9)))) * (((((var_6 ? var_19 : var_9)) > 784165559)))));
    var_33 = ((((var_11 ? var_0 : 1713))) & (((var_10 ? (var_1 < 1) : -5417881959541997627))));
    #pragma endscop
}
