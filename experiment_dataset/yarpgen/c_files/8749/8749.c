/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((2210247910 + (min(var_12, 3799705105)))) + (var_5 + var_10)));
    var_15 += (max((max(33338, -1)), ((-1 ? -var_13 : (max(-1, var_3))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_3;
        arr_4 [i_0] [i_0] = ((!(((-((max(var_0, -20817))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = (852 == 1);
                    var_16 = (min(var_16, 0));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] [i_1] [11] [i_3] [i_0] = ((-(min(var_10, (18093864443847324035 & 1)))));
                                var_17 = (min(var_17, 1));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_18 = ((var_10 == ((((1048575 % 1623182206) >= (((max(214, (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
                        var_19 += ((max(var_6, ((var_2 - (arr_19 [7] [i_1] [i_1] [7]))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_20 = ((1860886476 <= (var_1 + var_9)));
        arr_23 [i_6] = (((~(arr_20 [i_6]))));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                {
                    arr_32 [i_9] = (arr_26 [i_9]);
                    var_21 = ((1 ^ (arr_9 [i_7] [i_7] [i_7])));
                    var_22 *= 17110007548226568196;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            {
                                arr_43 [i_10] [i_11] [i_12] [i_13] = 352879629862227580;
                                var_23 = 5692021137130800892;
                                var_24 = (max((arr_36 [i_10] [i_10 + 2] [i_10]), (min(218, var_13))));
                                arr_44 [i_7] [i_7] [i_10] [i_10] [i_10] = (((arr_34 [i_7]) ? ((min((arr_2 [i_7] [i_10]), -1808841449942763763))) : (((arr_31 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_7]) ? 17110007548226568215 : ((max((arr_2 [i_7] [i_10]), var_5)))))));
                            }
                        }
                    }
                    arr_45 [i_7] [i_7] [i_11] [i_10] = ((((((var_0 + (arr_1 [i_10]))))) ? var_4 : (min((-9223372036854775807 - 1), (~-255846295604476396)))));
                    arr_46 [i_7] [i_7] [i_7] [i_7] |= (153 * var_12);
                }
            }
        }
        var_25 += (((0 < (min((arr_11 [17]), (arr_20 [i_7]))))));
    }
    var_26 = var_3;
    #pragma endscop
}
