/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_17 = (((((~(arr_2 [i_0] [i_0])))) | (arr_2 [i_0] [i_0 + 1])));
        var_18 = (((((~((var_13 ? (arr_0 [i_0 + 1]) : var_13))))) + ((~(var_11 & var_14)))));
        arr_3 [i_0 - 2] [i_0 + 1] |= ((4294967295 && (((42438 ? 65535 : -1999473231)))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_19 = ((((var_3 ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 2]))) < ((((arr_4 [i_1 - 1]) > (arr_4 [i_1 - 2]))))));
        var_20 = (min(var_20, ((((~(max(var_3, (arr_4 [i_1])))))))));
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        var_21 ^= (-((((arr_5 [i_2] [i_2]) >= ((((arr_4 [i_2]) ? (arr_0 [8]) : (arr_0 [i_2]))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {
                    var_22 = (arr_9 [i_2]);
                    arr_15 [i_2] = (arr_10 [i_2] [i_2]);
                    var_23 = ((min(23098, 6144)));
                    arr_16 [i_2 + 1] [i_3] [i_2] = (0 & 41);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_24 = ((-(((!((((arr_7 [i_2 + 1] [1]) % -6145))))))));
                                var_25 = (~2849973593934021143);
                                var_26 = (min(var_26, (((((+(((arr_7 [i_5] [i_3]) - var_5))))) ? ((max(57, 63145))) : var_4))));
                            }
                        }
                    }
                }
            }
        }
        arr_22 [i_2] = (-1524786083 ? 23074 : (-9223372036854775807 - 1));
    }
    var_27 = (min(var_27, -var_10));
    var_28 = ((((((!var_6) ? var_4 : (-2849973593934021143 == var_6)))) - var_5));
    var_29 = var_2;
    #pragma endscop
}
