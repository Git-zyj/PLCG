/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 = (!var_8);
    var_18 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((-((var_14 * (arr_3 [i_0] [i_1] [i_1]))))))));
                var_20 = (max(var_20, ((max(-11, 90)))));
                var_21 = (((~(arr_1 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [i_1] [i_2] [i_3 + 1] = (!-429843902);
                            var_22 += (((((3945118904317129306 ? -3945118904317129307 : var_6)))));
                            arr_10 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = (min(((!(969019646303721837 < 255))), ((!(((var_10 ? var_3 : -8202298512436400442)))))));
                            arr_11 [i_2] = (((((arr_7 [i_1] [i_2 - 2] [i_2] [i_3]) & (arr_7 [i_0] [i_2 + 1] [i_3] [i_3]))) != (((arr_7 [2] [i_2 - 3] [2] [2]) / var_7))));
                        }
                    }
                }
                var_23 = -3945118904317129308;
            }
        }
    }
    #pragma endscop
}
