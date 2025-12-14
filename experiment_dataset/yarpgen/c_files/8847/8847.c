/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = 65535;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [9] = (((~65518) + ((-(arr_5 [i_0] [i_0] [i_0] [i_0])))));
                    var_20 = (min(var_20, -94));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            arr_12 [i_0] [i_4] = ((((max((arr_9 [i_4] [i_4] [i_4] [i_4] [i_4 - 2]), (arr_9 [i_4] [i_1] [i_2] [i_1] [i_2])))) ? ((((182 ? -15196 : 101)) + var_8)) : (!var_1)));
                            var_21 = (((arr_1 [0]) ? 2449222104 : (arr_10 [i_0] [i_4 - 3] [i_2] [i_4] [0])));
                            arr_13 [i_0] [i_4] [i_0] = (((arr_9 [i_4] [i_4 - 3] [i_4 - 2] [i_4 - 3] [i_4]) ? ((((min((arr_11 [i_0] [i_4] [i_2] [i_2]), (arr_0 [i_4] [i_2])))) ? (180 + -76) : 32765)) : ((23 - (arr_4 [i_4 - 2] [i_0])))));
                            var_22 = (max(var_22, (((((((arr_10 [i_0] [i_0] [i_4 + 1] [i_0] [i_4 + 1]) ? 8 : (arr_9 [i_0] [i_2] [i_4 + 1] [i_3] [i_4])))) ? (max((arr_8 [i_4] [i_4] [i_4 - 2]), ((var_0 ? (arr_3 [i_1] [i_0]) : (arr_7 [i_0] [i_2] [i_2]))))) : -61)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_23 = (arr_8 [i_0] [i_2] [i_2]);
                            arr_17 [i_0] [i_3] [i_2] [i_5] [i_2] [i_5] [i_5] = (((arr_5 [i_0] [8] [i_0] [5]) != (arr_9 [i_5] [i_3] [i_2] [i_1] [i_5])));
                            arr_18 [i_5] [i_5] [i_2] [i_3] [i_5] [i_0] = ((var_17 >> (((arr_8 [i_0] [i_1] [i_1]) - 23727))));
                            var_24 = 231;
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_25 = ((((arr_0 [i_6] [i_2]) & (arr_0 [i_1] [i_6]))));
                            arr_21 [i_0] = (min(7, (((arr_16 [i_3] [i_0] [i_0]) ? (arr_16 [i_2] [i_0] [i_0]) : (arr_16 [i_0] [i_0] [i_3])))));
                            var_26 = 8;
                        }
                        var_27 = (((((((((arr_14 [i_0] [i_0] [i_2] [i_3] [i_0]) ? var_8 : (arr_20 [i_0] [i_0] [i_0] [0] [i_0] [i_0] [i_0])))) ? var_9 : (arr_4 [i_0] [i_0])))) ? (arr_20 [2] [i_2] [i_2] [i_2] [2] [i_2] [i_2]) : 8));
                    }
                    arr_22 [i_1] [i_1] [i_2] = (((((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 119 : (arr_5 [i_2] [i_1] [i_0] [i_0]))) != ((((min(var_10, var_14)) != var_5)))));
                }
            }
        }
    }
    var_28 = (min(var_28, ((((var_10 + (var_1 / var_5)))))));
    #pragma endscop
}
