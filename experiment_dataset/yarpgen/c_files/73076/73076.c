/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (arr_4 [i_0]);
                var_19 = (min(var_19, ((max(0, ((((((arr_3 [i_0] [i_1] [13]) ? var_13 : (arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_1]) ^ 18446744073709551589)) : var_1)))))));
            }
        }
    }
    var_20 = -2910098286487387724;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_21 &= (min((-2910098286487387722 || 4186112), 508));
                                var_22 = (((arr_10 [i_6 + 1] [i_4 + 2]) / (arr_10 [i_6 - 1] [i_4 - 2])));
                                var_23 = (max((arr_11 [i_4 + 1]), (arr_11 [i_4 + 1])));
                                var_24 = (min(var_24, (((((-(arr_17 [i_5])))) ? (arr_10 [i_2] [i_5]) : (min(((var_13 ? (arr_14 [i_2] [i_2] [i_2]) : 18446744073709551615)), (((-112 ? var_3 : var_13)))))))));
                            }
                        }
                    }
                    var_25 = (arr_11 [i_2]);
                    arr_19 [i_2] [5] [9] = 40;
                    var_26 ^= (max((arr_6 [i_3]), (min(2910098286487387705, var_17))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 23;i_9 += 1)
            {
                {
                    var_27 = -2910098286487387722;
                    arr_30 [i_8] [i_8] = var_8;
                    var_28 = ((-var_13 ? ((-(min(34, 2910098286487387730)))) : ((((arr_21 [0]) ? (1 & var_8) : var_16)))));
                    var_29 -= 221;
                }
            }
        }
    }
    #pragma endscop
}
