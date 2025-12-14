/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max(((3 ? var_18 : var_12)), 127)) & var_9));
    var_20 = (((max(16123, (1 || 4369602196510072815)))) ? var_14 : (min(var_16, ((82 ? 109 : 164)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (min(var_16, (0 % 85)));
                var_22 = (max(var_22, ((((((var_15 ? ((7418535066134307155 ? 740384652 : var_12)) : var_7))) ? (((((3319 ? 96 : 3816))) ? (-110 % 6685) : 0)) : ((var_16 ? 6685 : 124)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_4] [i_4] = 169;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_23 = (min(16123, var_10));
                                var_24 = (max(var_24, var_11));
                                var_25 = (13195439573842989053 / var_4);
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = ((((((42 ? 161 : 1048544))) ? (max(var_1, 2162833265)) : var_2)));
    #pragma endscop
}
