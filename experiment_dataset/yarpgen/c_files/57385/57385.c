/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (min((((((16380 ? -30887 : 5166))) - ((var_10 ? var_2 : var_10)))), var_8));
                arr_7 [i_0] [4] = (((var_9 ? ((var_12 ? var_6 : var_3)) : (var_0 > var_5))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_3] [i_2] [i_1] [i_0] [i_0] [i_1] = var_3;
                                arr_17 [i_1] = (((((var_6 ? var_0 : ((var_9 ? var_1 : var_1))))) ? (((((var_3 ? var_7 : var_10))))) : (((var_11 % var_10) ? var_6 : var_10))));
                                arr_18 [i_1] [i_3] [i_2] [i_2] [i_1] [i_1] = (((var_11 / var_2) ? ((var_11 ? var_11 : var_1)) : (((var_7 == var_12) ? ((var_3 ? var_3 : var_2)) : var_5))));
                            }
                        }
                    }
                }
                arr_19 [i_1] [i_1] [i_0] = min((((-16397 ? ((-31 ? 16380 : 29)) : 1))), (((((var_9 ? var_2 : var_0))) ? ((var_8 ? var_9 : var_8)) : var_11)));

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    arr_22 [i_1] = (((((max(var_0, var_11)))) + ((var_3 ? var_2 : var_2))));
                    arr_23 [i_1] = ((((((var_9 << var_7) ? (var_13 | var_0) : var_9))) ? (((var_7 | var_1) >> ((((var_9 ? var_0 : var_12)) - 157)))) : ((min(((var_7 ? var_3 : var_11)), var_11)))));
                    arr_24 [i_0] [i_1] [i_5] [i_1] = (((((((var_3 ? var_10 : var_3))) ? var_3 : (var_9 / var_1))) ^ (((((var_9 ? var_4 : var_11)))))));
                    arr_25 [i_1] [i_1] [i_0] [i_5] = ((((((var_0 > var_1) != var_1))) >= (((16380 || 30) << (42635 < 16362)))));
                }
            }
        }
    }
    var_14 = (((((var_10 ? var_3 : (var_1 < var_8)))) ? (var_11 & var_10) : (((var_0 && (var_10 / var_8))))));
    #pragma endscop
}
