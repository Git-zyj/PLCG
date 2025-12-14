/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((min(var_0, ((96 ? 5842 : var_0))))), (min(0, var_13))));
    var_18 &= 224;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = (max(var_19, (-8053800114343890823 & var_7)));
        arr_3 [i_0] = ((((min(2503677582, 0) - var_9))));
        arr_4 [i_0] &= 1;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_14 [i_1] [3] [i_3] [3] |= (arr_13 [i_1] [i_2]);
                    var_20 = (var_2 + var_5);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((((arr_22 [i_1 - 3] [i_1 - 3] [i_1] [i_4] [i_4 - 2]) ? 1 : 14455)))));
                                var_22 = (min(var_22, ((((arr_15 [i_1] [i_1]) != var_12)))));
                                var_23 = ((((884461558 ? 1836855217 : (arr_18 [i_1 - 2] [i_5]))) >> (((((arr_19 [i_7]) ^ -5863)) + 2005411453))));
                            }
                        }
                    }
                    var_24 = 743526124721471372;
                    var_25 = 22;
                }
            }
        }
    }
    var_26 = (((((min(var_6, 55828) <= var_11)))));
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 17;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_27 ^= (max((arr_32 [i_8] [i_9 + 2] [i_10] [i_10] [i_9] [i_10 - 2]), 33075));
                                arr_35 [i_8] [i_9 + 3] [i_9] [i_11] [i_12] &= (min(var_4, -27));
                            }
                        }
                    }
                    var_28 = (~var_1);
                    var_29 = ((((max(31000, 8053800114343890830))) ? var_3 : -121));
                }
            }
        }
    }
    #pragma endscop
}
