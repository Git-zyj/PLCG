/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_0] [i_0] [i_2] [i_3 - 1] [i_3] = ((-9223372036854775799 ? ((((arr_3 [i_1] [i_1]) ? (max((arr_7 [3] [i_0] [3] [i_3]), (arr_6 [i_0] [i_0] [13] [10] [i_0]))) : 32759))) : (((((255 / (arr_4 [i_0] [i_0] [i_2])))) ? ((((arr_2 [i_0] [i_3]) ? (arr_3 [i_0] [i_3]) : (arr_5 [12] [i_1] [i_2] [i_3])))) : ((var_2 ? (arr_6 [i_0] [i_0] [i_0] [i_0] [1]) : var_15))))));
                            arr_9 [i_0] [i_3] = (((((65535 ? (arr_3 [i_0] [i_2]) : 288230376151711743)) / ((min((arr_3 [i_2] [i_3 + 1]), var_11))))));
                        }
                    }
                }
                var_20 = ((((((min(var_16, -1))) <= (max((arr_2 [i_0] [0]), var_3)))) ? ((((!(arr_2 [i_0] [i_0]))))) : 18158513697557839873));
                arr_10 [i_0] [i_0] [i_0] = (max((((arr_2 [i_1] [i_0]) ? (arr_2 [i_0] [i_1]) : var_10)), (arr_2 [i_0] [11])));
            }
        }
    }
    #pragma endscop
}
