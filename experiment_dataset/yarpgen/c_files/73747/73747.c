/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_7 ? (((~49984) & var_2)) : (min(((23562 ? var_13 : 25482)), var_2)))))));
    var_17 |= 63;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_18 = ((~(arr_1 [i_0] [i_0])));
                    arr_7 [i_1] [i_2] = ((~(((arr_5 [i_0] [i_1]) ? var_1 : (arr_5 [i_1] [i_1])))));
                    arr_8 [i_2] [i_2] [i_1] [i_0] = 29486;
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_19 = (((((((13312 << (64425 - 64418)))) ? ((var_15 ? 65465 : 65473)) : var_8)) + (((var_1 && (arr_4 [i_1]))))));

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_20 = ((!(((~(arr_2 [i_1]))))));
                            var_21 ^= ((7 << (6144 - 6119)));
                            var_22 = 41960;
                        }
                        arr_17 [i_4] [i_3] [i_1] [i_0] [i_0] [i_0] = min((arr_14 [i_4] [i_1] [6] [i_4] [i_3]), (((var_10 ? (arr_5 [i_0] [i_4]) : var_4))));
                        var_23 = (((arr_0 [i_4] [i_0]) ? ((2213 ? 12909 : (arr_0 [i_0] [i_1]))) : (((arr_0 [i_0] [i_0]) ? var_11 : 22571))));
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_24 = ((!(arr_5 [i_3] [i_7])));
                            var_25 = (((arr_3 [i_3] [i_1]) && (arr_11 [i_0] [i_0] [i_3] [0])));
                        }
                        arr_22 [i_0] [i_6] [i_0] [0] = var_8;
                        arr_23 [i_0] [i_1] [i_6] [i_6] = var_14;
                    }
                    var_26 = 64399;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                {
                    var_27 ^= (((((62564 ? (arr_16 [2] [9] [i_1] [i_0] [i_0] [i_0]) : var_1))) ? (var_3 | 7) : 19));
                    var_28 = ((0 ? (arr_11 [i_0] [i_0] [i_1] [i_8]) : (arr_0 [i_8] [i_1])));
                }
                for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        arr_30 [i_0] [i_1] [i_1] [i_9] [i_10] |= ((var_12 ? (arr_4 [i_0]) : (arr_4 [i_9])));
                        var_29 = -27143;
                        arr_31 [i_0] [1] [i_1] [i_9] [i_9] = 35272;
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_30 = (max(var_30, ((min(((63 ? (!488) : ((1362 ? 23562 : 15300)))), ((min((arr_35 [i_0] [i_9] [i_0] [2] [i_0] [i_0] [i_0]), (arr_35 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                                var_31 = 65473;
                                arr_36 [i_0] [i_12] [i_0] [i_12] [i_0] = ((31960 ? (arr_29 [i_12] [0] [0] [i_9] [0] [0]) : (((!(19544 && var_9))))));
                                arr_37 [8] [i_1] [1] [i_1] [i_11] [i_12] [i_12] = (max(40196, 60370));
                            }
                        }
                    }
                }
                var_32 = (max(var_32, ((min(var_10, (~var_12))))));
                var_33 = (max(var_33, (((((64320 ? 65535 : ((42951 ? 63322 : 65041)))) - ((((min(var_15, (arr_6 [i_0] [i_1] [3] [3])))) ? (((arr_5 [3] [i_0]) ? var_14 : 63323)) : ((min(54876, 20889))))))))));
            }
        }
    }
    #pragma endscop
}
