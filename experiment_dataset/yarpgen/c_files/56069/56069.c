/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = ((~(((arr_3 [i_0] [i_0]) ^ (~var_15)))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_20 ^= (-(arr_2 [i_0] [i_0]));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        arr_13 [6] [i_3] = (((~(arr_7 [i_0] [i_1] [i_2] [i_3]))));
                        var_21 = (max((((arr_3 [i_1] [i_2]) ? (arr_3 [i_2] [i_0]) : (arr_3 [i_0] [i_0]))), (((((var_11 ? var_7 : var_10))) ? ((~(arr_11 [i_3] [i_1] [i_0]))) : ((18446744073709551600 ? (arr_5 [i_0]) : (arr_2 [i_2] [i_0])))))));
                        var_22 = ((-1994 ? 3692096878465250476 : 18446744073709551602));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_4] [4] = ((((((15953504427533609787 ? 2493239646175941828 : 1)) >= (arr_8 [i_4] [i_1] [i_2]))) ? ((min(var_8, (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 945611234 : (arr_10 [i_0] [2])))))) : (max(-30942, -9223372036854775786))));
                        var_23 = (max(var_23, var_10));
                    }
                    arr_18 [i_2] [6] [9] [i_0] = (((arr_1 [i_1]) ? (arr_3 [i_2] [i_1]) : ((var_5 ? var_18 : var_18))));
                    arr_19 [0] [12] = (((max(var_10, (arr_3 [i_0] [i_0]))) | ((((!(arr_3 [i_0] [i_0])))))));
                    var_24 = (min(var_24, (((((max(7209507769969900150, 3213032276177538503)))) ? (~8096208247831885754) : 7023251869004096816))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_25 = max((arr_10 [i_5] [i_0]), (var_13 ^ var_3));
                    var_26 = (((arr_8 [i_5] [i_1] [i_0]) ? ((((arr_2 [i_0] [i_1]) != (arr_2 [i_5] [i_0])))) : (max(var_6, (((arr_12 [0] [8] [i_1] [0]) ? 1 : 13643))))));

                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        var_27 = (arr_10 [12] [12]);
                        arr_24 [i_1] [i_5] [2] = (((max(((max(var_2, var_12))), ((var_1 ? (arr_12 [i_0] [1] [1] [10]) : (arr_8 [i_0] [13] [i_0])))))) ? (((~((var_7 ^ (arr_6 [i_1] [i_5] [i_6 - 1])))))) : ((~((~(arr_20 [i_5] [i_5] [i_1]))))));
                        var_28 = (max(var_28, (((+((+(max((arr_9 [2] [2] [9]), (arr_7 [i_5] [i_5] [i_5] [i_5]))))))))));
                    }
                }
                arr_25 [i_0] = (max((max(0, 9223372036854775773)), (arr_12 [i_0] [8] [i_0] [i_0])));
                arr_26 [i_1] = (max((((arr_2 [i_1] [i_0]) != (arr_10 [i_0] [i_0]))), (arr_2 [i_0] [i_0])));
            }
        }
    }
    var_29 = var_11;
    var_30 = (max(var_30, var_1));
    #pragma endscop
}
