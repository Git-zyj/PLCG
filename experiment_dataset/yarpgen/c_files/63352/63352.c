/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (!410873004325023526);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_11 = (((((var_6 ? (arr_2 [i_3 - 2] [i_3 + 2] [i_3 + 2]) : (arr_2 [i_3 + 1] [i_3 - 1] [i_3 - 3])))) ? (((arr_5 [i_3 + 1] [i_3]) ? (arr_5 [i_3 - 2] [i_3]) : var_2)) : var_4));
                            var_12 = var_6;
                        }
                    }
                }
                arr_12 [i_1] [0] [i_0] = (min((arr_8 [i_0] [i_0] [i_1]), (((var_1 ? (arr_8 [i_0] [1] [i_0]) : 964460627)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 3; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_13 = ((var_5 ? (((((1 ? -7867950510293666416 : (arr_25 [i_4] [i_4] [2] [i_7] [11])))))) : (((((7867950510293666407 ? (arr_20 [i_4] [i_5] [i_6] [i_7]) : var_0))) ? var_5 : (arr_18 [i_8 - 2])))));
                                var_14 = ((~(((((var_0 ? (arr_20 [13] [i_5] [i_5] [i_5]) : 63849))) ? var_1 : (((!(arr_25 [i_8 - 1] [i_7] [i_6 + 1] [i_5] [i_4]))))))));
                                arr_26 [i_4] [i_4] = (2099680209 ? ((237584861 + ((134217664 ? var_4 : var_7)))) : ((((min(4057382432, var_4))))));
                            }
                        }
                    }
                }
                arr_27 [i_4] [i_4] [i_4] = (((((((var_3 ? (arr_18 [i_4]) : var_9))) < (((-7867950510293666416 + 9223372036854775807) << (var_4 - 2095944348))))) ? 14775785399584882253 : (((((arr_21 [i_4] [i_4] [i_4]) != (arr_21 [19] [i_5] [i_4])))))));
                var_15 = (arr_22 [i_4] [i_4] [i_4] [9]);
            }
        }
    }
    var_16 = ((((((var_2 ? var_3 : var_6)))) ? var_5 : (max(var_1, 21783))));
    #pragma endscop
}
