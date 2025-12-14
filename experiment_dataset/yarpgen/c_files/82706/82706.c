/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((0 >= (-2147483647 - 1)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 &= (arr_6 [i_0 + 1] [i_2] [i_0 + 1] [i_0 + 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_1] [i_1] [i_1] [i_4] = 2147483647;
                                var_12 = (max(32752, -2147483637));
                                var_13 = ((3 ? 65516 : -2147483637));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_1] [i_0] = (min((!-32752), (max((arr_3 [i_2] [i_1]), (arr_3 [i_1] [i_1])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_14 ^= (((arr_19 [i_8]) ? (((min((arr_16 [i_5]), 86)))) : (((arr_19 [i_8 - 1]) ? ((-87 ? var_4 : (arr_24 [i_5] [i_5] [i_5] [i_7] [i_5] [i_5]))) : -87))));
                                var_15 = ((!(((32747 ? (arr_23 [i_8 - 2] [i_8 + 2] [i_5] [i_8 - 1]) : (arr_23 [i_8 + 1] [i_8 + 1] [i_5] [i_8 - 2]))))));
                            }
                        }
                    }
                    var_16 = (((arr_10 [i_7] [i_5] [i_7]) ? ((max((1 == 240), (max(19, (arr_5 [i_5] [i_5] [i_5])))))) : ((((max((arr_26 [i_6] [i_5]), 86))) ? (arr_18 [i_5]) : ((var_9 << (arr_26 [i_5] [i_5])))))));
                    var_17 -= (max((arr_12 [i_6] [i_6] [i_6] [i_7] [i_6] [i_6]), ((~(arr_5 [i_5] [i_6] [i_5])))));
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_18 |= (~var_6);
        var_19 = (min((arr_30 [i_10] [i_10]), ((+((-2147483640 ? (-9223372036854775807 - 1) : var_5))))));
        arr_31 [i_10] = ((((60 <= (arr_29 [i_10]))) ? (((arr_29 [i_10]) ? (arr_29 [i_10]) : 2147483647)) : (arr_29 [i_10])));
        arr_32 [i_10] = 19;
    }
    for (int i_11 = 1; i_11 < 9;i_11 += 1)
    {
        arr_35 [i_11] = (((arr_18 [i_11]) | (-32767 - 1)));
        var_20 = ((((((arr_9 [i_11] [i_11] [i_11] [i_11] [i_11]) + (min((-2147483647 - 1), (arr_24 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))))) ? (max((arr_20 [i_11 + 1] [i_11 + 2] [i_11 + 1] [i_11 + 1]), (max(6851547162977826382, -2000927096)))) : -2147483630));
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        arr_39 [i_12] [i_12] = ((+(min((min((arr_30 [i_12] [i_12]), 86)), ((max(var_2, -694735161)))))));
        arr_40 [i_12] [i_12] = 2147483637;
        var_21 = min((~1), -58196);
        var_22 |= (arr_19 [i_12]);
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        arr_44 [i_13] &= ((((!(arr_8 [i_13] [i_13] [i_13] [i_13])))));
        arr_45 [i_13] = ((2147483647 ? 2000927095 : 32763));
        var_23 = var_4;
    }
    var_24 = ((var_9 ? var_5 : (((((var_4 ? var_2 : var_2))) ? ((min(var_1, -2147483629))) : (min(2000927103, var_4))))));
    #pragma endscop
}
