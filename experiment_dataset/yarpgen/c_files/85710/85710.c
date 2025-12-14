/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = ((18781 ? ((((var_1 <= (arr_15 [16] [i_3 - 2] [i_4]))) ? 102 : (max((arr_3 [i_0] [i_0]), -434606596)))) : ((max(var_4, 65123)))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((46080 ? 37484 : (arr_5 [i_1 - 1] [2]))));
                                arr_18 [i_0] = ((arr_14 [i_0] [i_1] [i_1] [i_1 + 3] [i_1 + 3] [i_1 + 3]) * 594);
                                var_16 -= ((-(min((arr_14 [0] [i_0] [i_0] [0] [i_0] [i_0]), (!46073)))));
                            }
                        }
                    }
                }
                arr_19 [i_0] [i_0] [i_0] = ((((arr_13 [i_1 + 2] [17] [i_1 + 1]) == (arr_9 [i_0]))));
                arr_20 [i_0] [i_1] = (((((((109 ? 463015130 : -32755)) <= (arr_3 [i_1 + 3] [i_0])))) <= var_1));
            }
        }
    }

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_24 [i_5] = 1;
        var_17 = (max((~var_4), 7412811156359417641));
        var_18 *= (max(3289433885, (arr_10 [i_5] [i_5] [10] [i_5] [i_5])));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 10;i_6 += 1)
    {
        var_19 += ((434606589 ? 3299607274 : (arr_10 [i_6] [i_6] [i_6] [i_6] [i_6])));
        arr_29 [i_6 - 2] |= (arr_13 [i_6] [i_6 - 2] [i_6]);
    }
    #pragma endscop
}
