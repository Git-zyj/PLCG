/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (!var_4);
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = var_7;
        var_13 += var_0;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = ((~(min(((max(var_6, var_9))), 4997836221152005287))));

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_14 = var_1;
                var_15 = ((4997836221152005281 ? ((-1 ? ((var_5 ? var_2 : var_0)) : 1)) : 9223372036854775807));
                var_16 = (((!34412) ? (((max((max(var_4, 48)), (!1559794157))))) : (((var_3 ^ var_8) ? (min(-1844084888801099786, 91)) : (~57437)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                var_17 ^= ((((max(var_0, ((max(var_8, var_2)))))) ? (((61012 ? var_0 : var_5))) : (((max(var_7, var_9))))));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_18 += ((-var_9 && (arr_7 [2] [i_4] [i_4] [16])));
                    var_19 -= (((~var_6) ? ((var_3 ? var_6 : var_8)) : (arr_8 [1] [1])));
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_25 [i_6] [0] [0] = 115;
                                var_20 &= var_4;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_21 = -57514;
                        var_22 = ((-((var_0 ? var_9 : var_1))));
                        var_23 ^= ((var_4 ? 79 : var_7));
                        var_24 = (((9223372036854775797 != 124) && (!var_3)));
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_25 = ((~(((max(var_0, (arr_20 [i_3] [i_4] [i_6] [i_10]))) * (~var_6)))));

                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_26 += max((((var_5 || (~var_6)))), var_3);
                            var_27 = (max((arr_8 [i_6] [i_10]), ((((min(var_2, var_0))) ? -4021 : ((max(86, var_3)))))));
                            arr_33 [i_11] [i_10] [i_6] [i_10] [i_3] = ((((((var_6 | 4034) ? (((var_6 ? var_9 : var_2))) : (max(var_0, var_5))))) ? ((max(((!(arr_7 [i_10] [i_6] [i_10] [i_6]))), var_6))) : (!var_7)));
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    var_28 = (8091 ^ 65);
                    var_29 = (max(var_29, var_0));
                }
                var_30 -= (((((-((var_0 ? var_8 : var_7))))) ? (((var_1 < var_8) ? ((var_4 ? var_1 : var_5)) : (arr_32 [i_3]))) : (!2305807824841605120)));
                var_31 = ((!((((arr_3 [8]) ? var_5 : (arr_18 [i_3] [i_3] [i_4] [i_4]))))));
                var_32 = (max(((((227 ? var_3 : var_2)) - var_2)), (((((var_1 >= (arr_7 [20] [i_3] [i_3] [i_3]))) && ((((arr_23 [5] [i_4] [i_3] [i_3] [i_3] [i_3]) ^ var_7))))))));
            }
        }
    }
    #pragma endscop
}
