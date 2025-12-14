/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (min((arr_0 [i_0]), ((var_12 ? (arr_0 [i_0]) : 15))));
        arr_3 [i_0] [i_0] = ((~((max((arr_1 [i_0]), 0)))));
        arr_4 [i_0] [i_0] = ((((23846 ? 1 : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))))) * ((((!(arr_0 [i_0])))))));
        arr_5 [i_0] = (max((((max(var_11, 67)) & (((max((arr_1 [i_0]), 20)))))), (min(((max(49, (arr_1 [i_0])))), (min(65508, (arr_0 [i_0])))))));
        var_20 = (((arr_1 [i_0]) * (((arr_0 [i_0]) ? (arr_1 [i_0]) : var_15))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] [1] = 10;
        arr_9 [0] = ((((~(arr_1 [i_1 - 1]))) ^ -0));
        arr_10 [i_1] = ((max((arr_0 [i_1 - 2]), (max((arr_7 [i_1]), var_5)))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_21 = ((-6 ? (max((arr_7 [i_1 + 1]), (min(0, 1)))) : (((25218 - 1093224024) % (arr_18 [i_1] [i_1 + 1] [i_1])))));
                        arr_19 [i_4] [i_1] [i_2] [i_1] [i_1] = ((((arr_17 [i_1 - 1] [i_2] [i_1 - 1] [i_4] [i_2]) && (arr_17 [i_1] [i_2] [i_3] [i_4] [i_2]))));
                    }
                }
            }
        }
    }
    var_22 = var_16;

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_23 = (((min((max(65528, (arr_22 [i_5] [i_5]))), (1 + -20))) ^ ((((min((arr_22 [i_5] [i_5]), var_6))) ? (min(3123944780, (arr_20 [i_5]))) : (~3123944804)))));
        arr_24 [i_5] = ((10 ? (min((min(-9421, 4)), 0)) : (~22006)));

        /* vectorizable */
        for (int i_6 = 4; i_6 < 13;i_6 += 1) /* same iter space */
        {
            arr_27 [i_5] = ((((((arr_25 [i_5] [i_5] [i_6]) ? (arr_23 [i_5] [15]) : 16894))) ? 0 : -2421));
            var_24 = (((arr_23 [i_6 + 1] [i_6 - 1]) ? 715544848 : (arr_25 [i_6 + 3] [i_6 - 1] [i_6 - 3])));
            var_25 = (((((~(arr_0 [i_5])))) + ((3123944780 ? 18446744073709551610 : var_8))));
            arr_28 [i_5] = (arr_23 [i_5] [i_5]);
            var_26 = (((arr_21 [i_6 + 4] [i_6 + 4]) ^ (arr_25 [5] [i_6 - 2] [i_6])));
        }
        for (int i_7 = 4; i_7 < 13;i_7 += 1) /* same iter space */
        {
            arr_31 [i_7] = (max(((max(var_19, ((max(60, var_3)))))), (min(937459288, 19))));
            var_27 = var_11;
            arr_32 [i_7 + 3] [i_5] = ((4403448579834095920 ? (min(26, 46293)) : 27));
        }
        for (int i_8 = 4; i_8 < 13;i_8 += 1) /* same iter space */
        {
            arr_36 [i_8] = (min((!58118), (-19 * 49417)));
            var_28 = (((~((var_18 ? var_2 : 1)))) << ((((min(1, -6322))) + 6335)));
            var_29 = (((!1104533653) < (((arr_22 [i_5] [i_8]) ? ((max(var_18, -122))) : ((-15132 ? (arr_1 [i_5]) : 115))))));
        }
        /* LoopNest 3 */
        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    {
                        arr_45 [i_5] [i_10] [i_9] [i_9] = (arr_23 [i_5] [i_11]);
                        var_30 = (((32767 == (arr_39 [i_9] [i_9]))));
                        arr_46 [i_5] [i_5] [i_5] [i_5] [i_9] [i_5] = ((((((65524 * 2123145145) != var_4))) * (arr_30 [i_5] [i_9 + 2])));
                        arr_47 [i_9] [i_9 - 2] [i_9] = -32750;
                    }
                }
            }
        }
    }
    #pragma endscop
}
