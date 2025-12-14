/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 7592470534221397481;
    var_21 = (min(-5869, 69));
    var_22 &= (((((var_2 >> (((min(107, 2808090510)) - 84))))) ? (!var_3) : (~-1072383461)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_23 = (min(var_23, ((((((~(arr_2 [i_0])))) ? ((max(1, 1))) : ((min(28706, (arr_2 [i_0])))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_24 = (((min((arr_0 [i_1 + 1]), 2261030384)) > -1));
                    arr_8 [i_0] [i_0] [i_0] = (max((max(((1 ? 34 : 1)), 5849)), ((((((arr_2 [i_2 + 2]) || var_0)) || (arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_2 - 4]))))));

                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {
                        var_25 &= ((~((~(arr_3 [i_2 + 2])))));
                        var_26 = ((~((min((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_1 + 1] [4]))))));
                    }
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_27 += 1028589616;
                        var_28 = (min((arr_3 [i_0]), var_5));
                    }
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        var_29 = (max(var_29, ((((max(33190, var_19)) > ((((((arr_5 [i_1] [i_1] [i_1]) != 5869)) ? (max(-9816, (arr_9 [i_0]))) : 1))))))));
                        arr_17 [i_0] [i_1] [i_2 - 3] [i_0] [i_5] &= 522707279;
                        var_30 = -2983258409187033798;
                        var_31 ^= ((-(((!((min(38, 880074617))))))));
                    }
                }
            }
        }
        var_32 *= (((((-5849 ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0])))) ? ((max(var_11, 1))) : 1));
        var_33 = var_2;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_34 = (max(var_34, (~var_6)));

        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_24 [i_6] [i_6] [i_7] = (arr_15 [i_7]);
            var_35 = var_2;
        }
        for (int i_8 = 2; i_8 < 9;i_8 += 1)
        {
            var_36 = ((-88 / (arr_6 [i_6] [i_6] [i_6] [i_8])));
            arr_27 [1] [i_8 + 1] [i_8] = 845673397;
            var_37 = 12;
        }
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        arr_38 [i_10] [i_10] &= ((-((~(arr_12 [i_10])))));
                        var_38 = (min(var_38, 1));
                        arr_39 [i_12] [i_11] [i_11] [i_9] = ((~(((arr_11 [i_9] [i_9] [i_9] [i_11] [i_11] [i_12]) ? (arr_16 [i_9] [i_10] [i_11] [i_12]) : (arr_11 [i_9] [i_10] [i_10] [i_11] [i_11] [i_12])))));
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        var_39 ^= ((((((min((arr_37 [i_10] [i_11] [i_10]), 32985))) + (arr_12 [i_10]))) / var_5));
                        var_40 = (min(var_40, (((!((max(-1, -1))))))));
                    }
                    for (int i_14 = 1; i_14 < 8;i_14 += 1)
                    {
                        arr_46 [i_11] [i_11] [i_10] [i_10] [i_11] = (-(((arr_10 [i_14 - 1] [i_14 + 3] [i_14 + 3] [i_14 + 2] [i_14]) + var_13)));
                        var_41 += (((((~(arr_11 [i_9] [i_14 + 2] [i_9] [i_14] [i_14 + 1] [i_9])))) ? 2692691023618229701 : (((var_7 ? (arr_11 [i_11] [i_14 - 1] [i_14] [i_14 - 1] [i_14 + 3] [i_14 + 3]) : (arr_11 [i_10] [i_14 + 2] [i_14 + 2] [i_14 - 1] [i_14 + 3] [i_14]))))));
                        arr_47 [i_9] [i_9] [i_9] [i_11] [i_9] [i_9] = (min((arr_41 [i_14 + 2] [i_14 + 2] [i_14 + 1] [i_14 - 1]), (((arr_43 [i_14] [i_14] [i_11] [0] [i_9] [i_14 - 1]) > var_9))));
                    }
                    arr_48 [i_11] = ((~(((140 ? var_15 : var_6)))));
                    var_42 = (max(var_42, 201));
                }
            }
        }
        arr_49 [i_9] [i_9] = ((2373826296 ? ((min(var_15, (((arr_10 [i_9] [i_9] [i_9] [i_9] [i_9]) ? 182 : 1))))) : (min(((min(4294967295, var_10))), (min(13130334711076781958, var_17))))));
        arr_50 [i_9] = ((min(var_15, (((arr_2 [i_9]) ? var_17 : (arr_30 [i_9]))))));
    }
    #pragma endscop
}
