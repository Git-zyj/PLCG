/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] = (min(3569088634, ((~(max((arr_7 [i_0] [10] [i_2] [i_2]), -440713449462974876))))));
                                var_11 = (((((arr_10 [i_2] [i_2 + 2] [i_2 + 2] [i_4] [i_4] [i_4]) * 3401208159)) | 3401208174));
                                var_12 = (max(var_12, ((min((min(((1328118583 ^ (arr_6 [i_4] [12] [i_1] [i_4]))), var_8)), var_1)))));
                            }
                        }
                    }
                    var_13 = var_8;
                    arr_15 [i_0] [i_1] [i_2] [i_2] = 3401208174;
                    arr_16 [i_2] [i_1] = var_9;
                }
            }
        }
    }
    var_14 += (min((~4), ((3401208174 ? (max(var_5, var_3)) : var_4))));
    var_15 = (max(var_15, ((max((((((min(var_4, var_1))) ? (~4) : 167))), (((var_9 >= 163) ? 173147017086699257 : ((max(var_1, var_2))))))))));
    #pragma endscop
}
