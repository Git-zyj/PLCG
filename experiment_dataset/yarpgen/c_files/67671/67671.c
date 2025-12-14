/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [0] = ((((((arr_0 [i_0]) & (arr_0 [i_0])))) & (((max(var_8, var_0)) << (((arr_0 [i_0]) << (var_0 - 300061654)))))));
        arr_3 [i_0] = ((var_7 ^ (arr_1 [i_0] [i_0])));
        arr_4 [i_0] [i_0] |= ((((((!(1 ^ -65))))) < (arr_1 [1] [i_0])));
        var_12 ^= ((+(((!0) ? (arr_0 [i_0]) : (((var_5 || (arr_0 [i_0]))))))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_0] [i_1 - 1] [i_1] = (((((max(-53, (arr_1 [8] [i_1]))) + 9223372036854775807)) >> (((max((arr_6 [i_0]), -30914)) - 18446744073709520660))));
            var_13 = (arr_6 [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_14 = var_5;
                            var_15 = (((52 < (arr_9 [i_0]))));
                            arr_16 [i_0] [i_4] [i_0] [i_0] = (-830692538 < 3840);
                            arr_17 [i_4] [i_1] [i_3] [1] = var_3;
                        }
                        var_16 = 19;
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_17 = (~0);
                arr_24 [6] [i_5] [i_5] [i_0] = ((-((((max((arr_6 [i_5]), var_4))) ? var_5 : (arr_23 [i_5])))));
                var_18 = (max(var_18, (((!((((~(arr_23 [i_6]))))))))));
                arr_25 [i_0] [i_0] [i_6] [i_6] &= ((((!(arr_6 [i_0])))));
            }
            arr_26 [i_0] &= (arr_9 [i_5]);
        }
    }
    var_19 = (((var_11 - (max(var_7, var_3)))));
    #pragma endscop
}
