/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 ^= ((((max((!-69024064), ((var_4 * (arr_0 [i_0] [10])))))) >= (((arr_0 [7] [i_0 - 1]) ? (arr_0 [4] [i_0 - 3]) : 18446744073709551615))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = (~0);
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] [i_3] = (arr_5 [9]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, var_6));
    var_18 = (((((62592 ? var_12 : var_3))) ? var_1 : var_13));
    #pragma endscop
}
