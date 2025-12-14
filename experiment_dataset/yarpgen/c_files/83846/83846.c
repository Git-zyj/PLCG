/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (((((4196264140 ? -8274408 : 4148148731))) ? (((-958969389 / 4148148731) ? (!var_0) : var_7)) : (min(136, (((136 ? 137 : var_0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [4] [0] [i_0] [4] &= ((~(((739984064400662875 % -958969389) * -1209529303))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = ((((((3494452969 ? 17706760009308888740 : 0)) | ((min(48, 8274408))))) ^ ((((arr_0 [i_2] [i_3]) ? (((var_10 ? 3003275731 : var_15))) : (min(var_5, (arr_15 [i_1] [i_1]))))))));
                                var_20 = (18446744073709551615 | 0);
                            }
                        }
                    }
                    arr_18 [i_1] [i_1] [i_2] [i_2] = min(((((min(135, var_17))) ? ((var_7 ? (arr_3 [i_2 - 1]) : var_13)) : ((((arr_1 [i_0]) ? 82 : 1))))), (min((arr_17 [i_0] [i_0] [i_2] [i_2] [i_1] [i_0] [i_1]), (max(var_4, 2097151)))));
                }
            }
        }
    }
    var_21 = (max(var_21, (((((((var_3 ? var_12 : var_7))) ? 26 : -var_4))))));
    var_22 = ((((((((-302839793 ? var_14 : 12063))) ? -24070 : var_3))) && (((((max(var_1, var_15))) ? ((var_1 ? var_5 : var_0)) : var_1)))));
    #pragma endscop
}
