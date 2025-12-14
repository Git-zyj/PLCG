/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((min(var_3, var_2))));
    var_11 = ((var_8 > (8539203302130248893 | var_7)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((~(max(8539203302130248873, (31 / 70)))));
        var_12 += 8539203302130248893;
        arr_4 [i_0] = ((243 > (min(34961, 8539203302130248919))));
        arr_5 [i_0] = ((min(2, 7)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_13 = (min(var_13, (((0 ? (32767 && 8539203302130248893) : (min((~199), (arr_2 [i_1]))))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                {
                    arr_13 [i_3 + 1] [i_3 + 1] [i_3 - 2] [i_3] = ((!((min(85, var_5)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_14 ^= ((-(min(70, var_3))));
                                arr_18 [i_1] [i_1] [i_1] [i_1] = (min((min(1, 8539203302130248904)), ((((23 ? var_1 : (arr_9 [i_1] [i_2 - 1] [i_1])))))));
                                var_15 ^= 17;
                                arr_19 [i_3 - 3] [i_3 - 3] [i_3 - 3] [i_3] [i_3] = (min((((((min(44, 0))) && 17))), ((((min(var_7, var_1))) ? 65535 : ((-8539203302130248904 ? var_2 : 34840))))));
                            }
                        }
                    }
                    arr_20 [i_1] [i_1] [3] = min(var_7, (~55));
                    arr_21 [i_1] [i_2 - 1] [i_3 - 2] = (max((((~16) * (-8539203302130248904 > 65521))), (((((6295722656569336297 ? 63679 : -24277)) - 1)))));
                }
            }
        }
    }
    #pragma endscop
}
