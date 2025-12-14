/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_11 ? ((-17919 ? 18091 : var_2)) : (!var_10)))) ? 17106120506952852872 : ((((2450105450 > var_17) ? var_13 : ((2069830058 >> (2225137259 - 2225137231))))))));
    var_19 = ((!(2069830036 / 2069830041)));

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_20 = ((2225137240 ? (arr_1 [i_0]) : (122 | 1)));
        var_21 = (min(var_21, ((max(70368744177664, (((153 ? -8610 : ((max(0, var_6)))))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [15] &= (2225137248 == 32763);
        arr_7 [10] [10] = ((!(95 <= 485)));
        var_22 = 1;
        var_23 += 1;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_2] [i_3] [2] = (((arr_13 [1] [i_2] [i_3] [i_3]) ? (arr_13 [i_1] [i_2] [i_3] [i_4]) : (arr_13 [i_1] [i_2] [i_3] [i_3])));
                        arr_15 [i_1] [i_2] [i_3] [i_2] = (-32764 || 92);
                    }
                }
            }
        }
    }
    #pragma endscop
}
