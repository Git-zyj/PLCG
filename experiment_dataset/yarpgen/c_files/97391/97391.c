/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-10828747930744461533 > 25920);
    var_17 &= var_11;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (min((min((arr_1 [i_0]), (var_13 & 25920))), var_2));
        var_18 = (arr_3 [i_0] [i_0]);
        arr_5 [i_0] [i_0] = var_2;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1 + 1] [i_1] &= 1;
        var_19 ^= var_8;
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    {
                        var_20 = var_12;
                        var_21 *= var_4;
                        arr_20 [i_2] [i_2] [i_2] [i_2] = var_11;
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            arr_24 [i_2] [i_6] = (((!-25921) < 12));
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 0;i_8 += 1)
                {
                    {
                        var_22 += (var_0 % var_7);
                        var_23 = var_3;
                        arr_29 [i_2] [i_6] [i_7] [i_8 + 1] = ((var_12 ? var_5 : (arr_18 [i_7 - 2])));
                    }
                }
            }
            var_24 = (((((var_3 << (244 - 243)))) ? (!12) : -107));
        }
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            var_25 = (((arr_16 [i_9 + 2] [i_9 + 2] [i_9]) > (arr_16 [i_9 + 3] [i_9 - 1] [i_9])));
            arr_32 [i_9] = (arr_10 [i_2] [i_2]);
            arr_33 [i_9] [i_9 + 1] = -1007117511;
        }
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        arr_36 [i_10] = var_2;
        arr_37 [i_10] = (max((((((max(var_0, (arr_19 [i_10] [i_10] [i_10] [i_10])))) ? ((max(-1007117511, 25961))) : (max(244, var_6))))), (max(((min(34797, (arr_12 [i_10] [i_10])))), (arr_19 [i_10] [i_10] [i_10] [i_10])))));
        var_26 = ((((min(((((arr_27 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) != (arr_26 [i_10])))), 23))) ? ((max(var_4, var_14))) : ((2 ? (min((arr_17 [i_10] [i_10]), var_6)) : -25921))));
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        arr_40 [i_11] = var_9;
        var_27 = var_13;
    }
    #pragma endscop
}
