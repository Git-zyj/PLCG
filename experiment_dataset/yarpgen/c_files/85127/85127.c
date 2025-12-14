/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] = (~var_2);

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_9 [i_0] [i_0] [i_0] = ((-0 ? (((~1) ? 0 : (max((arr_2 [i_0]), (arr_1 [i_0] [i_0]))))) : ((((1 ? 1 : -1))))));
                arr_10 [4] = (arr_3 [i_0] [i_1]);
                arr_11 [10] [10] [i_0] [i_0] = ((7 ? 32740 : 4294967295));
                arr_12 [i_0] [i_0] [8] [10] = (max((arr_8 [10]), ((+(max((arr_3 [3] [i_2]), (arr_2 [i_0])))))));
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                arr_15 [i_0] [i_1] [i_1] [i_0] = var_6;
                arr_16 [i_0] [i_0] [7] = (!1);
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_19 [i_0] [i_0] = (((((-(max(var_10, var_7))))) ? (~1) : 60));
                arr_20 [1] [1] [1] = (max(32747, -32));
            }
            arr_21 [i_0] [i_1] = ((1 ? 32 : -1));
            arr_22 [i_0] [4] = 503316480;
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_27 [i_0] [i_0] = (((!1) || ((var_7 || (arr_6 [i_5] [i_5])))));
            arr_28 [i_0] [i_5] = (arr_4 [i_0]);

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_31 [i_5] = 56;
                arr_32 [i_5] = 32740;
                arr_33 [i_0] [i_5] [i_0] = (~1023);
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                arr_37 [i_0] = max((max((arr_23 [i_7] [6] [4]), 541746163011302366)), ((min((arr_23 [10] [i_5] [i_7]), 1))));

                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    arr_40 [i_0] [i_5] [i_5] [2] [i_5] = 255;
                    arr_41 [i_0] [i_5] [i_0] [i_8] [5] = 503316480;
                }
                arr_42 [10] [i_0] [i_7] [10] = arr_6 [i_5] [i_5];
                arr_43 [i_0] [i_5] [i_0] [i_7] = (((~32739) >= (~32205)));
            }
            arr_44 [i_0] = (min(-503316475, 255));
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            arr_47 [i_0] [i_0] = 32205;
            arr_48 [i_9] |= -1;

            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                arr_52 [i_0] [0] [10] [i_0] = -1;
                arr_53 [i_9] [0] [8] &= ((((((((44 ? -1 : 2146435072))) ? ((((arr_23 [11] [i_9] [i_9]) >= (arr_39 [i_0] [i_10] [i_0] [i_10])))) : var_5))) ? 2305561534236983296 : -1));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_60 [i_9] &= -0;
                            arr_61 [i_0] [i_0] [i_0] [i_11] [i_11] [i_11] [i_11] = (min(1, -1));
                            arr_62 [4] [6] [i_11] [i_12] = ((max((arr_3 [i_0] [i_0]), 1)));
                            arr_63 [i_0] [i_0] [i_10] [i_9] [i_10] [i_12] = arr_49 [i_0] [i_0] [i_0];
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                arr_67 [i_0] [i_13] = (min(9223372036854775807, 32205));
                arr_68 [i_0] [i_13] [2] = (((-127 - 1) ? (-45 % -122) : 1298));
            }
        }
        arr_69 [i_0] [i_0] = (~255);
        arr_70 [4] [0] &= 1073741820;
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 24;i_14 += 1)
    {
        arr_74 [i_14] = 44;
        arr_75 [i_14] = (1211715974 % (arr_73 [i_14]));
    }
    for (int i_15 = 0; i_15 < 25;i_15 += 1)
    {
        arr_80 [14] = var_3;
        arr_81 [i_15] [11] = var_10;
        arr_82 [13] [i_15] = 58;
        arr_83 [i_15] = 195;
    }
    for (int i_16 = 0; i_16 < 18;i_16 += 1)
    {
        arr_88 [i_16] = 1;
        arr_89 [i_16] = ((255 >> (-1 + 3)));
    }
    var_11 = var_8;
    #pragma endscop
}
