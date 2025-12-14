/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((var_7 + 2147483647) << (((var_1 < var_7) - 1)))))));
    var_19 = (((min(7216093484689322618, 84)) & ((((84 && var_17) ? (!var_16) : ((min(var_13, 22))))))));
    var_20 -= (((((var_4 ? (413310323 && 0) : var_7))) % ((-var_14 ? -var_2 : var_10))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (((-(min((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1]))))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 -= (((((arr_2 [i_0 + 1]) ? (arr_5 [i_2] [i_1]) : (var_11 >= var_15))) - var_0));
                                var_23 = (((((var_8 + 2147483647) << (((arr_10 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_2 - 3]) - 6667282432392101051))))) ? (((((arr_10 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_2 - 3]) && (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2 - 1]))))) : (min((arr_10 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_2 + 2]), var_8)));
                            }
                        }
                    }
                }
                var_24 ^= max((((arr_10 [i_0 - 1] [i_0 + 1] [i_0] [i_0 - 1]) ? var_5 : (arr_11 [i_1]))), (((413310323 ? 17869 : -84))));
                arr_12 [i_0] [i_1] = (((arr_8 [i_0 - 1]) + (((arr_8 [i_0 - 1]) * var_1))));
            }
        }
    }
    #pragma endscop
}
