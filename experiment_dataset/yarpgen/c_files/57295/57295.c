/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 = (arr_2 [i_1 - 1] [i_1 + 1]);

                    for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_19 = (max(var_19, (((var_9 ? (((!var_17) >> (var_13 - 108))) : 30668)))));
                        var_20 = ((!(((var_16 % var_4) < ((min(2025412301, (arr_5 [i_3 + 1] [i_0 + 3] [i_1 - 3] [i_0 + 3]))))))));
                    }
                    for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_21 = ((((!22146) >> (22146 - 22129))));
                        var_22 = ((((((!(var_7 && 9223372036854775807))))) < (((((var_0 ? 18266 : 389560484))) + (max(4064, var_6))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_23 = (max(var_23, var_7));
                                var_24 = 654396604;
                                arr_17 [23] [i_6] [8] [23] [i_1 - 2] [i_1 - 2] [i_0] = var_9;
                                var_25 = (((arr_14 [i_0] [i_0] [i_0]) ? ((((((arr_14 [i_1] [i_1] [i_5 - 2]) + var_13)) <= ((min((arr_7 [i_6] [i_1 - 1] [i_2] [i_5 + 1]), var_8)))))) : (((!(arr_16 [i_1] [11] [i_1] [i_1 - 2] [i_1] [5]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (max(var_26, var_12));
    var_27 = (max(var_27, ((((!var_2) ? (4064 >= var_9) : (((max(var_15, var_15)))))))));
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 19;i_9 += 1)
            {
                {

                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        arr_30 [i_8] [i_9] [i_9] [i_8] = ((!((max((min(var_11, var_7)), ((43389 ? var_14 : (arr_19 [14] [i_8]))))))));
                        arr_31 [i_7 - 1] [i_7 - 1] [i_8] [i_7 - 1] [i_8] = (((-9223372036854775807 - 1) && (arr_11 [i_7] [i_8 - 2] [i_9 + 1] [i_8 - 2] [i_7] [i_10 + 2])));
                        var_28 = ((!(((arr_26 [i_7] [i_8] [3] [i_7] [i_8 - 2] [i_10 + 3]) && var_3))));
                        var_29 = ((!((((arr_19 [i_7 + 1] [i_9 - 1]) & var_17)))));
                    }
                    var_30 = (min(var_30, (((((max((max(var_17, var_16)), 4064))) ? ((min((!var_0), var_13))) : (min(((var_14 ? -389560484 : var_7)), var_13)))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            {
                                var_31 ^= ((((!(arr_18 [i_12])))) >> ((((max(4064, (arr_26 [i_7 + 2] [i_11] [i_7 + 2] [i_7 + 2] [i_9 - 2] [i_11])))) - 61687)));
                                arr_36 [i_8] [i_7 + 2] [16] [i_7 + 2] [i_7 + 2] [i_8] = min((min((arr_16 [i_9 - 1] [i_8 - 1] [i_8 + 1] [i_8] [i_7 + 2] [14]), (~var_1))), 43389);
                                var_32 ^= (((((((((arr_10 [i_11]) & (arr_29 [i_7] [9] [i_7] [i_7])))) ? (!5594) : (((arr_14 [i_7] [i_8 - 1] [i_12]) & var_12))))) ? ((min((arr_12 [i_7 + 1] [i_8 - 2] [i_9 - 2] [i_7 + 2] [i_8 - 1] [i_8 + 1]), (arr_12 [i_9 - 2] [i_8 - 2] [i_7] [i_7 + 1] [i_8 - 1] [i_9])))) : (((!(!var_14))))));
                                var_33 += (min((min(-99, (arr_1 [i_9 - 1] [i_9 - 1]))), ((((arr_1 [i_9 - 2] [i_9 - 2]) >= var_8)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 16;i_14 += 1)
                        {
                            {
                                var_34 = (((((((((var_16 + 9223372036854775807) >> (var_14 + 35)))) ? var_1 : (((var_6 <= (arr_35 [i_7] [i_7] [i_9] [i_13 - 1] [i_14 + 2] [i_14 + 2] [i_14 + 2]))))))) ? (((arr_28 [i_8]) ^ (!var_9))) : (((!((max(127, (arr_12 [i_7] [i_7] [i_9 - 1] [i_9 - 2] [i_13 + 2] [i_14 + 2])))))))));
                                var_35 *= (min((((var_12 && (arr_23 [i_13] [i_13 + 2])))), ((var_7 & (~43389)))));
                            }
                        }
                    }
                    var_36 = ((((min(var_2, (min(2858749661, (-9223372036854775807 - 1)))))) ? (arr_8 [i_8] [i_8]) : ((min((!-929), ((var_8 ? 389560484 : var_15)))))));
                }
            }
        }
    }
    #pragma endscop
}
