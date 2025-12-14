/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_19 = (-91 ? -285450494 : -84);
                        var_20 = (!var_8);
                        arr_10 [i_0] [3] [i_1] [3] [i_2] [i_3 + 2] = (8 >= 209);
                    }
                    for (int i_4 = 4; i_4 < 11;i_4 += 1)
                    {
                        var_21 = (((arr_8 [i_4]) ? (~255) : (arr_12 [i_0] [i_1 + 2] [i_4 + 1] [i_4] [i_4])));
                        arr_14 [i_0] [i_1] [i_2] [i_2] = ((-(((arr_5 [i_0] [i_1] [i_0]) - var_11))));
                        var_22 = ((-(arr_12 [i_0] [6] [i_2] [i_4 - 4] [i_1 - 2])));
                        var_23 = (max(var_23, (arr_13 [i_4] [i_1 + 1] [i_4 - 2] [i_4])));
                    }
                    var_24 = (max(var_24, var_17));
                    var_25 = var_18;
                    var_26 -= ((var_16 ? 112 : (arr_5 [i_0] [i_0] [i_2])));
                    arr_15 [i_2] = (83 <= 4007779403);
                }
            }
        }
        var_27 ^= -29913;
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        arr_18 [i_5] = -1;
        var_28 = ((87 ? -1007297617 : (-2147483647 - 1)));
        var_29 ^= (max(0, var_2));
        var_30 = 9223372036854775807;
        var_31 = (((0 && -32750) && (!285450475)));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_32 *= (arr_21 [i_6]);
        var_33 = (arr_21 [i_6]);
        arr_22 [i_6] = (((((118 ? 87 : 169))) && (((43 ? 287187892 : 0)))));
        var_34 |= ((~(((arr_17 [i_6]) & (arr_17 [i_6])))));
        var_35 = ((max((arr_16 [i_6] [i_6]), (arr_16 [i_6] [i_6]))));
    }
    var_36 = ((13606 ? (((var_7 ? (!-17) : (!var_7)))) : (var_3 - var_10)));
    var_37 = var_16;

    for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_38 &= (((~(min(1007297642, var_15)))));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 23;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        var_39 = (((~(arr_26 [i_7 - 1] [i_7 + 1] [i_9 - 2]))));
                        var_40 -= (min(((max(((52 ? var_11 : (arr_24 [i_10]))), (((arr_29 [i_8] [i_9] [i_8] [i_8]) + (arr_31 [i_8])))))), ((((((arr_24 [i_9]) ? (arr_23 [i_7] [i_7]) : -1))) ? (min(2983360397359856019, 1)) : (arr_27 [i_7 + 3] [i_7 + 3] [i_9 - 1])))));
                        var_41 = (((((-285450494 ? (((arr_30 [i_7] [i_8] [i_7]) ? (arr_23 [i_9] [i_10]) : var_7)) : (arr_32 [i_7] [i_7 + 2] [20] [i_9 + 1])))) ? var_4 : (arr_32 [i_9 - 2] [i_8] [i_8] [i_7 + 2])));
                        var_42 = (max(var_42, (((min((arr_30 [i_9 - 2] [i_8] [i_8]), (arr_30 [i_9 + 1] [i_8] [i_9])))))));
                        var_43 = (max(var_43, (((max((((arr_25 [i_7]) | var_5)), (arr_25 [i_7])))))));
                    }
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 21;i_11 += 1) /* same iter space */
    {
        var_44 = (min(-1, (((((arr_29 [i_11] [i_11] [i_11] [14]) <= 24)) ? -77 : -53))));
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 22;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 23;i_15 += 1)
                        {
                            {
                                var_45 = ((~(((arr_31 [i_14]) ? 524287 : (((max(127, 1))))))));
                                var_46 = arr_23 [i_11 + 2] [i_13];
                                var_47 = ((80 ? (((var_5 && (((var_13 ? var_18 : 0)))))) : (max(127, (min(-1180969189, var_11))))));
                            }
                        }
                    }
                    var_48 = var_4;
                }
            }
        }
        arr_46 [i_11] [i_11 - 1] = (arr_42 [i_11 + 2] [i_11 + 3] [i_11 + 3] [13] [i_11 + 3]);
        var_49 = (arr_26 [i_11 + 3] [i_11] [i_11 - 1]);
    }
    for (int i_16 = 1; i_16 < 21;i_16 += 1) /* same iter space */
    {
        var_50 = (min(8092811781682199843, ((((arr_40 [i_16] [i_16] [i_16 + 1]) >> (((127 * var_2) + 11322)))))));
        arr_49 [i_16] = ((23614 < ((1007297617 ? ((min(3844436048, (arr_29 [i_16] [i_16] [i_16] [i_16])))) : 10353932292027351773))));
        var_51 = ((var_14 + ((max(-91, (arr_27 [12] [10] [i_16]))))));
    }
    var_52 = (max(var_52, ((((((var_9 + ((0 ? 1 : 450531248))))) ? -1180969189 : -1007297617)))));
    #pragma endscop
}
