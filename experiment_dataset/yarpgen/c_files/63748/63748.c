/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (((((~(((arr_2 [i_1] [i_0] [i_0]) ? (arr_3 [i_1] [i_0] [i_0]) : (arr_2 [i_0] [i_1] [i_1])))))) ? (((-(arr_1 [i_1])))) : (max((((arr_0 [i_0]) ? (arr_3 [i_1] [i_0] [i_0]) : (arr_2 [i_0] [i_1] [14]))), (arr_1 [11])))));
                var_16 = ((((max((((arr_4 [i_0] [i_0]) % (arr_0 [i_0]))), (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))))) ? (((((((arr_1 [i_0]) ? (arr_3 [i_0] [i_0] [i_1]) : (arr_1 [i_1]))) > (((-(arr_4 [i_0] [i_1])))))))) : ((-(arr_3 [i_0] [i_0] [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 6;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_17 += ((((((((64 ? 3498190054 : -4))) ? (!4) : -0))) ? (((((~(arr_0 [i_4])))) ? ((-(arr_1 [i_5]))) : (arr_12 [i_2] [i_2] [i_4 + 2] [i_5]))) : (((arr_12 [i_4 + 4] [i_4] [i_2] [i_2 + 1]) / (arr_12 [i_4 + 4] [i_3] [i_3] [i_2 + 1])))));
                        var_18 = (max(var_18, ((((((52 ? 185 : 8))) ? (((arr_4 [i_2] [i_2]) ? (arr_0 [i_5]) : ((63891 ? 3498190068 : 1851743645468806727)))) : (((-(arr_0 [i_2 + 1])))))))));
                        arr_13 [i_4] [i_5] = ((-((162 ? 43 : 20367))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        var_19 = (arr_15 [i_4 + 4] [i_2 - 1]);
                        var_20 += ((((((arr_5 [i_3]) ? (arr_14 [i_2] [i_2] [i_2] [i_2] [i_3]) : (arr_3 [i_4] [i_3] [i_4])))) ? ((((arr_4 [i_2] [i_6]) ? (arr_4 [i_6] [i_3]) : (arr_16 [i_2] [i_2] [i_2] [i_6] [i_3])))) : (arr_3 [i_4 + 1] [i_4 + 2] [i_4 - 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 8;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 8;i_8 += 1)
                        {
                            {
                                var_21 = (max(var_21, (arr_15 [i_7 - 3] [i_7 - 3])));
                                arr_22 [i_2 + 1] [i_2 + 1] [i_4 - 1] [i_4 - 1] [i_8] |= (-(((((177 ? 67 : 3498190050))) ? (arr_16 [i_2 + 1] [i_4 - 1] [i_7 - 2] [i_4 - 1] [i_8 - 1]) : (((arr_7 [i_4] [i_2 - 1] [i_4]) ? (arr_16 [i_8 + 2] [i_7] [i_2] [i_3] [i_2]) : (arr_1 [i_2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 22;i_10 += 1)
        {
            {
                arr_27 [i_9] [i_9] [i_10] |= ((-(((arr_25 [i_9] [i_10 - 1] [i_9]) ? (arr_25 [i_9] [i_10 - 1] [i_10]) : (arr_25 [i_10] [i_10 - 1] [i_10 - 1])))));
                var_22 = ((-(((!(arr_24 [i_9] [i_10 - 1]))))));
                var_23 += (((((20365 ? 1 : 3498190064))) ? ((-(arr_23 [i_10 + 1]))) : (min((arr_23 [i_10 - 1]), (arr_23 [i_9])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        for (int i_12 = 1; i_12 < 10;i_12 += 1)
        {
            {
                var_24 |= ((((((((-(arr_26 [i_11] [i_11] [i_12 + 2])))) ? (arr_3 [i_11] [i_11] [i_11]) : (arr_26 [8] [8] [i_11])))) || ((((((78 ? 13 : 2053822479))) ? (arr_1 [0]) : (3498190051 != 108))))));
                arr_32 [i_11] [i_11] = ((((min((arr_29 [i_12 - 1] [i_12 + 2]), (arr_25 [i_12 - 1] [i_12 + 1] [i_12 + 1])))) ? (17967239466613064114 && 9217606458226701840) : (!5483)));
            }
        }
    }
    #pragma endscop
}
