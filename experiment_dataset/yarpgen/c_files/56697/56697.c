/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_18 = ((((max(var_10, ((-(arr_2 [i_2])))))) ? (((var_3 ? ((var_6 ? var_13 : 1065353216)) : (arr_10 [i_2 - 2])))) : (var_0 & 32256)));
                                var_19 = (min(var_19, (arr_9 [i_3] [i_3] [i_3] [i_3 + 2] [i_3] [i_3])));
                                var_20 -= var_1;
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                var_21 = ((32725 ? 636720915 : 3658246381));
                                var_22 += var_3;
                                var_23 = ((((((((636720915 ? (arr_10 [i_0]) : var_16))) ? (!65513) : ((min(var_12, 54721)))))) > var_10));
                            }
                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                var_24 = ((var_9 ? (((-5757476020952617792 ? var_14 : (min(1944634448, var_14))))) : ((var_1 - (var_15 + var_15)))));
                                arr_17 [i_1] &= (((((max(1364724368, 5883673887850851234)))) ? 3169869235 : (min((arr_15 [i_2] [i_2 + 3] [i_2 + 2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 3]), (arr_16 [i_2] [i_2] [i_2] [i_2] [i_2 - 1])))));
                                var_25 += (((((arr_8 [i_1] [i_1] [i_1]) - (arr_11 [i_1] [i_2] [i_2] [i_0] [i_6]))) & ((var_6 ? (arr_8 [i_1] [i_2] [i_1]) : (arr_8 [i_0] [i_2 + 3] [i_2])))));
                                var_26 = -2829;
                                var_27 = (((max(636720915, ((1903288180 ? 3169869235 : var_10)))) & ((min((arr_4 [i_1]), (((arr_3 [i_6] [i_0]) ? -4433 : 1040187392)))))));
                            }
                            var_28 = (min(var_28, (((var_6 ? (-2829 & -2818) : (((((min(-24370, 31)))) + (arr_15 [i_2] [i_2] [i_2] [i_2 + 2] [i_2 - 2] [i_2] [i_3 - 2]))))))));

                            for (int i_7 = 0; i_7 < 23;i_7 += 1)
                            {
                                var_29 ^= ((((max((-16926 & 2800), (~128)))) ? 4294967280 : var_9));
                                var_30 = (min(var_30, -986835687923353505));
                            }
                            for (int i_8 = 0; i_8 < 23;i_8 += 1)
                            {
                                var_31 |= (max(((65522 + ((max(var_12, (arr_12 [i_1] [i_3] [i_2] [i_1] [i_0])))))), var_15));
                                var_32 += 67108862;
                            }
                            arr_24 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = ((((((23542 > (max(4062510444, var_13)))))) & ((-(max(2047, 9007198986305536))))));
                            var_33 &= 3169869235;
                        }
                    }
                }
                var_34 = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 16;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 18;i_13 += 1)
                        {
                            {
                                var_35 -= (arr_29 [i_9]);
                                var_36 |= ((((((arr_16 [i_9] [i_10] [i_11] [4] [i_10]) <= -1040187403))) <= (!var_5)));
                            }
                        }
                    }
                }
                var_37 = ((0 ? 20 : 146));
            }
        }
    }
    var_38 += (((65535 ? (min(var_1, var_5)) : (max(1903288161, 21158)))) >> (((!(((var_4 ? var_12 : -32755)))))));
    #pragma endscop
}
