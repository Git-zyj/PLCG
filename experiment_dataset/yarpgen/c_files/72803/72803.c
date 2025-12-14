/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = (max(((var_13 ? var_2 : var_5)), 0));
                var_19 = var_3;
            }
        }
    }
    var_20 -= ((((min(18446744073709551615, var_6))) || var_0));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_18 [i_6] [i_6] [i_5] [i_4] [i_3] [i_6] [i_2] |= (((((((16140901064495857664 ? 830 : 64706)) + ((var_10 ? 64706 : 830))))) % (((arr_17 [i_2 + 2] [i_3 - 2] [i_4] [i_5 - 1] [i_2 + 2]) ? (arr_17 [i_2] [i_3 - 3] [i_4] [i_5] [i_6]) : (arr_17 [i_2 + 2] [i_2] [0] [i_2] [i_2 + 1])))));
                                arr_19 [i_2] [i_2] [i_4] [i_5] [i_6] = ((((((-7495 || 231199923) >= (min(231199917, (arr_13 [i_2] [i_2 - 1])))))) * (arr_3 [i_2])));
                            }
                        }
                    }
                }
                arr_20 [i_2] [i_3 - 2] = (((min(((829 ? 847 : 59216)), 18335)) - ((1143914305352105984 ? 6319 : 1))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        {

                            for (int i_9 = 1; i_9 < 10;i_9 += 1)
                            {
                                arr_29 [i_2] [i_3] [i_7] = (arr_9 [i_2 + 1] [i_3 - 2] [i_8]);
                                var_21 = (max(var_21, (arr_16 [8] [2] [i_7] [2] [i_2])));
                                var_22 = (min(var_22, (((((~(min(var_12, var_0)))) >> ((var_15 >> (((~var_9) - 100)))))))));
                                arr_30 [i_8] [i_8 + 1] [i_8 + 2] [8] [i_8 + 1] [i_8] [i_2] = (((((var_2 / 17302829768357445632) ? var_9 : (((-32767 - 1) ? var_5 : var_3)))) == (((arr_28 [i_2 - 1] [i_3] [i_7] [i_7] [i_9]) + (((arr_10 [i_8 + 2] [i_7 - 1] [i_3]) ? 32256 : var_7))))));
                            }
                            var_23 = ((4063767373 ? 19154 : ((min(829, 12)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_24 -= (~-1);

                            for (int i_12 = 0; i_12 < 12;i_12 += 1)
                            {
                                var_25 ^= ((((((arr_1 [i_10]) ? ((max(1, (arr_2 [i_12])))) : (var_2 != 64706)))) ? (arr_24 [i_2 + 2] [i_2] [i_2 - 1] [i_11]) : (min((max(var_5, (arr_22 [i_10] [i_2]))), var_17))));
                                arr_37 [i_2 - 1] [i_2] = (((((min((!1378026864), (arr_26 [i_2 + 2] [i_2]))))) % -5485000253726087731));
                                var_26 ^= (((min(1125898833100800, (arr_31 [i_3 - 2] [i_11]))) != 820));
                                arr_38 [i_11] [i_2] [i_3] = ((12114 ? (((-(arr_24 [i_3] [i_10] [i_11] [i_2])))) : (max(((var_1 ? (arr_35 [i_3] [i_10]) : var_12)), (((arr_12 [i_2] [i_11] [i_2]) ? 1143914305352105970 : 0))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
