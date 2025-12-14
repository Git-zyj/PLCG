/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = ((!((min((arr_5 [i_0] [i_0] [i_0 - 2]), -106)))));
                arr_6 [i_0] = (((arr_3 [i_0] [i_0 - 1] [1]) ? (~193) : -193));
                var_20 = (max(var_20, (((17587891077120 ? (((max((arr_5 [i_0] [i_0] [i_0 + 1]), 63)))) : ((1 ? 1 : 18446744073709551603)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [5] [i_1] [i_3] = ((((((arr_3 [i_0] [i_1] [i_0 + 1]) - var_6))) ? ((((-17587891077120 ? (arr_2 [i_0] [17] [i_0]) : 193)))) : 1));
                            var_21 = var_18;
                        }
                    }
                }
            }
        }
    }
    var_22 = var_15;
    var_23 = var_18;
    #pragma endscop
}
