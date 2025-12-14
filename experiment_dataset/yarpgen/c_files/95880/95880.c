/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (max(((var_9 < (((arr_1 [i_0] [i_1]) + var_2)))), (((max(16594197555109297097, (arr_0 [i_0]))) > ((((!(arr_0 [i_0])))))))));
                var_19 = 1852546518600254511;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_20 = min(((((((arr_1 [i_2] [i_3]) & (arr_9 [i_2])))) ? (max(var_12, 9762343114895287740)) : (14616191216037333650 ^ 18446744073709551615))), ((((min((arr_9 [i_2]), (arr_8 [i_2])))) ? (!3461088758875088186) : (((arr_10 [i_2] [i_3]) ? var_0 : 3830552857672217965)))));
                var_21 = (~(arr_8 [i_3]));
                var_22 = ((~((var_14 ? (((arr_2 [i_2 - 1] [i_2 - 1]) ^ var_4)) : (min(var_10, (arr_2 [i_2] [i_2 - 1])))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_20 [0] [i_3] [i_4] [i_5] [2] [i_6] [i_5] = (min(((min((arr_7 [i_5]), (arr_14 [i_2 - 3])))), ((var_16 ? ((16594197555109297087 >> (((arr_6 [i_3]) - 105)))) : -var_1))));
                                var_23 = (((var_7 ? 7150271322439550060 : (arr_0 [i_5]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
