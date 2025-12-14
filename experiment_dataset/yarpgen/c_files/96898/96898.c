/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [1] [i_3] [1] &= (((((arr_13 [i_0] [i_1] [i_3 + 2] [i_1] [i_0] [i_3 + 2] [i_0]) & (arr_13 [i_0] [i_1] [i_3 + 2] [i_2] [i_4] [i_0] [i_0]))) & ((~(arr_13 [i_0] [i_1] [i_3 + 2] [1] [i_4] [i_0] [i_4])))));
                                arr_16 [i_0] [1] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_0] [i_1] [i_1] [i_2]);
                            }
                        }
                    }
                    var_12 ^= (1 <= (arr_6 [0] [0] [i_1] [i_2]));
                    var_13 ^= (((min((((arr_12 [i_0] [i_1] [i_2]) * 2830986684)), ((((arr_6 [1] [i_1] [i_2] [i_1]) * (arr_9 [6] [i_1] [i_1])))))) * 123));

                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        var_14 += ((+((var_11 ? (arr_2 [i_0] [i_1]) : var_6))));
                        var_15 = (((arr_13 [i_2] [i_2] [i_2] [i_5 + 1] [1] [i_5 + 1] [i_5]) ? (((arr_13 [i_0] [i_5] [i_0] [i_5 + 1] [i_5] [1] [i_5]) + var_6)) : ((((arr_13 [i_1] [i_2] [i_2] [i_5 + 1] [i_2] [i_5] [14]) < (arr_13 [i_0] [i_0] [i_2] [i_5 + 1] [i_5 + 1] [i_5] [i_5]))))));
                        var_16 += ((((min(7680, (arr_12 [i_0] [i_2] [i_5 + 1])))) ? (arr_12 [i_0] [i_0] [i_2]) : ((min((arr_12 [i_1] [i_2] [i_5 + 1]), (arr_12 [i_0] [i_1] [i_2]))))));
                    }
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_26 [i_0] [i_0] [i_6] [i_7] = ((-((7677 ? (arr_7 [i_7] [i_6] [i_1] [i_0]) : (arr_6 [i_0] [i_6] [i_1] [i_0])))));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_30 [i_8] [i_1] [1] &= ((((min(-84, -7678))) * -39479));
                            arr_31 [i_0] = ((~(max(1463980611, (arr_19 [i_1] [i_6] [i_0])))));
                            var_17 = (max(var_17, (arr_9 [8] [i_1] [i_1])));
                        }
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_36 [6] [i_0] = (min((((((arr_24 [i_0] [i_1] [i_6] [i_0]) ? (arr_19 [i_0] [i_0] [i_0]) : var_5)))), (max((((var_2 != (arr_0 [i_0])))), (max((arr_14 [i_0] [i_0] [i_0] [i_9]), (arr_14 [i_9] [i_0] [i_0] [i_0])))))));
                        var_18 = (((((((arr_4 [i_0] [i_0]) & 1)))) && (~110)));
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_19 [i_0] [i_0] [i_0]) >= 1));
                    }
                    var_19 = -63;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                arr_44 [i_0] [i_1] [i_6] [i_6] [i_6] [3] [i_0] = var_6;
                                var_20 = (max(var_20, (arr_20 [i_0] [i_6] [i_10] [i_11])));
                                arr_45 [i_0] [i_0] [i_0] [i_10] [i_11] = (min(((71 ? ((~(arr_32 [i_0] [11] [i_6] [i_10]))) : ((((arr_27 [i_0] [i_1] [i_11] [i_10] [i_10] [i_1]) > 24676))))), (((arr_0 [i_0]) ? ((var_0 ? (arr_38 [i_6] [i_11] [i_6] [i_11]) : var_11)) : (arr_2 [i_0] [i_1])))));
                            }
                        }
                    }
                    var_21 = (((-127 - 1) ? -7673 : 127));
                    var_22 = (((arr_5 [17]) ? ((~(~var_6))) : (min(((min(var_10, (arr_43 [i_6] [i_6] [i_6] [i_6] [i_0] [i_0])))), (~1)))));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    arr_50 [i_0] [i_1] [i_1] = (1 || 29156);
                    arr_51 [i_0] = (!var_1);
                }
                arr_52 [i_0] = ((((2500193264 >> (arr_12 [i_0] [i_1] [i_1]))) == ((((arr_12 [i_0] [i_1] [i_1]) >> (var_4 - 30522))))));
            }
        }
    }
    var_23 = -var_5;
    #pragma endscop
}
