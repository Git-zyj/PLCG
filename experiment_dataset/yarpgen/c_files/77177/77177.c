/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 += ((~(arr_1 [4])));
        arr_2 [i_0] [i_0] = (min((((~(arr_0 [i_0])))), ((~((0 ? 1633202694 : 16080183701872236936))))));
        var_18 = (max(11, 12452179621166488266));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_1] [i_2] [i_1] [4] &= (((55464 << (var_4 - 80))));
                                var_19 = (max(var_13, (min((arr_11 [i_1 - 2]), (arr_4 [i_3 + 1] [i_3] [10])))));
                                var_20 += (max(62953, (arr_0 [i_3])));
                            }
                        }
                    }
                    var_21 *= (arr_3 [0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] = 1633202694;
                                var_22 &= (!12452179621166488266);
                                arr_22 [i_0] [i_0] [9] [i_6] [5] [i_6] = (!var_10);
                                arr_23 [i_1] [i_5] [i_2] [i_2] [i_1] [i_0] [i_1] &= ((var_10 ? ((min(49289, (arr_8 [i_0] [11] [i_0])))) : ((var_16 << (((arr_18 [i_0] [i_1 + 2] [i_1] [9] [i_1 - 2] [i_1] [i_1 - 2]) - 8635603513833791492))))));
                                var_23 ^= 49268;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_31 [1] [10] [i_0] [2] [i_8 - 1] = -114;
                                arr_32 [i_1 + 2] [i_1 + 2] [i_2] [i_1 + 2] [i_8 + 1] &= (arr_11 [i_7 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (max(var_24, (((!((min(var_16, (max(-1436839180986971904, 35))))))))));

    for (int i_9 = 1; i_9 < 10;i_9 += 1)
    {
        arr_35 [i_9] [i_9] = (max(var_8, ((37833 / (arr_3 [i_9 - 1] [i_9 - 1])))));
        var_25 = (arr_28 [i_9] [i_9] [i_9] [i_9] [i_9 + 1] [i_9] [i_9 - 1]);
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        var_26 &= 18969;
        var_27 -= (((~(arr_9 [i_10] [i_10] [i_10] [i_10] [i_10] [7]))));
        var_28 = arr_27 [i_10];
    }
    #pragma endscop
}
