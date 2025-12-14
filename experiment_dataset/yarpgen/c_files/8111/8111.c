/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((max((max((min(var_4, 683224789611768428)), var_4)), var_5)))));
    var_20 = (max((min(var_11, (max(var_5, var_18)))), (min(var_3, (min(var_15, var_8))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = (max((max((arr_0 [i_1 - 3]), var_4)), (min((arr_0 [i_1 - 1]), (arr_0 [i_1 - 2])))));
                    arr_8 [i_2] = (min(117, (arr_6 [i_1 - 3])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_22 = max(var_12, (max(var_17, (arr_5 [i_3] [i_4]))));
                arr_14 [i_3] [i_4] [i_4] = (arr_6 [i_4]);
                arr_15 [i_4] [i_4] [i_4] = (min(12970688483652725960, 12970688483652725960));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 17;i_9 += 1)
                        {
                            {
                                arr_26 [i_5] [i_6] [i_5] [i_7] [i_8] [i_9] = (max((min((arr_1 [i_5 - 1] [i_5 - 1]), var_15)), ((min((arr_18 [i_5] [i_6] [i_8]), (arr_4 [i_5] [i_6] [i_7]))))));
                                arr_27 [i_5] [i_6] [i_7] [i_7] [i_8] [i_5] = min(-158620832, 127);
                                arr_28 [i_5] [i_5] [i_7] [i_8] = (min((max((max((arr_16 [i_8]), (arr_22 [i_8]))), var_10)), -92));
                                arr_29 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (max(var_14, -127));
                            }
                        }
                    }
                }
                var_23 = min(25619, (max(var_2, var_9)));
            }
        }
    }
    #pragma endscop
}
