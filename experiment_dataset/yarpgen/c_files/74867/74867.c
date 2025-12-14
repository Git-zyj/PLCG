/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 ^= ((((((((var_3 % (arr_0 [i_0])))) ? (-2048921699 + 2372305474348907697) : (!var_12)))) ? (((!(arr_4 [i_1] [i_1])))) : (!var_1)));
                var_16 ^= ((var_13 | ((((!((((arr_4 [i_0] [i_0]) + var_11)))))))));
                var_17 = (max(var_17, var_7));
            }
        }
    }
    var_18 ^= var_8;

    /* vectorizable */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        var_19 = (min(var_19, (((arr_8 [8]) ? var_7 : (arr_8 [12])))));
        arr_9 [20] |= -2048921698;
        var_20 *= ((!(arr_7 [i_2 + 1])));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((14527 < (min(65526, 2348670789)))))));
        var_22 -= (((!(arr_8 [18]))));
        arr_12 [16] &= (max((max((((arr_10 [2]) ? var_3 : var_8)), 2048921688)), ((min((arr_6 [1]), (arr_6 [14]))))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_23 |= ((288230376151711743 ? (~var_8) : 25948));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 20;i_7 += 1)
                {
                    {
                        var_24 += 0;
                        var_25 = (max(var_25, (arr_13 [i_4])));
                        var_26 *= (arr_10 [i_6 + 1]);
                    }
                }
            }
        }
        var_27 *= (arr_15 [i_4]);
    }
    #pragma endscop
}
