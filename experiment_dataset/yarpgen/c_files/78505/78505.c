/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (5399441857870228051 >= 38353);

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_12 = ((((((((0 ? 1 : var_1))) ? 91 : ((var_2 ? var_3 : (arr_1 [i_0 - 1])))))) ? ((((!(arr_1 [i_0 - 1]))) ? (arr_0 [i_0 - 1]) : var_0)) : (((arr_0 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [13])))));
        var_13 = (((arr_1 [i_0 - 1]) ? ((((((arr_1 [i_0 - 1]) ? (arr_1 [i_0]) : 7))))) : (3 + 315831419)));
        arr_2 [i_0] [1] = (8 ^ 0);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_2] [i_1] = ((!(arr_7 [i_1])));
                    arr_13 [i_1] = var_6;
                    var_14 = ((-23 ? 1 : ((var_7 ? var_1 : (arr_9 [i_1] [i_1 - 1] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_15 = (min(var_15, (arr_1 [i_4])));
                                arr_22 [i_1] [11] [17] [i_3] [18] [i_1] = -240;
                                arr_23 [i_5] [i_1] [18] [i_4] [i_5] [15] = var_7;
                            }
                        }
                    }
                }
            }
        }
        arr_24 [i_1] = 1;
    }
    var_16 = (((((max(var_7, var_3))) ? var_1 : (var_3 | var_5))));
    #pragma endscop
}
