/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 18153889335963205384;
    var_18 = ((~((var_6 ? (max(var_5, var_13)) : (9223372036854775807 && 73)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 &= (arr_1 [i_0]);
        var_20 = ((-(arr_1 [i_0])));
        var_21 = ((!(arr_0 [i_0])));
        arr_2 [i_0] &= (((arr_1 [i_0]) ? (((arr_1 [i_0]) ? 0 : 4294967295)) : (((117 * (arr_1 [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1)
    {
        var_22 = (arr_1 [i_1 - 1]);
        var_23 = ((((((!(((arr_1 [i_1]) >= 14)))))) + ((((((arr_4 [i_1]) ? (arr_4 [i_1 + 1]) : var_10))) ? (arr_0 [i_1]) : (min(18446744073709551615, 425))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_24 = (arr_6 [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_25 = (arr_6 [i_4]);
                            var_26 -= (((arr_16 [i_6] [i_4 + 1] [i_4 - 1]) ? (arr_16 [i_6] [i_4 + 1] [i_4 - 1]) : (arr_16 [i_6] [i_4 + 1] [i_4 - 1])));
                        }
                        var_27 = var_7;

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_28 = ((+(((arr_15 [i_2] [i_3] [i_5] [i_4 + 1]) ? (arr_11 [2] [i_2] [i_2]) : (arr_15 [i_2] [i_4] [i_2] [i_2])))));
                            var_29 = (max(var_29, 57));
                        }
                        for (int i_8 = 2; i_8 < 17;i_8 += 1)
                        {
                            var_30 = 4294967288;
                            var_31 = (arr_7 [i_4 + 1] [i_3]);
                        }
                        arr_26 [i_2] [i_3] [i_4] [i_5] [i_5] = (~var_5);
                        var_32 = (arr_24 [i_2]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
