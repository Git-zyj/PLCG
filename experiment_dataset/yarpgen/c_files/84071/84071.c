/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] = ((116 ? 1 : -108));
                    var_20 *= (((17 & (arr_4 [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] = var_3;
                                arr_14 [i_4] [i_3] [i_0] [i_0] [i_0] = (min(((((47654 ? var_5 : var_16)) ^ (arr_10 [i_2] [i_3] [i_4]))), (max(((17 ? -106 : 98)), -111))));
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_4] [i_0] = (arr_3 [9]);
                                var_21 = (min(var_21, ((((arr_5 [i_4]) ? (arr_5 [i_0]) : ((-(arr_5 [i_2]))))))));
                            }
                        }
                    }
                    var_22 = (min(var_22, (((+((max((arr_5 [i_0]), (arr_5 [i_1])))))))));
                }
            }
        }
    }
    var_23 = ((!((var_17 < (!101)))));
    #pragma endscop
}
