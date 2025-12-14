/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((!((((((min(-6217559278873544483, var_8)) + 9223372036854775807)) >> (arr_8 [i_2] [i_2 + 3] [i_2 - 1] [i_2 - 1])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 ^= min((((-var_6 >= (arr_18 [i_0] [i_2 + 2] [i_2 + 2] [i_2 - 2] [i_2 - 2] [i_3] [i_0])))), ((~((min(var_11, var_8))))));
                                var_16 = (min(var_16, (((!(((((((arr_13 [i_1]) * var_11))) ? ((var_3 ? var_1 : var_12)) : ((max(var_8, (arr_17 [i_0] [i_1] [i_2] [i_1] [i_4]))))))))))));
                                var_17 = (arr_2 [i_4]);
                            }
                        }
                    }
                    var_18 = (!-6217559278873544483);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_19 &= (~(min((!var_7), -6217559278873544483)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                arr_36 [i_7] [i_7] [4] [i_8] [i_9] = (~var_5);
                                var_20 = (min(var_8, ((-(arr_32 [i_5])))));
                                arr_37 [i_7] = (arr_31 [i_5] [i_7] [i_6] [i_7] [i_8] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
