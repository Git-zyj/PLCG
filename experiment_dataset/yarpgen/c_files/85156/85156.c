/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_10 = (min((arr_2 [i_0 + 2]), ((var_1 / (((min((arr_0 [i_0 + 1] [i_0]), (arr_0 [6] [i_0 - 1])))))))));
        arr_3 [i_0] = (min((~2389422972), (((2 != (((arr_1 [i_0]) ? 1905544316 : 1905544352)))))));
        var_11 |= ((((min(2389422990, 140)) & (((11329 ? -876 : (arr_0 [i_0 + 1] [i_0 + 2])))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_12 = (~4820811182884202002);
        var_13 = ((-(arr_0 [i_1 - 1] [0])));
        var_14 = (arr_1 [i_1 - 2]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_15 = (arr_0 [i_1 + 2] [i_1 - 1]);
                    var_16 = (arr_0 [i_2] [i_3]);
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] = (max((arr_2 [i_4 - 2]), ((-(arr_2 [i_4 + 2])))));
        var_17 = (arr_8 [i_4]);
        var_18 = (((arr_8 [i_4 + 1]) + (arr_5 [i_4])));
    }
    for (int i_5 = 2; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_19 = 1905544309;
        var_20 = ((((((max(var_7, (arr_5 [i_5])))) ? (arr_4 [i_5 - 2] [i_5 - 2]) : 1905544330)) ^ ((((var_0 - 1) ? (arr_10 [i_5 - 1] [i_5 - 2] [i_5 + 1]) : ((max((arr_6 [8]), (arr_10 [i_5] [i_5] [i_5 - 2])))))))));
    }
    var_21 = (((min(26718, 1945580942))));
    var_22 &= (max(((min(var_8, 1945580961))), 1099511496704));
    var_23 = (max(var_23, var_9));
    var_24 += var_7;
    #pragma endscop
}
