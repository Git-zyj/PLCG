/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] = ((((((arr_3 [i_0 + 3] [i_0]) ? var_15 : 0))) ? (((arr_10 [i_0] [5] [i_2 + 2] [i_3 + 3] [i_3 + 2] [i_0 - 1] [i_1]) ? var_2 : 0)) : ((((((arr_9 [i_0] [i_0] [i_2]) ? (arr_7 [i_0] [i_0] [i_2] [i_3 + 3] [i_4] [i_4]) : 0))) ? 4294967295 : ((0 ? var_9 : (arr_10 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0])))))));
                                arr_12 [i_0] [i_1] [i_4] [i_1] [i_4] [i_3] [i_0 + 1] = (((((var_13 ? 0 : 24))) ? ((18446744073709551603 ? (arr_10 [i_0] [i_0 - 1] [i_0] [i_0 + 4] [i_0 + 3] [i_2 + 3] [i_3 - 2]) : var_4)) : (((var_5 ? (arr_0 [i_3 + 2] [i_2 + 3]) : var_15)))));
                                var_17 ^= (((((21 ? (arr_8 [i_2] [i_2] [i_1] [i_2 + 3]) : var_3))) ? ((16777215 ? (arr_1 [i_0 + 1]) : var_9)) : (((arr_8 [i_0 - 1] [i_2 + 2] [i_4] [i_4]) ? (arr_8 [i_0 - 1] [i_2 + 2] [i_4] [16]) : var_9))));
                            }
                        }
                    }
                    var_18 ^= (((((var_4 ? var_5 : (arr_7 [i_0] [i_1] [i_2 - 1] [i_0] [i_0 + 2] [i_0])))) ? ((0 ? 255 : var_1)) : ((var_12 ? 65535 : var_5))));
                    arr_13 [i_0] = (((((16383 ? ((var_1 ? (arr_2 [i_0] [i_0]) : var_12)) : var_7))) ? ((var_11 ? var_2 : (((var_6 ? 0 : var_13))))) : ((((arr_8 [i_0 + 1] [i_1] [i_0] [i_2 + 3]) ? (arr_8 [i_2] [i_2 + 1] [i_0] [i_2]) : 65534)))));
                    arr_14 [i_0] = (((((1 ? 9 : 65525))) ? ((var_0 ? var_10 : 1)) : ((0 ? var_13 : var_7))));
                }
            }
        }
    }
    var_19 = ((((((((var_15 ? 16777216 : 65534))) ? (((var_16 ? var_14 : var_13))) : var_4))) ? var_8 : ((var_9 ? var_10 : ((var_13 ? (-32767 - 1) : var_3))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                {
                    var_20 = (((((var_5 ? ((var_6 ? var_10 : 65535)) : (arr_17 [i_6 + 4])))) ? (((1 ? (arr_15 [i_6 - 1] [i_7 - 1]) : var_8))) : ((var_1 ? (arr_16 [i_7 + 2]) : 18446744073709551615))));
                    arr_23 [1] [1] [1] |= (((((var_11 ? var_11 : (arr_15 [i_6 - 1] [i_6 + 3])))) ? (((var_3 ? 524287 : ((16777192 ? var_13 : (arr_19 [i_5] [i_5] [i_7 - 1])))))) : ((var_5 ? (arr_20 [i_6 - 2] [i_6 - 1] [i_7 - 2]) : (arr_20 [i_6 + 3] [i_6 - 1] [i_7 - 2])))));
                    arr_24 [1] = (((((16777228 ? var_4 : var_4))) ? ((((arr_21 [i_6] [i_6]) ? (arr_22 [i_6] [i_6] [i_6 - 1]) : (arr_22 [i_6] [i_6] [i_6 + 1])))) : ((65522 ? (arr_21 [i_5] [i_5]) : var_2))));
                    var_21 = (((((4278190080 ? 4294443009 : (arr_15 [i_5] [i_5])))) ? ((((arr_15 [i_5] [i_5]) ? var_11 : var_0))) : (((arr_15 [i_5] [i_6]) ? 67108863 : var_2))));
                }
            }
        }
    }
    #pragma endscop
}
