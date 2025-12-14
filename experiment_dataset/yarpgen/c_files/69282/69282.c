/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    var_11 -= (min((max((min(var_6, var_0)), ((max(var_8, var_2))))), (((!((min(var_4, var_4))))))));
    var_12 = (max((max(var_2, var_9)), (max((min(var_9, var_7)), var_7))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = ((-(var_6 >= var_7)));
        var_14 = var_9;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = ((var_4 ? -var_4 : (var_2 < var_1)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (var_8 >= var_0);
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] = ((var_0 ? var_2 : var_4));
                                arr_16 [i_1] = (var_5 >= var_1);
                            }
                        }
                    }
                    arr_17 [i_1] [i_1] [i_2] [i_1] = ((~(var_3 & var_6)));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_20 [i_5] = (((max(var_5, var_2))) ? -var_8 : ((var_5 ? var_2 : var_1)));
        arr_21 [i_5] = (((var_8 < var_0) ? ((max(var_5, var_9))) : ((-((var_2 ? var_8 : var_7))))));
        arr_22 [i_5] = (max(((max(var_2, var_9))), (max(var_2, (var_7 / var_0)))));
        arr_23 [i_5] = (((var_8 || var_5) >> var_5));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                {
                    var_17 = (max(var_2, (max((var_9 % var_0), var_2))));
                    var_18 = (((-(var_8 / var_6))));
                }
            }
        }
    }
    var_19 = (max(((!((max(var_1, var_7))))), var_1));
    #pragma endscop
}
