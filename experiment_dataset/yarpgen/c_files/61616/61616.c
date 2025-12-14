/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_9 ? var_11 : ((-8102788348675073726 ? var_10 : (min(1075869429, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, ((min((arr_9 [i_0] [i_1] [8] [i_2]), -8102788348675073726)))));

                            for (int i_4 = 3; i_4 < 12;i_4 += 1)
                            {
                                var_16 = (min(var_16, -127));
                                arr_15 [i_0] [11] [i_2] [i_0] [i_2] [13] = 0;
                                var_17 = (min(var_17, (((~((((1 ? 32767 : 32767)) * ((1294926946 ? (arr_3 [i_2]) : 57)))))))));
                            }
                            var_18 &= ((var_12 / (-var_6 || 1)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_19 = (max(-106, 8));
                            var_20 = (min((max(var_10, ((var_2 ? (arr_1 [i_5]) : 32)))), ((((arr_13 [i_0] [3] [i_0]) / var_7)))));
                            arr_20 [i_6] [i_0] [i_5] [i_0] [7] = ((65530 && (arr_11 [i_0])));
                            var_21 = 9223372036854775807;
                        }
                    }
                }
                var_22 &= (min((3245974247 - 0), var_9));
            }
        }
    }
    #pragma endscop
}
