/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_18 = (min((min(255, (arr_3 [i_0] [i_0]))), ((~(arr_3 [i_0] [3])))));
        var_19 &= (((((~(arr_3 [i_0] [i_0])))) ? (~var_15) : (~var_13)));
        var_20 = 1070897603;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_21 = (~((-1070897604 ? (arr_0 [7] [i_1]) : ((max((arr_0 [i_1] [i_1]), (arr_2 [i_1])))))));
        arr_6 [i_1] [i_1] = ((~((~(((arr_3 [i_1] [i_1]) ? 147 : 1070897603))))));
        var_22 ^= (~((~(arr_1 [i_1]))));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            {
                var_23 ^= (((arr_8 [i_2 - 1]) ? (arr_8 [i_2 + 1]) : (arr_8 [i_2 + 1])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_20 [i_2 - 1] [i_2 - 1] = (min(215, (max((arr_14 [i_2 - 1]), (arr_14 [12])))));
                            var_24 = ((~0) ? (max((108 == 2870231), ((var_12 / (arr_14 [1]))))) : (2870231 ^ -1774767435));
                        }
                    }
                }
                var_25 = 2870231;

                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            {
                                arr_29 [i_6] = (~(min((arr_22 [i_2] [i_2] [i_7 - 1] [i_2]), ((~(arr_23 [i_2] [i_8 - 1] [i_8 - 1]))))));
                                var_26 = 0;
                            }
                        }
                    }
                    arr_30 [i_6] [i_3] [i_6] = ((~(((arr_17 [i_2]) & 4294967295))));
                    var_27 = (min(var_27, (((var_1 ? ((199 ? (arr_17 [i_3 - 2]) : (arr_17 [i_3 - 2]))) : ((~(arr_23 [11] [11] [i_6]))))))));
                    arr_31 [i_6] [i_6] [i_6] = ((((((arr_19 [7] [i_3] [i_3] [i_6]) >> (((arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? 0 : 2147483647))))) ? ((0 << ((68 >> (91 - 83))))) : (arr_26 [2] [i_6] [i_6 + 1])));
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    var_28 = ((!((max((arr_12 [i_2 - 1] [i_3 - 3] [i_3 - 3]), (arr_14 [i_2 + 1]))))));
                    var_29 = (-127 - 1);
                }
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 11;i_12 += 1)
                        {
                            {
                                arr_42 [i_12] [i_11] [i_10] [i_3 - 1] = -127;
                                var_30 = (arr_37 [i_12] [i_11] [i_10] [i_3 - 2]);
                            }
                        }
                    }
                    arr_43 [i_2] [i_3 - 3] [i_10] = (max(((min(-6, (arr_28 [11] [i_2] [i_3 + 1] [i_3 + 1] [i_10] [i_10])))), ((-((((arr_16 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2] [9]) && 4294967295)))))));
                }
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    var_31 = 2234088099;
                    var_32 &= var_16;
                }
            }
        }
    }
    #pragma endscop
}
