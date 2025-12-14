/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += 22;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((arr_3 [i_0]) ? (4 < 12) : var_3));
        arr_5 [i_0] = 4;
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_10 [i_1] [i_2] = ((max(((-1 ? 6 : 121)), (120 & 195))) & (((((max((-127 - 1), 3))) ? 195 : ((max((arr_7 [i_1 + 1] [i_1 + 1]), 60)))))));
            var_21 = (arr_9 [i_2]);

            /* vectorizable */
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                var_22 = (((arr_1 [i_1 + 1]) && (arr_0 [i_1 + 1])));
                arr_13 [i_1 + 1] [i_2] [i_2] [i_2] = ((497043551 ? -126 : 1997345781));
                arr_14 [i_1] [i_2] [i_3] = 2;
            }
            arr_15 [i_1] [i_2] = -66;
        }
        arr_16 [i_1] [i_1 + 1] = max(-112, 36);
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_19 [i_4] = var_16;

        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_23 = (max(var_23, 61));
                            arr_31 [i_4] [i_4] [i_5] [i_5] [i_4] &= 1155694617;
                            arr_32 [i_8] [i_5] [i_6] [i_7] [i_8] = ((~(-1 | 56)));
                        }
                    }
                }
            }
            arr_33 [i_4] [i_5] [i_4] = 108;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
        {
            arr_38 [i_9] = ((-54 ^ (((arr_37 [i_4] [i_9]) ? 1155694615 : 18446744073709551599))));
            arr_39 [i_4] [i_9] [i_4] = 18441140641276903145;
            arr_40 [i_4] = var_12;
            var_24 -= -121;
            var_25 *= (17179869183 < -621828281);
        }
        arr_41 [i_4] = arr_6 [i_4];
    }
    #pragma endscop
}
