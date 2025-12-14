/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] |= ((((var_13 >> (var_11 < var_3))) - ((-(-127 - 1)))));
                                arr_16 [i_2] [i_1] [i_0] = (max((((!(arr_0 [i_0])))), (max((((arr_2 [i_0]) / var_4)), (((!(arr_13 [i_1] [i_2] [i_3]))))))));
                            }
                        }
                    }
                }
                var_14 = ((((min(-110, (arr_2 [8])))) ? (((arr_0 [i_0]) - var_2)) : (((arr_0 [i_1]) ? 110 : 94))));
                arr_17 [i_0] [i_1] = (max((((max((arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_12 [i_0]))) | 240)), (((62 ? 1444169302 : var_2)))));
            }
        }
    }
    var_15 = ((var_11 ? (min(-1, 1)) : (((~149) ? (var_13 & 248) : var_1))));
    #pragma endscop
}
