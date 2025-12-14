/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 = var_10;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_22 &= ((!((((~var_7) ? var_2 : (~var_16))))));
        var_23 &= var_13;
        var_24 = (max(var_24, ((((min(((((arr_1 [i_0]) && 1))), var_3)) - var_1)))));
        var_25 = ((arr_1 [i_0]) & (arr_2 [i_0]));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_13 [i_1 - 1] [10] [17] [i_4] = (((arr_9 [i_1 - 3] [i_2] [i_3] [i_4]) << (((arr_9 [i_4] [i_3] [i_2] [11]) - 15994))));
                        var_26 = var_18;
                        var_27 = ((((~(arr_6 [i_1 - 3] [i_1 - 1] [i_1 - 3]))) - (arr_10 [i_1] [12] [i_3] [i_4])));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_28 = var_12;
            var_29 = var_3;
        }
        var_30 = (((-4 + (arr_5 [i_1] [11]))));
        var_31 -= -var_2;
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                {
                    var_32 *= 118;
                    var_33 += (((var_16 ? var_11 : var_14)) << var_7);
                    var_34 += 105;
                }
            }
        }
        var_35 = (15968570150800288505 > var_16);
    }
    #pragma endscop
}
