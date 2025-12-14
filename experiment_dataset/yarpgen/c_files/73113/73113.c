/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((18446744073709551597 ? ((min(var_13, ((var_0 ? var_11 : var_15))))) : var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_17 += ((((!(arr_3 [i_0]))) ? ((0 ? 9 : 0)) : ((min(536870912, var_4)))));
                var_18 = var_7;

                for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    arr_6 [i_2] [i_1] = (((((var_7 ? (arr_2 [i_0] [i_1 - 1] [i_2]) : (arr_2 [i_0 - 2] [i_1 - 1] [i_2])))) ? ((((arr_4 [i_2]) || ((min(var_9, var_3)))))) : ((~((-5 ? 57 : var_5))))));
                    arr_7 [i_0] = (-5 ? (((!(((~(arr_3 [i_0 - 2]))))))) : ((10 << (var_2 - 590929517))));
                    var_19 += ((198 ^ ((((!var_10) ? var_11 : (((arr_0 [i_0]) ^ -117)))))));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    var_20 = (max((((arr_3 [i_0 + 1]) ? -536870924 : (arr_0 [i_0 - 3]))), (((((4871 ? var_5 : (arr_4 [i_3])))) ? ((13246796902032744630 ? 3 : var_9)) : (min(16760832, -536870889))))));
                    var_21 = (min(9223372036854775807, ((((((var_2 ? var_11 : var_4))) + (var_9 % 3850047202))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((((((var_2 ? 65531 : -5))) ? (arr_0 [i_0 - 1]) : (~var_12)))))));
                                arr_17 [i_0 - 3] [i_3] = ((var_0 ? (arr_4 [i_0 - 2]) : (((var_13 ? ((((arr_15 [1]) ? 1 : var_11))) : (((arr_15 [i_3]) ? var_3 : var_10)))))));
                                var_23 &= -2147483639;
                                var_24 = ((var_9 << ((((~(253 < -20111))) + 14))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    arr_21 [i_0 - 2] [i_1] [i_0] = (arr_10 [i_0] [i_1] [i_6]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_25 = (arr_8 [i_0 + 1] [i_1] [i_8]);
                                var_26 = (max(var_26, (((-(arr_4 [i_0]))))));
                                var_27 = (max(var_27, ((((((~(arr_2 [i_6] [i_1] [i_0])))) ? var_3 : (arr_5 [i_0 + 1]))))));
                                var_28 = 2147483647;
                                arr_28 [i_0] [i_1] [i_6] [1] [i_8] = 9;
                            }
                        }
                    }
                    arr_29 [i_1] = (((!var_8) ? (((arr_14 [i_6] [i_0]) ? var_11 : 1)) : (-24316 <= 253)));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    var_29 = (!var_13);
                    arr_33 [i_9] = ((2682807448675675207 ^ (arr_22 [i_0 - 3] [i_1 - 2] [i_1])));
                }
                arr_34 [i_0] [i_1] = (min(((((((max(56, var_15)))) <= ((var_10 ? 0 : var_2))))), (((arr_31 [i_1 + 1] [i_0 - 1]) ? var_14 : var_2))));
            }
        }
    }
    #pragma endscop
}
