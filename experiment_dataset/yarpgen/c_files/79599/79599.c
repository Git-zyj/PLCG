/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_11 = ((~(((arr_0 [i_0 + 2] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_3 [i_0] = ((((166495631 ? 1448216179 : (arr_1 [i_0]))) - 1133518331));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((((1006437583264257821 >= (arr_1 [i_1])))) < (21332 | -121)));
        var_12 = (var_2 ^ (((arr_0 [i_1] [i_1]) >> (((arr_0 [i_1] [i_1]) - 478390956534127353)))));
        arr_7 [i_1] [i_1] = ((73 >> (-524380579 + 524380588)));
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_13 ^= (((arr_4 [i_2]) <= (((30516 ? -1006437583264257821 : 193457264)))));
        arr_10 [i_2] = 54099;
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_14 = (!var_6);
                arr_16 [0] [i_4] |= (var_7 == var_5);
                var_15 = (((((~(arr_2 [i_3])))) || (((172 ? -493671016211019449 : 42664)))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_27 [i_4] [i_5] [i_4] [i_4] [i_4] = (min((arr_15 [i_3] [i_3] [i_3]), var_1));
                                arr_28 [i_3] [i_5] [i_5] [8] [i_7] [i_5] = (arr_14 [i_5] [i_7]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((((max(var_5, var_6))) ? (((var_5 <= var_2) ? (0 + var_4) : var_4)) : var_6));
    #pragma endscop
}
