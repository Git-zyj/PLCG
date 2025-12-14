/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_20 = ((-(((1 & var_16) - ((max((arr_3 [i_2] [i_1 + 1] [i_0]), -942007083)))))));
                            arr_11 [i_3] = (min(-126, (max(1011229591, 9007199254740991))));
                        }
                    }
                }
                var_21 = (max(var_21, ((min(((((min(2025879474112404613, var_8))) ? 9007199254740986 : (arr_10 [i_0] [i_0] [6]))), (((var_14 > (arr_5 [i_0] [i_0] [i_1 - 2] [5])))))))));
            }
        }
    }
    var_22 = (((min(var_10, (min((-9223372036854775807 - 1), 0)))) - ((287873634 ? -455238140385253952 : -9007199254740988))));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 16;i_6 += 1)
            {
                {
                    arr_21 [i_4] [i_5] [i_6] = (((((~((var_7 ? -4162 : 9007199254740991))))) != (min(((min(99, var_10))), (min(15198408738747524269, 0))))));
                    var_23 = (28176 & 0);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 12;i_9 += 1)
            {
                {
                    var_24 = 2942462076;
                    var_25 = (((((var_9 ? ((-9007199254740991 ? 9007199254740990 : 555310636)) : ((min((arr_25 [i_7] [i_7]), 33554432)))))) ? ((((4129139828 | 247) ? (((min(var_6, var_10)))) : var_11))) : ((var_12 / (arr_15 [3] [i_8])))));
                    var_26 = (max(var_14, (max(var_15, var_13))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_36 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] &= (((((min(var_12, var_2)) | (((28 ? var_14 : var_8)))))) ? ((((0 || ((min(127, var_13))))))) : (((max(-198997025040477661, (arr_35 [i_7] [0] [4] [0] [i_11]))) | (max(-360554789319023286, var_10)))));
                                var_27 *= (max((((arr_35 [i_7 - 2] [i_7 - 2] [i_9 - 3] [i_10] [i_11]) ? (arr_32 [i_7 + 1] [i_7 + 1] [i_9 + 2] [i_11]) : var_11)), (max(var_19, 18))));
                                var_28 |= 67108863;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_29 = (min(var_29, (((4294967290 ? 38 : 354196927)))));
                                var_30 = (((((min(var_11, var_1))) ? ((198997025040477658 ? 287873643 : 954851400)) : (((arr_25 [i_7] [i_7]) * -1557017985)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
