/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_15 += (max((min(-908481477, (arr_2 [i_1 + 2] [i_1 + 3]))), ((max((((-127 - 1) ? 50839 : 14710)), (((arr_0 [i_1]) ? var_11 : var_3)))))));

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_16 &= (max(-1, ((var_7 ? ((1014189298 + (arr_1 [i_0]))) : ((((!(arr_4 [i_0] [i_0] [i_2] [i_2])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = -1;
                                var_18 = ((var_8 ? var_0 : (min((arr_4 [i_0] [i_0] [i_1 + 4] [i_2 + 3]), (arr_9 [i_0] [i_0] [i_0] [4])))));
                                var_19 = 3386485819;
                                var_20 ^= var_13;
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    arr_14 [i_0] [i_0] [i_0] [i_0] = var_7;
                    arr_15 [i_0] [i_1] [i_5] [i_1] = (((((~((var_8 ? (arr_11 [i_0] [i_0] [i_0]) : -512))))) ? (min(((((arr_5 [1] [14] [i_1] [1]) ? var_4 : 32402))), ((var_10 ? var_9 : var_6)))) : (min(((var_12 ? (arr_11 [i_0] [i_0] [i_0]) : 2305843009213693951)), (~var_6)))));
                    var_21 = (arr_6 [i_0] [14]);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_22 *= (min(((((var_9 ? (arr_18 [i_1] [i_5] [i_1]) : var_7)))), ((((min(58166, (arr_3 [i_0])))) & (max(var_0, var_12))))));
                                arr_22 [i_5] [i_5] [i_7] [i_5] [i_5] = (((((min(var_10, var_13))) ? -3386485816 : (((var_10 ? var_0 : var_14))))));
                                arr_23 [i_7] = ((~((~((var_13 | (arr_5 [i_0] [i_7] [13] [13])))))));
                            }
                        }
                    }
                }
                for (int i_8 = 3; i_8 < 14;i_8 += 1)
                {
                    var_23 = ((((((((min(var_7, (arr_7 [i_1] [i_1]))))) + (((arr_5 [i_0] [14] [i_1] [i_8]) ? var_6 : (arr_9 [i_0] [i_0] [i_1] [i_1])))))) ? (((min((arr_1 [i_8]), -2147483624)))) : (min(((max((arr_19 [5] [i_8] [i_0] [i_1] [i_0]), (arr_2 [i_1] [i_1])))), 3627981921))));
                    var_24 -= (((-(arr_24 [i_0] [i_0] [i_0] [i_0]))));
                }
            }
        }
    }
    var_25 += var_9;
    var_26 = (max(var_26, (((max(((9223372036854775807 ? 132120576 : 33120)), ((var_13 ? var_0 : var_3))))))));
    #pragma endscop
}
