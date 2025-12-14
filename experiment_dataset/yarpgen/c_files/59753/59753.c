/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        var_17 = var_7;
                        var_18 = var_8;
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_19 = ((~((var_11 ? 636476737 : (((arr_4 [i_0 - 1] [i_0]) ^ var_13))))));
                        var_20 = (arr_6 [i_0] [i_4] [i_2] [i_4]);
                        var_21 = ((((max(-76, (arr_11 [i_0])))) ? (((arr_5 [i_1] [i_2 - 1] [i_4]) ? ((var_9 ? 24 : (arr_13 [i_0]))) : 35)) : ((((((var_11 / (arr_2 [0])))) ? (((var_12 ? var_5 : var_5))) : var_8)))));
                    }
                    var_22 = 45461;
                    arr_14 [i_0 - 1] [i_0] = ((-var_9 ? var_8 : (((((24 ? var_10 : var_3))) ? ((~(arr_6 [i_1 - 4] [i_1 - 1] [i_2 - 1] [i_2 - 1]))) : (24787 && -5088868577301797353)))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_23 = (arr_9 [6] [i_0] [i_1 + 2] [i_2]);
                        arr_17 [i_0] [i_1] = (((arr_12 [i_0] [i_0] [i_1] [15] [i_2 - 1] [i_1 - 3]) != (arr_12 [i_0] [i_2] [10] [i_5] [i_2 - 2] [i_1 - 2])));
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    arr_20 [i_0] [i_0 - 1] [i_0] = var_6;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_24 = (max(var_24, (((13960286635669193026 ^ (arr_9 [13] [i_1] [1] [1]))))));
                                var_25 = (((!0) - 59));
                                var_26 -= (((arr_2 [i_1]) != 7848));
                                var_27 = (((arr_0 [i_0 - 1] [i_1 + 3]) <= (arr_0 [i_0 - 1] [i_1 - 4])));
                            }
                        }
                    }
                    var_28 = (max(var_28, (arr_8 [20] [20] [i_1] [i_6] [i_6] [i_6])));
                    arr_25 [i_0] [i_1] [i_6] [i_6] = ((110 != (arr_22 [i_0] [i_0] [i_6] [5] [i_6])));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_29 = ((+((var_13 >> (((arr_0 [i_0] [i_1 - 2]) - 28))))));
                                var_30 = (~var_3);
                                var_31 = 7;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    arr_36 [i_11] [11] [i_1] [i_0] = ((-114 ? 5381381081969972758 : 108));
                    var_32 = var_3;
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 20;i_12 += 1)
                {
                    var_33 -= ((~(var_9 ^ 40)));
                    arr_40 [i_1] = (((((41925 % (arr_31 [i_0] [i_0] [i_0] [i_12 + 1])))) ^ (arr_32 [i_12] [i_1 - 2] [i_0 - 1])));

                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        arr_44 [i_0 + 1] [7] [i_12] [i_13] [i_12] = ((0 ? -var_8 : -1));
                        arr_45 [i_12] [i_12] [i_12] [i_13] [1] = 9223372036854775804;
                        arr_46 [i_13] [i_1] = (((arr_34 [i_0 + 1] [i_0 + 1] [i_1 - 2]) ? 0 : var_7));
                    }
                }
                var_34 = (max(16423725613837559965, 2023018459871991680));
                var_35 -= (((max(-1183075002427989744, (arr_12 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0])))) ? ((-((var_14 ? var_3 : var_4)))) : 1);
                var_36 = (min((~7), (arr_32 [i_0 + 1] [i_1] [0])));
            }
        }
    }
    var_37 = var_3;
    #pragma endscop
}
