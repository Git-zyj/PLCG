/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((3 ? 253 : 7564036359192688234)) <= var_1)) && var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = var_7;
                    var_14 -= ((13437682854934298278 == (arr_4 [i_0] [i_1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_15 -= ((((((-33 < 33) ? (arr_0 [i_4 + 1]) : (arr_4 [i_4 + 1] [i_3])))) <= (min(var_1, ((3 ? 13584603315083918910 : 3434881025972276690))))));
                                arr_18 [i_6] [i_4 + 1] = 32767;
                                var_16 = (max(var_16, (((-33 ? 0 : 2)))));
                                var_17 = (max(var_17, 8049150546146296820));
                            }
                        }
                    }
                }
                arr_19 [i_3] [i_4] = ((((min(7209788451285771178, (arr_10 [i_3] [i_4] [i_4 + 1])))) ? (min(var_8, var_0)) : (((var_2 << (95 - 91))))));
                arr_20 [i_3] [i_4] [i_3] = ((((((((!(arr_11 [i_3] [i_4] [i_4])))) << 1))) ? var_11 : var_8));
                var_18 -= (((51383 % 1) ? ((((arr_10 [i_4 + 1] [i_4] [i_3]) >= (61858 == -125784562)))) : (((17292 | 9973) << (var_1 >= var_11)))));
            }
        }
    }
    var_19 -= var_9;
    #pragma endscop
}
