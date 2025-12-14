/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = 3170396302084533768;
                                arr_13 [i_0] [i_1] [i_1] [i_0] [i_3] [2] [i_4] = (arr_5 [i_1]);
                            }
                        }
                    }
                    var_15 = 1;
                    var_16 = var_11;
                    var_17 = ((~(arr_5 [i_1])));
                    var_18 = var_4;
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_19 = (((32764 ? var_5 : (max(var_8, 51974)))));
                                var_20 = (max(((max(51974, (arr_12 [12] [i_6 - 1] [i_6 + 1] [i_7] [i_1])))), ((-(arr_18 [i_1] [i_6 + 2] [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_1])))));
                            }
                        }
                    }
                    var_21 |= 51972;
                    var_22 = (max((~51974), ((min(33107, 13554)))));

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_8] [i_8] [i_5] [i_1] = (((!(arr_5 [i_1]))));
                        var_23 = (((((((arr_4 [i_1] [i_5] [i_1]) || 6623984104160218606))) <= 183562395)));
                        var_24 = ((((max((arr_19 [i_0] [i_1] [i_0] [i_1] [i_5] [i_5] [i_8]), (arr_19 [i_0] [i_1] [i_5] [i_8] [i_8] [i_5] [i_8])))) ? (((arr_19 [i_0] [i_1] [0] [i_1] [i_8] [i_8] [7]) ? (arr_19 [3] [i_1] [i_0] [i_1] [i_1] [i_0] [i_8]) : 95851422)) : (((min((arr_19 [i_0] [i_1] [i_5] [i_8] [i_1] [i_0] [1]), (arr_19 [i_0] [i_1] [i_1] [i_5] [i_5] [i_5] [i_8])))))));
                    }
                }
                var_25 = (min(var_25, (((((((max(7105082094654046324, var_10))) ? var_2 : var_11)) <= 7639217298319806791)))));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_26 *= (((13580 <= 54058) ? ((var_12 << (var_10 + 97))) : (((-2655419096606995614 ? (arr_18 [16] [i_0] [i_9] [16] [i_0] [16]) : (arr_3 [8]))))));
                    var_27 = ((51948 ? -6623984104160218600 : -7105082094654046324));
                }
            }
        }
    }
    #pragma endscop
}
