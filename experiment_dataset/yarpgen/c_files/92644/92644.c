/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_1 - 3] = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_10 = ((!(((arr_0 [i_3 - 4] [i_1 - 1]) >= -var_2))));
                                var_11 = ((-(arr_6 [i_3 - 2] [i_1 - 3])));
                            }
                        }
                    }
                }
            }
        }
        var_12 = ((!(((arr_1 [i_0]) || (arr_1 [i_0])))));
        arr_17 [i_0] [i_0] = (min((((-(arr_5 [i_0])))), ((33808 ? (8388608 / 143552238122434560) : ((max(33835, 8388586)))))));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        var_13 = (arr_13 [i_5] [i_5] [i_5] [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_28 [i_5] [i_8] [i_7] [i_8 - 1] = ((!((!((min(var_6, (arr_24 [i_8] [i_5] [i_5]))))))));
                        arr_29 [i_5] [i_6] [i_8] = (min(var_8, (((min(8190, var_2))))));
                        arr_30 [i_8] [i_6] [i_7] [i_7] = (max((arr_3 [i_7 - 1] [i_8 - 1]), 18446744073709551615));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
    {
        arr_33 [i_9] = (max(((max(-8388608, (arr_10 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))), (max(((33808 ? (arr_19 [i_9]) : 18446744073709551602)), 15))));
        var_14 = (((min((min(7979244133418181419, 8388608)), ((((arr_3 [i_9] [0]) ? 40 : 228))))) * 7742));
        arr_34 [i_9] = (~(max((arr_12 [i_9] [i_9] [i_9] [i_9]), (max(18446744073709551605, (arr_22 [i_9] [i_9]))))));
        arr_35 [i_9] = (max((max((((arr_24 [i_9] [i_9] [i_9]) ^ (arr_27 [i_9] [5] [i_9] [i_9]))), (min((arr_2 [i_9] [i_9]), var_0)))), ((((!280375465082880) < 44497)))));
    }
    var_15 = ((min((max(1, 18446744073709551611)), (~4294967295))));
    #pragma endscop
}
