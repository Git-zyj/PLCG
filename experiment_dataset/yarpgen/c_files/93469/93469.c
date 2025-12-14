/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [4] [i_0] = (((~30) ? 229 : 211));
        var_13 = (((((((var_1 >= (arr_0 [i_0] [i_0]))) ? (~var_2) : var_5))) ? (min((((1 >= (arr_0 [i_0] [i_0])))), -var_6)) : ((((!114) == 21)))));
        var_14 = var_7;
        var_15 = ((((var_9 ? -1 : (arr_1 [i_0]))) ^ (((((233 ? 0 : 1))) ? 0 : 206))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 &= (!var_10);
                                var_18 = -123;
                                var_19 = (max(var_19, (arr_3 [5] [5] [11])));
                                var_20 = (var_11 & var_6);
                                var_21 = (max(var_21, (((~(((arr_12 [1] [i_3] [i_1 + 3] [i_0] [1]) | 227)))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_2] [i_0] = (((((((var_1 ? 1 : (arr_8 [i_0] [i_1] [i_0] [2])))) ? ((((arr_6 [i_0] [i_0] [i_0] [i_0]) != var_9))) : -var_12)) - (~var_11)));
                }
            }
        }
    }
    var_22 &= ((~((146 ? var_5 : 228))));
    var_23 = (max(var_23, (((!(((((min(var_7, var_0))) ? var_12 : (var_9 & 99)))))))));
    #pragma endscop
}
