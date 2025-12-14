/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_18 = (((((arr_1 [i_0 - 1] [16]) ? 0 : var_4)) + 0));
        arr_3 [i_0] = ((((((-1 + 2147483647) << (var_6 - 446228270)))) ? (~92) : var_17));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (((((142 ? var_9 : var_9))) ? 1257791472 : var_1));
                    arr_9 [i_0] = var_5;
                    arr_10 [i_0 + 3] [0] [i_2] &= ((14 ? var_13 : (arr_2 [0])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_19 = (min(var_19, ((!(((1313 + var_8) || 9847896009437035558))))));
        var_20 = (max(var_20, 0));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        var_21 = var_8;
        arr_16 [i_4] [13] = (8990250573369366201 * 184);
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = ((1333 * (6982 ^ 184)));
        var_22 = 0;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 12;i_9 += 1)
                {
                    {
                        var_23 = -1334;
                        var_24 = (-1 / 268435455);
                    }
                }
            }
        }
        arr_33 [7] [13] = (4294967295 < -3915817472);
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 15;i_10 += 1)
    {
        var_25 = -213114962099079401;
        var_26 = 25696;
    }
    var_27 = var_15;
    #pragma endscop
}
