/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((max(69, 4294967273)), 4294967273));
    var_16 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0 - 2] [7] [i_0 - 2] = (((arr_2 [1]) ? (((arr_5 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]) ^ (arr_5 [i_2 + 1] [i_2 + 1] [8] [i_2 + 1]))) : (arr_0 [i_0 + 1])));
                    var_17 *= (((max(23, var_6))) ? (arr_7 [i_1]) : (arr_7 [5]));

                    for (int i_3 = 2; i_3 < 8;i_3 += 1) /* same iter space */
                    {
                        arr_11 [6] [i_3] [i_3] = ((+(((arr_0 [i_3 - 1]) << (((arr_0 [i_3 - 1]) - 55))))));
                        arr_12 [i_2] [1] [i_3] = (((((max(var_5, 1824148146))) ? (max(var_10, var_2)) : var_12)));
                    }
                    for (int i_4 = 2; i_4 < 8;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_2] [i_4] [i_2] [i_2] [4] [i_0] = ((-1 > (arr_0 [i_0])));
                        var_18 |= ((var_11 ? ((((!(arr_6 [i_0]))))) : (min(((0 ? (arr_6 [i_0]) : 550536429777376882)), (((var_8 ? (arr_2 [i_4]) : (arr_7 [i_1]))))))));
                        arr_16 [i_0] [i_1] [i_2 - 1] [i_0] [i_1] [6] = max((--3831196334), ((((arr_6 [i_2 + 1]) ^ (arr_13 [i_0] [i_2 + 1] [i_2 + 1] [i_2] [i_4])))));
                    }
                    for (int i_5 = 2; i_5 < 8;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] [i_1] [i_2] [i_5 - 1] = -89;
                        arr_21 [i_0] = (((~11430135007626833338) ? (max(((2930071809 ? (arr_19 [i_0 - 3] [i_1] [i_2] [i_2 - 1] [i_2] [i_5]) : 463770962)), (((arr_2 [i_5]) ^ (arr_1 [i_0]))))) : (max((arr_6 [i_2 + 1]), var_2))));
                        arr_22 [i_1] [i_0 - 2] = ((((4294967273 ? 463770961 : ((var_12 ? -550536429777376883 : 57)))) < 23));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_19 = (max(var_19, (~var_11)));
                            var_20 += (arr_19 [i_5 - 2] [i_2 - 1] [1] [i_2] [i_2] [i_2]);
                            arr_25 [i_0] = (arr_10 [i_0] [i_1] [i_2] [i_5 + 2] [i_6]);
                            arr_26 [7] [0] [i_2] [i_2] [i_5 + 2] [7] = (~23);
                            arr_27 [i_0] [i_1] [i_1] = ((-(arr_23 [4] [i_0 - 3] [i_2 + 1] [i_0 - 3] [9])));
                        }
                    }
                    for (int i_7 = 2; i_7 < 8;i_7 += 1) /* same iter space */
                    {
                        arr_30 [i_7 + 2] [i_0 - 1] = (((max(((max(24969, 3711629216))), (max(-8921808208589979536, (arr_28 [i_7] [4] [i_1] [i_0]))))) | ((+(((-8921808208589979536 + 9223372036854775807) >> 23))))));
                        var_21 = (((((74 | var_8) == ((min((arr_23 [i_0] [i_0] [i_0] [i_2 - 1] [i_1]), (arr_17 [i_7 + 2] [i_2] [2] [i_1] [i_0])))))) ? (arr_10 [4] [i_1] [2] [i_0 - 2] [i_7 + 1]) : (((((!(arr_29 [i_0 - 4] [i_1]))) ? (((arr_24 [i_0] [i_0 + 1] [i_1] [i_1] [i_1] [i_0] [7]) ? (arr_24 [1] [i_1] [i_1] [i_7 + 1] [i_0 - 2] [i_0 - 2] [i_0]) : var_3)) : (max(var_5, 3831196332)))))));
                    }
                }
            }
        }
    }
    var_22 = (min(var_22, var_9));
    #pragma endscop
}
