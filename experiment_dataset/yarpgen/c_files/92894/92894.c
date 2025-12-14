/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_4] = ((((~(min(-28912, (arr_2 [i_0]))))) < ((~((var_6 ? (arr_13 [i_0] [i_1] [i_2] [i_3]) : (arr_12 [i_0] [i_3 + 1] [i_2] [i_1] [i_0])))))));
                                var_14 &= ((+(((arr_13 [i_0 - 2] [i_3 - 3] [i_2] [i_4 + 2]) ? (min(4294967295, 0)) : (((arr_6 [i_3] [i_4 - 1] [i_3]) ? 4294967295 : (arr_11 [i_3 + 2] [i_2] [i_0] [i_0])))))));
                                var_15 = (-var_0 ? ((4294967294 ? ((~(arr_5 [i_2]))) : ((var_12 ? var_4 : (arr_4 [i_2] [i_4 + 2]))))) : ((((!((max(var_5, (arr_6 [i_0] [i_1] [i_2])))))))));
                                var_16 = ((!((!(arr_2 [i_3])))));
                                var_17 = (-0 * ((((((arr_7 [i_3] [i_1] [i_1] [i_3]) ? (arr_10 [i_0 - 1] [i_2] [i_3] [i_4]) : 579103764))) ? (0 >= 579103764) : (((arr_3 [i_0]) >> (((arr_8 [i_0] [i_0] [i_0]) - 616465721)))))));
                            }
                        }
                    }
                    arr_15 [i_0] [11] [i_2] = (~(max((arr_12 [i_0] [i_0 + 1] [i_0] [i_0 + 2] [i_0 - 1]), (arr_7 [i_0 - 1] [i_1] [i_0 - 1] [i_2]))));
                    var_18 = 3715863531;
                }
            }
        }
    }
    var_19 = max(var_1, var_11);
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            {
                var_20 *= ((!(((24654 ? 4294967295 : 3253158380)))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_28 [i_5] [i_6] [i_6] [i_6] = (arr_20 [i_7]);
                            var_21 = (((min((arr_16 [i_6 - 3]), (arr_16 [i_6 - 1])))) ? (arr_16 [i_6 + 1]) : (((((arr_16 [i_6 + 2]) > 18576)))));
                            var_22 = ((15 - (((((arr_17 [i_5]) >= (0 / 1041808931)))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_37 [i_11] [i_6] [i_5] = 3944752792;
                                arr_38 [i_5] [i_9] [i_10] [i_6] = (((((-((-32757 ? (arr_22 [i_5] [i_6] [i_6] [i_11]) : (arr_18 [i_5] [i_6])))))) ? ((~(arr_23 [i_5 + 1] [i_5 - 1]))) : 548163686));
                                var_23 = ((((min((arr_35 [i_5] [i_6 - 2] [i_9] [i_10] [i_11]), ((min((arr_26 [i_5 - 1]), -31793)))))) ? (~15641) : ((-26943 % (arr_26 [i_6 - 2])))));
                                var_24 = (((((((var_10 + 2147483647) << (var_4 - 3388369900))) >= ((max(var_2, (arr_22 [i_5 - 1] [i_6] [i_6] [i_10])))))) ? (arr_16 [i_5 + 1]) : ((-(arr_16 [i_5 - 1])))));
                                var_25 = ((!((((!1158243806) + (~4294967295))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
