/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_20 = (-var_10 / var_8);
                                var_21 = ((var_15 ? 8 : (min(0, (0 * 255)))));
                                var_22 = (((((!(arr_9 [i_0] [i_2] [i_2] [i_3])))) < 255));
                                var_23 = ((((((((-127 - 1) + 0))) ? ((min(0, var_6))) : (((arr_13 [16] [i_4] [i_4] [i_2] [i_4] [i_4] [i_4]) ? (-127 - 1) : var_10))))) ? ((-(255 + -127))) : ((+(((arr_5 [i_0] [7] [15]) / 110)))));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] = (min(1450672569, 71));
                arr_15 [i_0] = max((min((arr_1 [i_1 + 1] [i_1 - 1]), (arr_1 [i_1 - 1] [i_1 + 3]))), -1450672570);
            }
        }
    }
    var_24 = 0;
    #pragma endscop
}
