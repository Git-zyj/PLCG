/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = -11297855;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_1] [i_0] [i_3] = 8415;
                        var_16 &= (arr_6 [i_1] [i_3] [i_3 - 2] [i_1]);
                        var_17 = (-2147483647 - 1);
                    }
                }
            }
        }
        var_18 = (min(var_18, ((((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : 4294967276)))));
    }
    for (int i_4 = 3; i_4 < 16;i_4 += 1)
    {
        var_19 = (min(var_19, 1));

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_20 = ((((((var_11 ? (arr_13 [i_4] [i_5]) : var_12)) / (-28828 % var_8))) / 20));
            arr_15 [i_5] [i_5] &= (((max(((var_7 & (arr_10 [i_4]))), (var_4 ^ var_13))) & var_2));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    {
                        var_21 &= ((~((var_11 ^ ((min(var_9, var_2)))))));
                        var_22 = var_0;

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            var_23 = (min(var_23, (((((var_0 ? (((arr_10 [i_4 - 1]) ? (arr_22 [6] [i_7]) : (arr_17 [i_4 - 3] [i_4 - 3] [i_4] [10]))) : (arr_10 [i_4 - 2]))) - (arr_14 [i_4 - 2]))))));
                            arr_24 [5] [i_5] [i_6] [i_7] [17] [i_4] [i_7] = -28;
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_24 -= (max((((((((arr_20 [i_6] [i_7] [i_6] [6] [i_6]) / 2147483647))) ? 0 : ((-116 ? var_12 : (arr_18 [i_6] [i_7] [i_7])))))), (max(869469804, -7801233933178250602))));
                            var_25 = (((!var_12) >= (((arr_19 [i_4]) + (arr_20 [i_4] [13] [i_6] [i_7] [i_4])))));
                            var_26 *= var_6;
                        }
                        for (int i_10 = 2; i_10 < 18;i_10 += 1)
                        {
                            var_27 = ((((((arr_20 [i_5] [i_4] [i_4 - 2] [i_4 - 3] [i_5]) ? (arr_20 [i_5] [12] [i_4 - 1] [i_4 + 3] [i_5]) : -98))) ? (arr_23 [i_10 + 1] [i_4 - 2] [i_4] [i_4 - 2] [i_4 + 2] [i_4 + 3]) : ((((arr_20 [i_5] [i_4 + 2] [i_4 + 3] [i_4 - 2] [i_5]) ? 0 : var_8)))));
                            var_28 = ((((((arr_26 [i_10 - 2] [i_7] [13] [i_5] [i_4] [i_4]) ? ((max(var_0, var_11))) : (arr_12 [i_4] [i_4])))) && -39));
                            arr_29 [i_4 - 1] [i_4] [i_5] [i_4] [i_4] [i_7] [i_10] = (((((((arr_10 [i_4]) * 65515)))) ? (((0 * var_7) ? (((arr_10 [i_6]) | var_6)) : (max(var_10, -116)))) : (-127 - 1)));
                        }
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_29 = (max((((-23 || (arr_21 [i_11] [i_7] [i_5] [i_4 + 1] [i_4 - 2])))), (min(((min(var_6, var_12))), ((37087 ? (arr_31 [i_4] [i_5] [i_5] [i_4] [i_11]) : 3245474593939580068))))));
                            var_30 = -23;
                            var_31 = (min(var_31, ((max((49994274 | 1092968904), var_1)))));
                            arr_33 [i_11] [i_4] [i_6] [i_6] [i_4] [i_4 - 1] = (((((((arr_10 [i_7]) && 65529)))) ? 58260 : ((+((max((-32767 - 1), 7)))))));
                        }
                        var_32 = ((var_0 ? (arr_16 [i_4 - 1] [i_5] [i_5] [i_4]) : var_12));
                    }
                }
            }
            var_33 = (min(var_33, (((~(((arr_17 [i_4] [i_4] [i_5] [i_5]) | -11297842)))))));
        }
    }
    var_34 = (max((min(var_6, (((43 ? -1798914358 : var_13))))), (65511 * 22)));
    #pragma endscop
}
