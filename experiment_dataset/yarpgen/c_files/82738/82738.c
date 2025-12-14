/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    var_21 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_22 = (max(var_22, (arr_3 [i_0] [i_1])));
                var_23 = 10103060818586193888;
                var_24 = (var_15 ? ((max((arr_2 [i_0] [i_0] [i_0 - 1]), (arr_2 [i_0] [i_0 + 2] [i_0 + 1])))) : 5643);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_25 = (max(var_25, (((8 > (min((((var_9 + 9223372036854775807) << (983040 - 983040))), (arr_5 [i_0 + 1]))))))));
                                arr_12 [i_4] [i_2] [i_2] [i_0] = 7168;
                                var_26 -= -1633111572;
                                var_27 = 154232137;
                            }
                        }
                    }
                }
                var_28 *= -119;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                var_29 -= (arr_13 [2]);
                var_30 = (arr_14 [7]);
            }
        }
    }
    var_31 = (min(var_31, var_19));
    #pragma endscop
}
