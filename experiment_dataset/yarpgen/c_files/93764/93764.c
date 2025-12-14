/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_6 ? ((var_0 ? (63 & 0) : -17606127381464898571)) : (((((0 ? 7941039583208772332 : 12629367239713596584))) ? ((-4695417349219550086 ? 0 : (-9223372036854775807 - 1))) : var_4)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = var_4;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_18 = ((-(((arr_1 [i_1 - 1] [i_1 - 1]) % var_10))));
                        arr_9 [9] [i_2] [i_3] = (var_6 / (((var_15 / -4749683245114033203) ? -4749683245114033202 : ((4749683245114033202 ? 3218570410336204281 : -2663690099361945742)))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    arr_19 [i_4] [i_5] [i_5] [i_6] = (17901412461402363786 != var_6);
                    var_19 ^= 12546655776264846135;
                }
            }
        }
        arr_20 [i_4] [i_4] = ((0 % (arr_15 [i_4] [i_4] [11])));
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                {
                    arr_29 [i_7] [i_7] [i_7] [i_9] = 4749683245114033202;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_20 += (((max(((var_1 ? 2130303778816 : var_1)), (arr_6 [i_7] [i_8] [i_9] [i_11])))) ? ((((0 <= (arr_33 [i_8] [i_8] [i_8] [i_10] [i_8]))))) : (arr_5 [i_9 - 1]));
                                var_21 = (((min(-4749683245114033205, (var_1 / -4749683245114033204)))) * (((16927606086421447770 / 5900088297444705480) ? (arr_22 [i_8]) : var_8)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
