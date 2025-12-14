/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (arr_4 [i_0] [4]);
                    var_14 = ((18446744073709551615 ? var_8 : var_7));
                    var_15 = (arr_1 [i_2 - 1]);
                }
            }
        }
        var_16 -= (arr_5 [i_0]);
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            {
                var_17 = ((max(var_10, (arr_9 [i_4 - 1] [i_4]))));
                arr_13 [18] [i_3] = var_2;
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_18 = (((1 ? (arr_14 [i_3] [i_3 + 1] [i_4 - 2]) : 22065)));
                                var_19 &= (min(var_5, -11932333015116524213));
                                var_20 += var_2;
                                var_21 += var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_9, (max(var_12, var_13))));
    #pragma endscop
}
