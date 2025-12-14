/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    var_16 = (max(var_16, (((-((-5349916533088240209 ? var_12 : (0 - var_10))))))));
    var_17 = ((1 ? -8073 : -26));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 *= ((min(var_8, var_5)));
                arr_5 [i_0] [i_0] [i_0] = ((!(-var_3 | var_11)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = ((6548631755496865048 ? (min(var_8, -944003934)) : -1));
                                var_20 = ((((max(((var_9 ? 11325672620892983209 : 0)), (((var_12 ? 8073 : var_2)))))) ? (max(var_9, var_10)) : ((var_5 ? var_4 : var_10))));
                                var_21 = (min(var_21, (((((max(30666, 6548631755496865048))) ? ((((-6 + 2147483647) >> (var_14 - 14015527410404589027)))) : (max(8073, 4566411051280374301)))))));
                                arr_15 [17] [i_0] [i_2] [i_0] [i_0] = (max(((var_9 ? var_6 : ((max(1, 8191))))), (((min(-102, var_9))))));
                                var_22 = max((!var_0), (!var_12));
                            }
                        }
                    }
                }
                var_23 = (max(var_23, ((((((((max(-16233, 34869))) ? var_14 : var_7))) || var_11)))));
            }
        }
    }
    #pragma endscop
}
