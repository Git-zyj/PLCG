/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (((arr_2 [i_0]) ? (((255 ? (arr_1 [i_0] [i_0]) : -1))) : (-1 % 17717494062715631844)));
        var_17 = (((((arr_1 [i_0] [i_0]) ? -4021713034136244937 : (arr_0 [i_0]))) ^ -1));
        arr_3 [i_0] [i_0] = (((arr_0 [i_0]) + 64));
        var_18 = var_10;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_15 [i_1] = (!var_15);
                        var_19 = (((18446744073709551615 / var_5) + -8));
                        arr_16 [i_2] [i_4] = ((!((((((var_10 ? var_13 : var_11))) ? -166868257 : (max(169, -3653128368019088898)))))));
                        arr_17 [i_2] [i_1] = (max((((((max(-7, 8))) >> (var_15 - 38969)))), var_12));
                        var_20 = -var_10;
                    }
                }
            }
        }
        var_21 ^= max((((((var_9 ? (arr_1 [i_1] [i_1]) : 25))) | (max(var_14, (arr_11 [i_1] [i_1]))))), -3066823433820377750);
        var_22 = 8833630882447406924;

        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_23 = (-31 & 7);
            var_24 -= ((var_1 ? (((((var_1 ? var_1 : (arr_13 [i_1] [i_1] [i_1] [i_1])))) ? (max(var_12, (arr_2 [i_1]))) : (((((arr_8 [i_1] [i_5]) > (arr_9 [i_1]))))))) : 9));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_25 = ((33 ? ((((arr_1 [i_1] [i_1]) / 33))) : (arr_10 [i_6] [i_1] [i_6] [i_6])));
            var_26 = (arr_9 [i_1]);
            var_27 = (((((-(arr_9 [i_6])))) ? ((12 ? var_3 : var_11)) : (arr_21 [i_1] [i_6])));
        }
    }
    var_28 = ((-6 ? 1 : 536838144));
    #pragma endscop
}
