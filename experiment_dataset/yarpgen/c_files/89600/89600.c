/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~((var_15 ? var_15 : (min(var_15, 1222807338)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] = (((2147483647 % 226) ? (min((~var_1), (((arr_2 [i_0]) ? (arr_12 [i_0] [i_1] [i_3] [i_4]) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (arr_7 [i_0] [i_2] [i_2])));
                                var_19 = var_12;
                            }
                        }
                    }
                    var_20 = ((((~((70 ? var_11 : (arr_1 [i_0])))))) ? (max((arr_11 [i_1] [i_1] [i_1] [i_0]), (max((arr_3 [i_0] [i_0] [i_0]), var_2)))) : 2147483643);
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                {
                    var_21 = -1520981273;
                    var_22 = var_12;
                }
                var_23 = ((!(arr_7 [i_0] [i_0] [i_0 - 2])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            {
                var_24 &= (-((((var_16 ? var_2 : (arr_20 [i_6]))) - (arr_22 [i_7]))));
                var_25 = 35;
                arr_26 [i_6] [14] [i_6] = ((((181 >> (((arr_20 [i_7]) + 360344421)))) + 2147483647));
                var_26 = arr_23 [19] [i_7];

                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                arr_38 [15] [i_7] [i_7] [15] [i_8] = (max(-907836394, 30));
                                arr_39 [i_8] [i_7] = (((((arr_27 [i_9]) % (arr_28 [i_8] [i_9]))) > (max(1856079931, 2147483647))));
                                var_27 ^= (max((((max((arr_32 [i_6] [i_6] [i_9] [i_10]), (arr_28 [i_7] [8]))) & 518354610)), (((!(arr_35 [i_10] [18] [i_6]))))));
                                arr_40 [i_10] [i_10] [i_10] [i_10] [i_8] = (max((arr_35 [i_6] [i_6] [i_6]), (((var_17 <= (arr_36 [3] [i_7] [i_7]))))));
                            }
                        }
                    }
                    arr_41 [i_8] [i_7] [i_7] = ((((~(arr_30 [i_8] [i_7] [i_8] [i_8])))) ? (~var_1) : ((((arr_30 [i_8] [i_7] [i_7] [i_7]) > (arr_30 [i_8] [i_7] [14] [3])))));
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                {
                    var_28 = (var_8 ? (min((arr_23 [i_6] [i_6]), (arr_24 [i_6]))) : (arr_34 [i_6] [i_11] [i_7] [i_7]));
                    var_29 = (max((min((arr_36 [i_6] [i_6] [i_6]), (arr_28 [i_11] [i_11]))), var_9));
                    arr_45 [i_7] [i_7] [i_11] = (((max((max(0, var_4)), ((max(var_15, var_10))))) >= (arr_44 [i_6] [i_6] [i_6])));
                }
                for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            {
                                var_30 = (((!(arr_36 [i_6] [i_6] [i_6]))));
                                var_31 = ((((arr_29 [i_6] [0] [i_14]) < (min((arr_30 [i_12] [17] [i_7] [i_12]), (arr_42 [i_14] [i_7] [i_7]))))) ? (((!((max(var_1, (arr_42 [i_6] [i_6] [i_6]))))))) : 221);
                            }
                        }
                    }
                    arr_54 [i_6] [i_12] [i_12] [i_12] = max(var_13, (arr_35 [i_7] [i_7] [i_7]));
                }
            }
        }
    }
    #pragma endscop
}
