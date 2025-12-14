/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = (min((((arr_3 [i_0]) ? var_4 : -1590901584)), (var_10 - var_1)));
        arr_5 [i_0] [i_0] = (min(1590901604, (min((var_0 * var_6), (~var_2)))));
        var_15 = (~121);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_8 [i_1] = ((((min(var_2, -853171138)) <= ((var_6 ? 1280939035 : 2647)))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 22;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_16 = arr_17 [i_2] [i_1] [i_3 - 2];
                                var_17 = ((((15825290857643524174 || (1136233313 ^ 30375))) ? ((((1 && (((var_12 ? var_13 : var_3))))))) : 2147483646));
                                var_18 = 15825290857643524193;
                            }
                        }
                    }
                    arr_22 [i_1] [i_1] [i_1] = (((((1280939035 ? 14 : 1))) / ((var_11 ? (arr_18 [i_2 - 2] [i_2] [i_2] [i_2] [i_2] [1]) : (((2350893738 ? (arr_9 [i_3]) : var_7)))))));
                }
            }
        }
        arr_23 [i_1] [i_1] = ((((((((var_11 ? (arr_14 [i_1] [21] [i_1]) : 2621453216066027441))) ? var_2 : (arr_12 [i_1] [i_1])))) ? (arr_11 [i_1] [i_1] [i_1]) : (-14495 + 317)));
        arr_24 [i_1] = (((max((arr_11 [i_1] [i_1] [i_1]), 127))) > (!-1));
    }
    var_19 = -var_13;
    var_20 = var_1;
    #pragma endscop
}
