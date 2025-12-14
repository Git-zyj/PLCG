/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = (((!1) | 27826));
                    arr_8 [i_0] [i_0] = var_10;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 10;i_4 += 1)
        {
            var_15 = (max(-63, (53 == -53)));
            var_16 = (max((((1 == 27826) << var_2)), (5800591204736716126 != 146)));
            var_17 = (min(((max(1, 1))), var_9));
            var_18 = -var_3;
        }
        arr_15 [i_3] = (--51);

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_19 = (((~1) | (((70 != (!-64))))));
            var_20 = -64;
            var_21 = ((~(((((max(177, var_11))) == (1 && -22498))))));
            var_22 = (max(var_22, (((-((1 ? 46908 : 71)))))));
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_23 = ((((min(-64, var_3))) >= ((71 ? var_0 : 64))));
            var_24 = ((9223372036854775807 - var_12) + ((((-var_12 <= (-53 % -54))))));
        }
    }

    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        arr_24 [i_7] = (max((!22525), (max(var_12, 41))));
        var_25 = ((((2031782312 / (((max(6, var_11)))))) * -27832));
        var_26 = (max(var_26, (((~(max((24445 % 9223372036854775797), -var_7)))))));

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_27 = 32756;
            arr_29 [i_8] [i_8] = (~529555794);
            arr_30 [2] [i_8] &= ((((!(min(var_11, var_1))))));
        }
    }

    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_28 &= (2012319538 * 65519);
        var_29 = (!var_7);
    }
    for (int i_10 = 0; i_10 < 0;i_10 += 1)
    {
        var_30 = var_9;
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 9;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    {
                        var_31 = max((min(224, -9223372036854775797)), 1);
                        arr_45 [i_10] [i_10] [12] [i_10] [i_10] = (9223372036854775797 & 128);
                        arr_46 [i_11] [i_11] [i_10] = (((min(var_12, -9223372036854775797))) ? 7 : ((max(var_2, 202))));
                    }
                }
            }
        }
        var_32 = 2012319538;
        var_33 = (2012319515 / 16052817698074769359);
        var_34 = ((-((var_11 ? 5415918003160806815 : (var_5 - 9223372036854775807)))));
    }
    #pragma endscop
}
