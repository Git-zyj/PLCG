/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_9;
    var_11 = var_1;

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_12 = (((((~(234 & 5)))) ? var_5 : (~var_9)));
            var_13 = arr_3 [i_0] [i_0] [i_1];
        }
        arr_5 [i_0] = ((((max(-4860062152116648369, (arr_0 [i_0])))) | ((~(min((arr_4 [1] [1]), var_5))))));
        var_14 = (max(var_1, (max(var_0, (arr_2 [i_0] [i_0 - 1])))));
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_15 = ((+((var_0 ? (((arr_0 [i_2]) & 3688450026)) : (!var_2)))));
        var_16 = (min(((1 < (max((arr_4 [6] [6]), 234)))), (((min(var_9, 8455004814983716607)) != -8455004814983716609))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_17 = (i_3 % 2 == 0) ? (((+(min(-4860062152116648342, (((18 << (((arr_8 [i_3]) - 681340139)))))))))) : (((+(min(-4860062152116648342, (((18 << (((((arr_8 [i_3]) - 681340139)) - 4172115703))))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_18 &= ((((((arr_18 [i_3] [i_4] [i_5 + 1]) ? (arr_18 [1] [i_5 + 2] [i_7]) : var_4))) ? (((~(4200302687570587065 | 3054)))) : (max(((var_1 ? var_6 : (arr_14 [i_5] [i_5] [i_4] [i_5]))), ((0 ^ (arr_10 [i_5])))))));
                                var_19 = (arr_10 [i_5 - 1]);
                                var_20 = (((20634 ? 1003785162 : 21)));
                                arr_24 [i_3] [i_3] = ((~(~var_4)));
                            }
                        }
                    }
                    var_21 = ((((~(arr_22 [i_5 + 3] [i_5] [i_5] [i_5] [i_5 + 2] [i_5 - 2]))) < (arr_22 [i_5 - 2] [i_5] [i_5 - 2] [i_5] [i_5 - 2] [i_4])));
                }
            }
        }
    }
    #pragma endscop
}
