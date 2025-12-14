/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((max(9223372036854775807, var_9))) ? ((max(9223372036854775807, 89))) : (min(0, var_2))))) ? (var_7 != -127) : ((min((!var_13), (max(var_13, 25250)))))));
    var_15 = ((((max(var_10, (~var_7)))) & (((!var_8) ? (max(var_3, var_5)) : (((167 ? 0 : 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = ((max(-var_3, 3208992584)));
                arr_6 [i_1] [i_1] [9] = (!127);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 = (min((((var_13 ? (!var_4) : var_11))), (((var_3 / 18446744073709551615) ? (var_13 < 117) : 15956335501715431238))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
