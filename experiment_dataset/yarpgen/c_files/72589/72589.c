/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((var_16 ? (((((var_17 ? var_5 : 274877906880))) ? var_12 : (((var_4 + 2147483647) >> (var_0 + 564))))) : (((((1577324637 ? 236 : 159)) >= ((max(var_0, var_3))))))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_1 [i_0 + 2]) + (arr_1 [i_0 - 1])));
        arr_4 [i_0] [i_0] = ((!(arr_1 [i_0 - 2])));
        arr_5 [i_0] = (((arr_2 [i_0]) < ((~(arr_2 [i_0])))));
        var_19 = (arr_1 [i_0]);
        var_20 = (min(var_20, ((((arr_0 [i_0] [i_0]) && (((var_15 ? (arr_1 [i_0]) : var_15))))))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = 63;
        var_21 -= (((((+(((arr_7 [i_1]) - 112))))) ? -13200 : (min((min((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1]))), (arr_6 [i_1 - 1] [i_1 + 1])))));
        arr_9 [i_1] = ((var_0 ? (arr_7 [i_1]) : (((((-3380634261083812462 ? (arr_7 [i_1]) : (arr_6 [i_1] [i_1])))) ? (((arr_7 [i_1]) & (arr_6 [i_1] [i_1]))) : (arr_6 [i_1] [i_1])))));
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_22 = ((-(((var_4 < (arr_11 [i_2 + 1]))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_23 = -7142344382155882385;
                            arr_24 [i_2] [i_2] [i_6] [i_6] = ((139 ? 1 : 63));
                        }
                        var_24 *= ((arr_20 [i_2] [i_3] [i_3] [i_2]) ? ((((arr_23 [i_2] [i_3] [i_4] [i_2] [i_2]) ? (arr_12 [i_4 + 3]) : (((arr_16 [i_2] [i_3] [i_4] [i_2]) ? (arr_15 [i_3] [i_3]) : (arr_12 [i_2])))))) : (min((arr_21 [i_2] [i_2] [i_2] [i_2]), (arr_22 [i_2] [i_2 + 2] [i_2 + 2] [i_2] [i_4 + 4]))));

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] = (((-(arr_10 [i_2] [i_2 + 1]))));
                            arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] = (~(((arr_16 [i_2] [i_3] [i_3] [i_5]) | (arr_19 [i_7] [i_5] [i_3] [i_2]))));
                            var_25 = (!18446744073709551613);
                            arr_31 [i_2] [i_3] [i_4] [i_5] [i_7] = (((~(arr_15 [i_2] [i_5]))));
                            arr_32 [i_2] [i_2] [i_2] [i_2] = (!1);
                        }
                        arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] |= (((arr_12 [i_2]) ? -3380634261083812462 : (arr_25 [i_2] [i_3] [i_4] [i_5] [i_5] [i_5])));
                        var_26 = (min((((((max((arr_22 [i_2] [i_2] [i_3] [i_2] [i_5]), var_6))) || (arr_15 [i_2] [i_2])))), -var_7));
                    }
                }
            }
        }
    }
    var_27 = var_8;
    #pragma endscop
}
