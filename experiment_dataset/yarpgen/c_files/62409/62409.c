/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_10 -= ((var_1 ? (arr_1 [i_1 - 1]) : 4080));
                    var_11 = ((var_5 ? -var_7 : ((var_2 ? var_5 : var_4))));
                    arr_6 [16] = var_8;
                    var_12 = (max(var_12, 1));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    var_13 = -103;
                    var_14 |= var_4;
                }
                for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_15 [i_0 - 1] [i_0] [i_1] [1] [i_5] = 1;
                        var_15 = ((max(((arr_0 [i_4]), var_3))));
                    }

                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        var_16 += (arr_18 [7] [7] [i_4] [7] [7]);
                        var_17 = (min(var_17, var_6));
                        var_18 = (-43 ? 8 : -1);
                        var_19 &= ((arr_10 [i_4] [i_4] [i_4 + 2]) ? var_6 : var_3);
                    }
                    for (int i_7 = 3; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_20 ^= -1;
                        arr_22 [i_0] [i_0] [i_7] = var_6;
                    }
                    var_21 = 19;
                }
                var_22 = (max(var_22, -14274));
            }
        }
    }
    var_23 *= 107;
    #pragma endscop
}
