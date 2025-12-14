/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, 3179426755));
    var_18 *= (!var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_10;
                var_19 = (((3179426755 % (arr_4 [i_0] [i_0] [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = ((+((((var_15 / 1676989529) > (arr_4 [1] [i_1] [i_2 - 1]))))));
                                arr_12 [8] [8] [8] [i_4] [i_4] = ((((min((arr_6 [i_2 - 1]), (arr_6 [i_2 + 1])))) || (arr_6 [i_2 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 12;i_7 += 1)
            {
                {
                    var_21 = (max(var_21, ((((+((var_15 ? (arr_13 [6] [i_7 - 3]) : var_7))))))));
                    var_22 = (max(var_22, (((4659181234019807646 ? 12532937112312493821 : -97)))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_23 *= ((((arr_15 [i_7 + 1]) ? (9881091103802069719 != 28) : ((((arr_14 [i_9]) > var_12))))));
                                var_24 = (min(-96, (max(336742590473850241, -715336074))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
