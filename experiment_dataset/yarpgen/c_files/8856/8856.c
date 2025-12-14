/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_3, var_3));
    var_16 = ((((-var_3 ? var_3 : (var_5 && var_2)))) ? ((((var_13 ? var_4 : 7251420534262632161)) - ((11195323539446919455 ? 7251420534262632161 : 11195323539446919428)))) : ((((var_10 ? var_14 : var_5)) >> (var_4 - 17839810426347831687))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [4] [i_0] [i_1] [i_2] [i_2 - 2] [i_3] = (16994415865071565626 ? 2083790017 : 11195323539446919454);

                            for (int i_4 = 2; i_4 < 19;i_4 += 1)
                            {
                                arr_16 [i_0] [3] [i_3] = (((!(((0 ? -55 : 3635446322264972225))))) ? (!var_8) : ((var_6 ? (~var_12) : var_2)));
                                arr_17 [i_0] [i_0] [i_1] [1] [i_3] [i_4] [i_4] = var_11;
                                arr_18 [i_0] [i_1] [i_2] [i_2] [4] [i_3] [i_4 + 2] = (--2087088306103766072);
                                var_17 = (min((var_3 && var_3), (max((arr_7 [i_2 - 1] [i_4 - 2]), var_2))));
                            }

                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                arr_22 [i_3] [i_5] = (((((var_4 ? var_6 : var_5))) ? var_8 : (((min((arr_2 [i_5]), (arr_4 [i_1] [10])))))));
                                var_18 = (min(var_18, ((((min((arr_0 [20]), var_1)) > (-17938 <= var_7))))));
                            }
                        }
                    }
                }
                var_19 -= max((((((~(arr_1 [12] [i_1])))) ? ((var_10 ? var_3 : var_12)) : ((max(0, (arr_21 [i_0] [1] [i_0] [4] [3])))))), ((((var_9 == var_10) ? var_0 : (var_4 <= 9223372036854775807)))));

                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    arr_26 [i_6] [i_6] = ((var_14 ? (((-(!var_1)))) : ((var_0 ? (arr_23 [i_0]) : 65535))));

                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_20 = (!var_11);
                        var_21 = ((40 ? 1 : 1290371574));
                        var_22 = (min(var_22, ((((~var_11) ? ((((~(arr_1 [i_7] [i_6]))) % 1001469885)) : ((-var_14 ? (((arr_1 [i_6] [i_1]) * var_7)) : ((max(var_13, (-2147483647 - 1)))))))))));
                        var_23 = (max(var_23, ((max(-32, -3092343026943741770)))));
                        var_24 = (arr_25 [i_0] [i_6] [i_0] [i_0]);
                    }
                }

                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    var_25 |= ((-var_6 ? var_4 : ((9667115159834470106 ? var_6 : (var_2 <= -6508162455951183425)))));
                    arr_31 [14] [14] [i_8] [i_8] = ((((var_12 ? ((((var_2 || (arr_30 [i_0] [i_0]))))) : -321373001)) <= (~var_2)));
                    arr_32 [i_0] [i_1] [13] = ((((((arr_8 [11] [11] [i_8]) <= var_4))) << (((min(var_5, (arr_8 [18] [i_1] [i_8]))) - 14063360453287840244))));
                }
            }
        }
    }
    #pragma endscop
}
