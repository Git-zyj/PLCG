/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_14 [i_0 + 2] [i_1] [i_2] [i_3] [i_1] |= (arr_1 [i_0]);
                            arr_15 [i_0] [i_0] [i_0] [i_3] [i_0] [i_4] [i_3] = ((-(max(-var_11, (~var_0)))));
                            var_18 = (max(var_18, (((~(max((arr_9 [9] [i_1] [9] [9]), (~-12037))))))));
                        }
                        arr_16 [i_0] = ((~(min((arr_5 [i_2 - 1] [i_2] [i_2] [i_2 - 1]), (arr_5 [i_1] [i_1] [i_1] [i_2 - 1])))));
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] = -var_7;
                        var_19 *= ((-((var_6 ? (var_3 ^ var_5) : (arr_10 [i_2] [i_2 - 1] [i_2 - 1])))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_20 ^= ((((-var_3 < (((~(arr_21 [i_5] [i_2] [i_0] [i_0])))))) ? (((12036 | var_11) ? (arr_21 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (arr_3 [i_0 + 3]))) : ((((min(-12037, 206513120)) % (arr_4 [i_0 + 1] [i_1]))))));
                        var_21 *= (max(var_17, (~4294967295)));
                        var_22 = ((((((((var_9 ? (arr_7 [4] [i_1] [i_2] [i_5]) : 379970429))) ? (206513116 >= 2097151) : (arr_10 [1] [i_1] [i_1])))) ? (((~((max(var_10, var_16)))))) : (arr_2 [i_0] [12])));
                        var_23 = ((~(max(((min(0, var_15))), (arr_3 [1])))));
                    }
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        var_24 = (min(var_24, ((var_13 ? ((((min((arr_22 [i_0] [i_1] [i_2] [i_1] [i_6] [i_0 - 1]), 1))) / var_2)) : (arr_23 [i_0] [1] [1] [i_1] [i_6] [2])))));
                        arr_25 [i_0] [i_1] [i_2] [i_1] = (((~var_15) / -206513120));
                        var_25 *= ((var_8 ? (((var_17 + 2147483647) << (var_13 - 12871555906494237227))) : (~1)));
                        var_26 += 1;
                    }
                    var_27 = ((var_15 ? (arr_7 [i_0] [i_0] [i_1] [i_2]) : (((max(var_3, (arr_20 [i_2 - 1] [i_1] [i_2 - 1] [i_2] [i_0 + 1] [13])))))));

                    for (int i_7 = 2; i_7 < 12;i_7 += 1)
                    {
                        var_28 = (min(var_8, ((1933534207 ? 2147483647 : 31))));
                        arr_28 [i_0] [i_0] [i_0] [i_7] [i_0] [1] = var_8;
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_29 *= 899164000;
                        var_30 += (max((max(1, -35)), (arr_24 [i_0 + 2] [i_1] [i_1] [i_2] [i_8])));
                        var_31 = ((-((((min(var_14, var_14))) % var_17))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 14;i_11 += 1)
            {
                {
                    var_32 &= (198 >= var_13);
                    var_33 &= (((arr_38 [i_10] [i_10]) & -var_7));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 12;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            {
                arr_47 [5] [i_12] [i_12] = (~-183);
                arr_48 [i_12] [i_12] [4] &= (-(~9438));
            }
        }
    }
    var_34 |= var_7;
    #pragma endscop
}
