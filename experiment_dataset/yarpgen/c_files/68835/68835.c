/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min(var_17, 4209142934)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((!(arr_0 [i_0]))));
                arr_6 [3] [i_1] = (arr_4 [1] [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] = (arr_0 [i_0]);
                            arr_14 [i_1] [15] [i_1] = ((~(((0 < var_10) ? 19871 : 15997))));
                            arr_15 [i_1] [i_1] [i_1] = (max(((4063223288 ? (min(var_1, 40097)) : ((max(2, -1))))), 0));
                            arr_16 [10] [10] [i_2 + 1] &= (!85824361);
                            arr_17 [i_0] [i_3] [i_0] [i_3] [i_1] = (var_19 ? (max(var_0, (min(1, 288230376151710720)))) : var_17);
                        }
                    }
                }
            }
        }
    }
    var_21 &= 9223372036854775807;
    var_22 = min(1, (!-23628));
    var_23 = (min(0, (~29)));
    #pragma endscop
}
