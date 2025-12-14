/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (var_8 * (((((~15) <= (max(2147483647, (arr_0 [i_0] [6]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_4] [i_3] [i_2] [i_1] [i_1] [i_2] = (((((arr_10 [3] [i_1] [i_2] [i_2] [i_4]) / var_6)) ^ var_7));
                                arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [i_2] = ((var_9 ? (max((arr_10 [i_4] [i_2] [i_2] [i_2] [i_0]), var_7)) : ((max(113, (arr_8 [i_2] [i_3] [i_2] [i_1] [i_2]))))));
                                arr_13 [i_4] [i_2] [i_3] [i_2] [i_2] [i_0] = (((min((arr_5 [i_0] [i_0] [i_2] [i_2]), (min((arr_6 [i_0]), (-32767 - 1))))) > (((-(-32767 - 1))))));
                                arr_14 [i_3] [i_3] [i_3] [i_3] [i_0] [i_3] [i_3] = var_3;
                                arr_15 [i_4] [i_3] [i_0] [i_1] [i_0] = (arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_10 = var_3;
    var_11 &= (max(((max(var_4, var_3))), ((~(-1 < 62584)))));
    var_12 = (((var_0 ? ((min(-32750, 223)) : var_5))));
    var_13 = (min(var_6, (1949 <= 4063664991)));
    #pragma endscop
}
