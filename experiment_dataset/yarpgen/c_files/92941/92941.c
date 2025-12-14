/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -23378;
    var_14 = ((var_4 ? ((max((((-32767 - 1) <= var_10)), (!var_2)))) : ((min(-23378, 0)))));
    var_15 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (min(var_16, var_5));
                var_17 ^= ((-(-23378 > 23378)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            {
                arr_10 [i_2] [3] = (((((-23362 ? -23378 : (arr_9 [i_2 - 1] [i_3] [i_3 + 1])))) ? (((arr_9 [i_2 - 2] [i_3 - 2] [i_3 - 2]) ? var_6 : (arr_9 [i_2 + 2] [9] [i_3 - 3]))) : ((min(var_1, var_8)))));

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_18 |= ((((((var_5 && var_3) & var_6))) ? (min((var_9 | var_8), (min(var_10, 215)))) : (((((min(36832, var_3))) ? (114 <= var_8) : var_1)))));
                    var_19 = (max(var_19, (((((var_3 ^ var_10) >> (((var_1 & -40) + 2660062857410217735)))) >> (((((arr_0 [i_2 - 2]) ? ((((var_1 + 9223372036854775807) >> (1795404912 - 1795404856)))) : (min(var_9, (arr_1 [i_2]))))) - 41))))));
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_20 = ((23378 ? 1795404912 : (~1709981467)));
                        var_21 &= ((var_7 || (9772158116883160289 & -31777)));
                        var_22 ^= var_4;
                        var_23 = (((arr_17 [i_6] [i_3] [i_3 - 2] [i_2 - 1] [i_2]) ? (var_3 * var_3) : 23378));
                    }

                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        var_24 ^= (arr_0 [i_5]);
                        arr_22 [i_7] [i_7] [i_5] [i_5] [i_3] [i_2] = (var_10 + var_0);
                        arr_23 [i_2] [8] [i_2] [i_2] [i_2 - 1] = ((-1 ? var_8 : var_11));
                    }
                }
            }
        }
    }
    #pragma endscop
}
