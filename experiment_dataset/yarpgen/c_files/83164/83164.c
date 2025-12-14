/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (min((arr_4 [i_1]), (((~(((!(arr_0 [i_1])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((!(((var_14 ? (var_5 * 127) : var_13))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] &= 87;
                                var_19 = (max(var_19, ((max((((!(var_6 || var_0)))), var_1)))));
                                var_20 = ((-((var_4 ? ((max(var_15, -127))) : ((var_8 ? (arr_2 [i_0]) : var_0))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_21 = 306367776198766423;
                                var_22 = ((-var_7 <= ((((arr_9 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 1]) ? ((168 ? var_0 : 150)) : -123)))));
                                var_23 &= (arr_6 [i_0] [i_1] [i_2]);
                                arr_21 [i_2] [i_2] [i_1] [i_0] = ((+(((arr_12 [i_0] [13] [i_0]) ? 38592 : (arr_12 [i_6] [i_1] [i_2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = -1534380367336804198;
    var_25 = ((var_9 ? var_16 : ((min(170, -110)))));
    #pragma endscop
}
