/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = ((!(((arr_0 [i_0 + 1]) && (arr_0 [i_0 + 2])))));
        var_15 = (max(var_15, (min((arr_2 [i_0 - 3]), (min((min((arr_2 [i_0]), (arr_1 [8]))), (arr_1 [i_0 - 1])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_16 = ((((arr_1 [i_2]) >> ((((max((arr_5 [i_2 - 1] [i_1] [2]), 0))) - 199)))) + ((((!(arr_1 [i_2]))) ? ((8 ? (arr_1 [i_0]) : (arr_7 [i_0 - 1] [i_0 - 1] [i_2]))) : (arr_7 [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = (((max((arr_10 [i_0]), -8))));
                                var_18 = 12213847666013102858;
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_19 = (arr_14 [i_5]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_20 *= (((var_12 + (arr_14 [i_7]))));
                    var_21 = ((!(-1 > -2519)));
                    var_22 = ((28503 ? 10634424214744863761 : -2519));
                    var_23 = 16422887304709498775;
                }
            }
        }
    }
    var_24 = var_2;
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 8;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_25 = (min(var_25, (((!((((arr_24 [i_8 - 1]) % (arr_24 [i_8 - 2])))))))));
                            var_26 = -25473;
                        }
                    }
                }
                arr_31 [i_8] [i_8] = ((arr_18 [i_8] [3] [i_8 - 1]) ? (arr_20 [i_8] [4]) : ((((arr_30 [i_8] [i_8] [i_8 + 1] [i_9 - 2] [5]) && (arr_30 [i_8] [i_8 + 1] [i_8 - 2] [i_9 - 1] [10])))));
            }
        }
    }
    #pragma endscop
}
