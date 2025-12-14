/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((var_6 ? ((var_14 ? var_15 : var_9)) : (max(-1, 209))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = (((arr_1 [i_0] [i_0]) <= ((96 ? (((arr_9 [i_0] [i_1] [i_1] [i_2]) ? var_13 : -1)) : (arr_8 [i_0] [i_0] [i_0] [i_2])))));
                    arr_10 [i_0] [i_0] = 1;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_18 ^= (((((((((arr_12 [i_4] [i_0] [i_0]) ? var_12 : (arr_9 [i_4] [i_3] [i_3] [i_0])))) ? (arr_14 [i_0] [i_3] [i_4]) : (((arr_2 [i_4]) ? (arr_9 [9] [i_4] [2] [i_0]) : (arr_8 [i_0] [i_0] [i_3] [i_3])))))) ? ((((-5 ? 1632450280 : 106)) << ((((3236296908 ? var_15 : var_14)) - 1690231315)))) : (arr_12 [i_4] [0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_19 = (-95 ? ((((arr_11 [i_3] [i_5] [i_6]) == var_13))) : var_2);
                                var_20 = (min(var_20, ((((arr_17 [i_0] [7] [i_4] [i_4] [i_5] [i_5] [i_4]) ? var_12 : (59 / 32208))))));
                                var_21 = (max(var_21, (max(231, 31))));
                                var_22 = (min(var_22, (((-11 ? (((-52 && ((min((arr_6 [i_3] [i_5] [i_3]), var_0)))))) : ((((4165777477 ? -1 : 0)) | (arr_17 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [3]))))))));
                                var_23 = (max(var_23, (((((-(arr_16 [i_0] [i_3] [i_4] [i_4] [i_6]))) + ((-var_1 + (((arr_3 [i_0]) ? (arr_0 [i_3] [3]) : (arr_3 [i_6]))))))))));
                            }
                        }
                    }
                }
            }
        }
        arr_19 [i_0] = (max((((var_12 + (arr_8 [i_0] [i_0] [i_0] [i_0])))), ((((min((arr_7 [1] [1] [1] [i_0]), 222))) ? (max(1, var_15)) : (77 * -8444)))));
        var_24 = ((-(((arr_17 [i_0] [4] [i_0] [i_0] [i_0] [i_0] [i_0]) / (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    #pragma endscop
}
