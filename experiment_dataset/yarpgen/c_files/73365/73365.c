/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_15 | var_2);

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 ^= 93;
            var_21 ^= (((-(arr_0 [i_0 + 2] [i_1]))));
            arr_6 [i_1] = 163;
        }
        var_22 = 1;
        arr_7 [i_0] [i_0 - 2] = ((var_4 ? (arr_5 [i_0 + 2] [i_0]) : (arr_5 [i_0 - 3] [i_0])));
    }

    for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_23 = (max(1, ((((arr_3 [i_2] [i_2]) >= -30660729)))));
        var_24 ^= ((var_3 ? (~-8252) : ((2823201792243256824 ? (min((arr_1 [i_2]), (arr_9 [i_2]))) : 1))));
        arr_11 [i_2] = (0 || 30660741);
    }
    for (int i_3 = 2; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3 - 1] = ((var_7 ? ((14 ? 53 : 1)) : ((((((var_1 ? -1899 : 7)) + 2147483647)) >> (((((-2147483647 - 1) - -2147483625)) + 50))))));
        var_25 = ((-(((((2086192511 ? 2086192485 : 41774))) ? var_5 : (((var_17 ? 1984143217 : 213)))))));
        var_26 ^= (((((!var_15) ? ((min(32759, 90))) : var_16)) >> (((((arr_1 [i_3 + 1]) ? 9490268821895038599 : 175)) - 9490268821895038586))));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        arr_17 [i_4] = var_12;
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        arr_25 [i_4] [i_5 - 2] [i_4] [i_6] = (!1);
                        var_27 ^= (((((min(18446744073709551614, var_9)))) ? (((min(162, (arr_19 [i_7]))))) : ((65382 ? ((109 ? var_8 : var_14)) : (arr_16 [i_5 - 2] [i_4])))));
                    }
                }
            }
        }
        var_28 = (((((var_6 ? 182 : (var_5 || 596135658226040293)))) ? ((min(1905, ((12115142754867014925 ? 11 : 1))))) : (min((max(var_4, var_1)), (((var_5 ? (arr_9 [i_4]) : var_8)))))));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        arr_29 [i_8] [i_8] = var_3;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                {
                    arr_36 [i_8] [i_8] [i_10 - 2] = (-32767 - 1);
                    var_29 |= var_3;
                    var_30 = ((-((9005814436326325614 + (arr_12 [i_10 - 2])))));
                }
            }
        }
    }
    #pragma endscop
}
