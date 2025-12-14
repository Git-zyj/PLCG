/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, ((min(var_2, 1422681964)))));
                        var_14 -= (arr_4 [i_1] [i_1]);
                        var_15 = (max(var_15, (((-1413092935 + (((32505856 != (max(32505856, 193))))))))));
                        var_16 += ((~(((3243465299 ^ var_9) ? -4531672869519956773 : 3676258883))));
                    }
                }
            }
        }
        var_17 = (max(var_17, ((((var_10 ? -1794583612 : -1825937332))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_18 = (!var_8);
                        var_19 -= ((1008 ? 2205044342 : -32657));

                        for (int i_8 = 2; i_8 < 16;i_8 += 1)
                        {
                            var_20 &= (var_10 & -4985059936945485314);
                            var_21 += (~2113868857);
                            var_22 = ((arr_0 [i_6 - 1]) ? (arr_0 [i_6 - 1]) : var_10);
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_23 = ((!(arr_3 [i_6 + 1])));
                            arr_26 [i_6] [i_6] [i_6] = ((3 ? 870832547 : 32505856));
                            var_24 = ((-(arr_6 [i_6 - 2] [i_6] [i_5])));
                            var_25 = (min(var_25, (arr_1 [i_4])));
                            arr_27 [i_6] [i_6] [0] [i_7] [i_7] [i_9] = (arr_25 [i_6 - 2] [i_5 + 3]);
                        }
                    }
                }
            }
        }
        arr_28 [i_4] = (arr_14 [6] [i_4] [i_4]);
        var_26 = var_5;

        for (int i_10 = 2; i_10 < 19;i_10 += 1)
        {
            /* LoopNest 3 */
            for (int i_11 = 4; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_27 &= ((-1944471575 ? 0 : 1712213268));
                            var_28 = (arr_22 [i_11 + 3] [i_11] [i_11 - 1]);
                            var_29 = (arr_24 [i_4] [i_10] [i_4]);
                        }
                    }
                }
            }
            var_30 -= (((((9223372036854775807 ? 17255226018779224448 : var_7))) ? 12471913678693527343 : (arr_36 [i_4] [i_10] [i_4] [i_4] [i_10 - 1])));
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 17;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 19;i_15 += 1)
                {
                    {
                        var_31 = var_12;
                        var_32 = (max(var_32, (((((2217898079 >> (-22 + 42))) < (3828812472 * var_8))))));
                        var_33 = (min(var_33, (arr_37 [i_15 - 1])));
                        var_34 = -1601486494;
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            var_35 += ((((-18140 ? 27114 : 355140950)) == (var_3 & var_3)));
            var_36 -= var_1;
            var_37 = (max(var_37, (arr_37 [i_4])));
            arr_46 [i_4] [i_16] [i_16] = (arr_6 [i_4] [i_4] [i_4]);
        }
    }
    var_38 = (97 ? (!var_6) : ((var_0 * (-12218 / 2929169707019055160))));
    var_39 = (max(var_39, var_9));
    #pragma endscop
}
