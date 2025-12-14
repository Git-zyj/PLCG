/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 1;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((-((((((arr_9 [i_4] [i_0] [i_0] [i_1]) ? -52 : 1))) ? (max(4294967295, var_0)) : (min(var_4, 1047552))))))));
                                var_22 |= ((((!((max(11385999918213931823, 255))))) ? (((arr_11 [i_4 - 1] [i_4] [i_4] [i_4] [i_4 - 1] [i_4] [i_4]) & (arr_9 [i_0] [i_0 - 3] [i_0] [i_0]))) : ((max(255, (0 & var_13))))));
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] = (((arr_10 [i_2] [i_2] [i_2] [i_2] [i_2]) > (((1 ? (arr_3 [i_3 - 1] [i_3 - 1] [i_3]) : 1)))));
                                var_23 = (max(var_23, (((!(((255 - (arr_8 [i_0 - 2] [i_1] [i_1] [i_2] [i_3] [i_4])))))))));
                                var_24 = (((((0 ? (((arr_3 [i_3] [i_3 + 1] [i_3]) ? (arr_6 [i_2]) : 4055353191)) : (arr_0 [i_0 + 3])))) ? 239614104 : (((max(-6250133513190129637, 13306809752027138975)) % 224))));
                            }
                        }
                    }
                }
                var_25 = 1;
                arr_14 [i_1] [i_1] = -1;
            }
        }
    }
    var_26 = (max(-1, 1604227228499020646));
    var_27 += var_8;
    #pragma endscop
}
