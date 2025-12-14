/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
                    {
                        var_16 = (((arr_6 [i_3] [14] [i_0]) | (((arr_4 [i_2 + 2] [i_1] [i_1 - 2]) ? (max((arr_7 [i_0] [i_1] [i_1]), 2721329476)) : var_2))));
                        arr_9 [i_0] [i_1] [i_3] [i_2] [i_3 + 1] = 32100;
                        arr_10 [i_1 - 4] [i_1 + 3] [1] [i_3] = (arr_4 [i_0] [i_2] [i_3]);
                    }
                    for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_17 = (((((var_3 < (arr_2 [i_0 - 1])))) == ((min((arr_2 [i_0 - 1]), (arr_3 [i_4 - 1]))))));
                        var_18 = (((max(var_5, (arr_8 [i_0 - 2])))));

                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 23;i_5 += 1)
                        {
                            arr_15 [i_0 + 2] [i_4] [i_0 + 2] [i_4] [i_5] [i_2 + 2] = ((((1 != (arr_0 [i_5]))) ? (((arr_12 [7] [i_1] [i_1] [i_1]) ? (arr_12 [i_0 - 1] [0] [2] [i_0 + 2]) : var_11)) : var_10));
                            var_19 ^= ((-(((arr_1 [i_0]) ? 12288 : 33436))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            var_20 = (((arr_13 [i_0] [i_0] [i_0] [i_6 - 1] [i_4]) != (arr_13 [i_6 - 1] [i_6] [i_6] [i_6 + 1] [i_4])));
                            arr_18 [10] [20] [i_2] [i_4] [i_2] [i_6 - 1] [i_2] = (((arr_11 [i_0 + 1] [i_1 - 3] [i_0 + 1] [i_1 - 3]) ? (arr_7 [i_1 - 3] [i_6 + 1] [i_6 - 1]) : 27));
                            var_21 *= (arr_3 [i_2 + 2]);
                        }
                        for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            var_22 += ((32094 ? (min(((-7626 ? var_11 : 1)), 959348425)) : (arr_16 [i_0] [i_1] [i_2 - 1] [i_4] [i_7])));
                            arr_23 [i_0 + 2] [i_4] [i_4] [i_4] = ((53744 ? -537917648313995251 : 53252));
                            var_23 = (max(var_23, (((+(((arr_6 [i_0 - 1] [i_2 + 1] [i_7 - 2]) ? (arr_6 [i_0 + 2] [i_2 + 2] [i_7 - 1]) : var_12)))))));
                            arr_24 [i_4] = 7;
                        }
                        for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            var_24 = 53247;
                            var_25 = (min(var_25, ((max((((((10980 ? 10179285283285684453 : var_2))) ? var_5 : -21)), (((((var_15 ? var_6 : (arr_17 [i_0])))) ? (((arr_3 [i_0]) / (arr_6 [i_0] [21] [i_1]))) : 54381)))))));
                            var_26 -= ((arr_19 [i_1 + 1] [i_1 + 1]) ? (((-1227942368 ? var_3 : 4272476766))) : (min(((var_9 ? (arr_19 [20] [i_1 + 3]) : (arr_17 [3]))), (arr_5 [i_0 - 1]))));
                        }
                        var_27 = (min(var_27, ((min((min(((53254 ? var_12 : 252)), var_11)), (arr_25 [i_0] [18] [i_1] [i_2 + 1] [2]))))));
                        arr_29 [22] |= ((((max((arr_5 [i_0 - 2]), (arr_5 [i_0 - 2])))) >> (((((arr_5 [i_0 - 2]) ? (arr_5 [i_0 - 2]) : (arr_5 [i_0 - 2]))) - 136))));
                    }
                    arr_30 [i_0] [3] [i_2] [i_1] = -3661;
                    var_28 = -41285;
                }
            }
        }
    }
    var_29 = ((((((var_11 ? var_5 : 1)))) ? (var_8 * -90) : (max(-1211575054, 9223372036854775807))));
    var_30 &= var_5;
    var_31 = ((((((((min(1, var_9)))) & (min(var_3, 156))))) ? ((((9223372036854775807 ? -45 : var_1)))) : var_9));
    var_32 = 18446744073709551615;
    #pragma endscop
}
