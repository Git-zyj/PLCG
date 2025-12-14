/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_6, (min(((999631137 ? var_0 : var_1)), ((-1 ? var_1 : -1687658444))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = ((max(var_9, ((var_2 ? var_1 : var_5)))));
                    arr_9 [i_0] = (min(1, var_9));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 = 137;
                                arr_16 [i_0] = 1687658444;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_27 [i_5] [i_6] [i_5] [i_5] [i_8] = ((min(var_9, var_6)));
                            arr_28 [i_5] [7] [i_7] [i_8] [i_8] = 1330802936;
                            var_13 = ((var_3 ? ((65535 ? var_6 : var_8)) : var_6));
                            arr_29 [5] [5] [6] [7] [i_5] [i_5] = var_8;
                        }
                    }
                }
                var_14 = (max(var_14, (((var_10 ? (((((min(var_10, -18141))) ? -4029810995049988263 : ((min(var_10, 65514)))))) : ((12667 ? -2135499424 : var_5)))))));
                var_15 = var_8;
                arr_30 [i_5 - 2] = var_8;
            }
        }
    }
    #pragma endscop
}
