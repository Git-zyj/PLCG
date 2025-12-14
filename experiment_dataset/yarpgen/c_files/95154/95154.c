/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_1;
    var_14 = ((var_10 ? var_1 : var_12));
    var_15 &= ((var_4 ? ((var_1 ? var_6 : var_5)) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (arr_2 [i_0])));

                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        var_17 *= var_6;
                        arr_9 [i_1] = (min((((arr_3 [i_1] [i_2] [i_1]) ? ((31591 ? var_9 : 182)) : (49 * var_1))), ((((min(-9, 201))) ? ((min(-2071, var_5))) : (arr_4 [i_3 - 2] [i_2 + 1])))));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_18 = (max((max((((arr_4 [i_0] [i_2]) * 17888)), 22689)), ((4294967280 ? (min(17919, var_4)) : -150))));
                        arr_12 [i_4] [i_1] [i_1] [i_0] = (max(((min(-62, var_12))), (arr_10 [i_0] [i_2] [i_2 + 1] [i_4] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_19 = (var_10 + var_9);
                        arr_16 [i_5] [i_0] [i_0] [i_1] [i_5] |= ((arr_10 [i_1] [i_2 - 1] [i_2] [i_5] [i_5]) ? (arr_8 [i_0] [i_1] [i_2 - 1] [i_5]) : (arr_15 [i_0] [i_1] [i_2 - 1]));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_20 = (((arr_11 [i_6] [i_5] [4] [2] [2]) ? var_0 : (arr_10 [i_0] [i_1] [i_0] [i_5] [i_6])));
                            var_21 = (min(var_21, (((~((var_10 ? (arr_10 [i_0] [i_1] [i_2] [i_5] [i_5]) : (arr_6 [i_5]))))))));
                            var_22 = (min(var_22, (((~(arr_3 [i_5] [i_5] [i_5]))))));
                            var_23 ^= (~var_0);
                            var_24 = (max(var_24, ((((arr_2 [i_6]) ? (arr_2 [i_5]) : (arr_2 [i_0]))))));
                        }
                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            arr_22 [i_1] [i_1] [i_1] [i_7] [i_7] = (var_9 / var_0);
                            var_25 = ((((arr_3 [i_1] [12] [i_5]) * 206)));
                        }
                        arr_23 [i_0] [i_0] [i_1] = (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_1] [i_1] [i_2])));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_26 -= (arr_8 [i_0] [i_0] [i_0] [i_0]);
                        arr_26 [i_1] = 1714732312;
                        var_27 &= (((~(arr_1 [i_2] [i_2]))));
                    }
                    var_28 = (min(var_28, (arr_10 [i_0] [i_0] [i_0] [23] [17])));
                    var_29 = (max(var_29, ((61 ? (((-(arr_11 [i_0] [i_0] [1] [i_0] [i_2 + 1])))) : (((var_5 ? var_0 : var_0)))))));
                }
            }
        }
    }
    var_30 -= ((((max((62 & 62), var_12))) ? var_10 : var_3));
    #pragma endscop
}
