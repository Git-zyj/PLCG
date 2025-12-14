/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 |= (arr_1 [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, 243));
                                var_22 += var_13;
                            }
                        }
                    }
                    var_23 = ((-1 ? (arr_6 [i_0 + 1] [i_2 - 1] [i_2]) : (((17927277850683950739 ? var_15 : 524287)))));
                }
            }
        }
    }
    var_24 = (max(44775, var_10));
    var_25 = 4294967295;
    var_26 = ((var_14 ? 18446744073709551595 : ((-20761 ? 32753 : (max(883749864, var_18))))));
    var_27 = 3411217418;
    #pragma endscop
}
