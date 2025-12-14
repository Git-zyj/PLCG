/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((!var_0) >= (~var_7)));
    var_13 &= var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = (arr_2 [i_2]);
                    arr_9 [i_0] [i_1] [i_1 - 1] [i_2] = ((((((arr_6 [i_1 - 1]) & var_8))) ? 1 : 2164286633));
                    var_14 = (min(var_14, (arr_6 [i_1 - 1])));
                    arr_10 [i_2] = ((((((2164286633 - 5463) ? (((~(arr_5 [i_1])))) : (max(2164286636, 2130680650))))) ? 25793 : (((!4294967295) ? (39744 | 1) : (arr_3 [i_1 - 1] [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (((((arr_13 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1]) ? var_11 : (arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_2])))) ? ((1 ? (arr_13 [i_1 + 1] [i_1 - 1] [i_1 - 1] [11] [i_2]) : (arr_13 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1] [1]))) : ((25793 ? 1 : 32767)));
                                var_15 = (max(var_15, (((-8343 ? ((((max((arr_13 [i_0] [i_0] [i_2] [i_3] [i_4]), 66846720)) * 5463))) : var_7)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
