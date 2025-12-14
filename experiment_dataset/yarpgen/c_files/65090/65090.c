/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 18;i_3 += 1) /* same iter space */
                    {
                        var_12 = (max(var_12, ((((((((arr_5 [i_3] [i_2] [i_1] [i_3]) == 17968657606655550511)))) == (min((arr_5 [i_3] [i_1] [i_0] [i_3]), var_2)))))));
                        arr_9 [i_1] = (min((((((var_4 ? var_0 : (arr_1 [i_3])))) ? ((var_7 ? -1 : 1)) : (arr_2 [i_3 - 2]))), 75));
                        arr_10 [i_0] [i_1] = ((var_0 - (arr_5 [i_1] [i_3] [i_3 - 2] [i_1])));
                    }
                    for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_1] [i_1] [i_1] [15] = var_0;
                        arr_15 [i_0 - 1] [i_1] [10] = ((!((max((arr_8 [i_4] [i_4] [i_4 + 1] [i_0 - 1] [i_0 - 1]), (arr_8 [i_4 - 2] [i_4 + 2] [i_4 + 1] [i_1] [i_0 - 1]))))));
                        var_13 ^= (((arr_6 [i_0] [i_1] [6]) ? (((var_2 + (arr_1 [4])))) : (((192 ? (arr_7 [i_0] [14] [2] [i_4] [i_4] [i_2]) : (arr_7 [i_4] [0] [i_2] [i_4] [i_0] [18]))))));
                    }
                    var_14 = ((((((var_4 || 0) >= (!var_3)))) >= (max((max((arr_2 [i_0]), 1886423264)), ((1 ? -1 : 0))))));
                    var_15 |= ((!(arr_12 [i_0] [i_2])));
                }
            }
        }
        arr_16 [i_0] [i_0] = (arr_3 [0] [4] [i_0]);

        /* vectorizable */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            arr_20 [i_0] [i_0] [i_5] = (arr_11 [i_0] [i_0 - 1] [i_0 + 1] [3]);
            var_16 = (!901619866);
        }
        var_17 |= ((!((min((((arr_12 [i_0] [i_0]) ? (arr_18 [i_0] [5] [i_0]) : var_9)), 181)))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] = var_9;
        var_18 ^= ((arr_5 [0] [i_6] [i_6] [i_6]) ? (arr_5 [2] [i_6] [i_6] [i_6]) : (arr_5 [12] [i_6] [i_6] [1]));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_19 = ((!(arr_25 [i_7] [i_7])));
        arr_26 [i_7] [1] = ((var_8 ? ((var_8 ? (arr_4 [18]) : var_9)) : 16));
    }
    var_20 = (var_10 ? var_0 : (min((max(17629494373944266631, var_10)), 35)));

    /* vectorizable */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        var_21 = (max(var_21, (((((arr_5 [0] [i_8] [i_8] [0]) ? (arr_27 [i_8]) : 1541126867))))));
        var_22 |= (((arr_19 [i_8]) ? (arr_19 [i_8]) : (arr_19 [i_8])));
    }
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        var_23 = (max(var_23, (arr_29 [i_9] [i_9])));
        var_24 -= ((((max((arr_29 [i_9] [i_9 - 1]), (min(0, 1))))) >= (((arr_29 [i_9 - 1] [1]) ? (arr_29 [i_9] [i_9]) : (arr_29 [i_9 - 1] [i_9 - 1])))));
        var_25 = 127;
    }
    #pragma endscop
}
