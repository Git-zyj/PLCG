/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((22227 ? 1 : 1)) >> (((max((var_10 - 42509), (max(var_2, var_7)))) - 16474058369264135053))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [1] = ((-423103023 ? 1 : -86));
                    arr_9 [i_1] = (max((((var_10 ? (arr_1 [i_0]) : (2085439700552084401 >= var_16)))), ((max(var_1, 1)))));
                }
            }
        }

        /* vectorizable */
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            var_19 = (((!var_1) ? ((((arr_1 [i_0]) && var_13))) : (16361304373157467215 < var_14)));
            var_20 = ((-(arr_1 [i_3 + 2])));
            var_21 = var_10;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_22 = ((26 & ((((arr_0 [5]) > var_12)))));
            var_23 = var_2;
        }
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                var_24 ^= -23024;
                var_25 = ((!((((2085439700552084397 ? -63 : var_5))))));
            }
            var_26 = (max((max(-102, (arr_7 [i_0] [i_5 - 1]))), (!23694)));
        }
        var_27 = (max(1, (arr_13 [i_0] [i_0] [0])));
        arr_18 [i_0] = (((!(((var_8 ? 112 : 16361304373157467215))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    var_28 -= var_13;
                    var_29 = (max(var_29, ((max(125098944, 1)))));
                    arr_24 [i_0] [i_8] [i_0] = var_6;
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
    {
        var_30 = ((2524667278 ? ((((((arr_22 [i_9] [i_9]) | var_6))) ? (min(var_13, 1)) : (arr_23 [7] [i_9] [i_9] [i_9]))) : var_2));
        arr_29 [i_9] = (-3652906989377458447 ^ 1);
        arr_30 [i_9] [i_9] = ((((((max(var_2, var_5)) / 1))) || ((max(-var_8, (-7364785981462896288 ^ -7364785981462896278))))));
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
    {
        arr_33 [i_10] [18] = (arr_5 [i_10] [6] [i_10]);
        arr_34 [i_10] = 95;
        arr_35 [i_10] = ((134 ? (((((arr_25 [i_10]) < ((1 ? var_4 : 28166)))))) : (min((max(var_13, 6298)), (arr_20 [i_10] [i_10])))));
    }
    var_31 = (!3545899620);
    var_32 = 4176557586;
    #pragma endscop
}
