/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_19 = (-1514788812836147686 < 214);
                            var_20 |= ((((max((arr_2 [i_2 + 1] [10]), var_4))) * ((((63 ? (arr_9 [i_1]) : (arr_9 [i_1])))))));
                        }

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_2 + 3] [i_2] = ((arr_13 [i_2] [2] [i_2] [i_2] [i_2] [i_2 - 1]) + (arr_13 [i_2] [i_2 + 3] [i_2 + 3] [i_2] [i_2] [i_2 - 1]));
                            var_21 += var_11;
                            var_22 = (max(var_22, (arr_2 [i_0] [i_0])));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] |= (2 | -4002);
                        }
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            var_23 = ((7151 == (((((min(-7, -58))) != var_9)))));
                            var_24 = 1791245353;
                            arr_20 [i_0] [i_1] [i_2] [i_6] = (max(1776943934, -68));
                            var_25 = ((((max(1943914803, (((arr_11 [i_0] [i_1] [i_2] [i_1] [i_6]) / 12))))) * (((-(arr_7 [i_2] [i_6]))))));
                        }
                        arr_21 [i_0] [i_2] = (arr_9 [i_2]);
                        arr_22 [i_0] [i_1] [i_2 - 1] [i_0] [i_2] = (arr_7 [i_2] [1]);
                    }
                }
            }
        }
        arr_23 [i_0] [i_0] = 1;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_26 = ((47 != (arr_24 [i_7])));
        var_27 = (max(var_27, (((61821 == (arr_24 [i_7]))))));
        var_28 = var_8;
    }
    var_29 = var_16;
    #pragma endscop
}
