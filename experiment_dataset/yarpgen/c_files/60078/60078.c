/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!((((~-17706) ? (1280129484 == 24939) : var_9))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (((((min(var_2, var_1)))) / ((38 ? var_6 : 14))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_4] = (218 / (((1036513208 * 0) ? (((1 ? var_10 : var_7))) : ((-1 ? 21045 : 2616504777311573155)))));
                                arr_15 [i_4] [i_2] [i_4] = 37;
                                var_16 |= var_10;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_2] [i_0] [i_0] = ((((min(((var_11 ? 0 : 8860)), var_2))) && 0));
                                var_17 = -2616504777311573135;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_18 = 27;
                                arr_28 [i_8 - 1] [i_7 - 1] [i_2] [i_1] = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((((var_5 ? 70 : var_10))) >> (((((var_3 + 14162950264314412363) ? (min(var_0, 12724)) : var_4)) - 12693))));
    #pragma endscop
}
