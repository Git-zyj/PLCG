/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [4] = ((((max((((arr_0 [i_0 + 3] [i_0]) ? (arr_1 [i_0 + 3]) : 5350371684882971143)), (((63 ? 148 : var_13)))))) ? var_3 : (((!(((var_3 ? var_3 : 19347))))))));
        arr_4 [i_0 + 2] [i_0] = ((((min(var_4, ((835320811 ^ (arr_0 [i_0] [i_0])))))) && var_4));
        var_14 = (min(var_14, (((((min(2426622023561460940, 4095))) ? ((((min((arr_1 [i_0 - 1]), (arr_2 [i_0])))) ? var_0 : ((((arr_2 [i_0]) ^ 40051))))) : (var_2 - 48))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] = (((((((var_0 ? (arr_2 [12]) : (arr_1 [i_1])))) ? 0 : ((var_13 ? -7100617428398472056 : 7100617428398472048)))) ^ var_12));

        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            var_15 = (((arr_9 [i_1]) ? (((~var_7) ^ (arr_9 [i_1]))) : (-6422550507839407647 & -30257)));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_16 = (max(var_16, ((((((var_3 ? (arr_2 [20]) : var_4))) ? (max((arr_0 [i_4] [i_4 - 1]), 31340)) : (((min(1, 30250)))))))));
                            arr_18 [i_1] [i_5] [0] [i_4] [0] = ((var_4 ? (min((arr_16 [i_5]), (max(var_2, 15006357660044932557)))) : (((arr_5 [i_2 - 2] [i_3]) * (((arr_0 [i_1] [i_2 - 1]) ? var_0 : (arr_15 [i_1] [2] [12] [i_4 - 1] [12])))))));
                        }
                    }
                }
            }
            var_17 = ((((arr_12 [i_1] [i_2 + 2] [i_1]) / ((max(-30250, (arr_5 [i_1] [i_1])))))));
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_25 [i_1] [i_1] |= (arr_1 [i_1]);
                arr_26 [i_7] [i_6] [i_6] [i_7] = 1;
            }
            arr_27 [i_6] = (max((max((((var_1 ? var_3 : var_3))), (((arr_1 [i_1]) ? (arr_16 [i_1]) : (arr_8 [i_1]))))), 52254));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 11;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        var_18 &= (arr_20 [i_8] [i_8] [i_1]);
                        arr_37 [i_1] [0] [6] [i_1] [0] = (((-1238741579 ? -1 : 255)));
                        arr_38 [5] [5] [i_8] [13] [13] = var_13;
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_19 = (max(((((-5108772276237871368 / var_5) ? (((arr_32 [i_1]) * 350293872)) : (max(var_8, (arr_0 [5] [i_9])))))), (((max(var_5, (arr_15 [i_9] [10] [12] [i_9] [i_9]))) + (arr_33 [13] [13] [i_9] [i_9 + 2])))));
                        var_20 = ((((((((var_0 == (arr_36 [i_1] [i_1] [i_9] [2])))) - 182575042))) ? (max(((var_10 - (arr_31 [i_1] [3] [i_1]))), -1)) : (((!((((arr_9 [i_11]) + 15))))))));
                    }
                    var_21 = (max((((-16731 | var_4) ? ((((var_5 == (arr_11 [11] [13] [i_9] [i_9]))))) : var_9)), (!255)));
                    arr_41 [1] [i_8] [i_8] = ((30257 ? 0 : var_13));
                }
            }
        }
    }
    var_22 = (min(var_22, ((max(var_10, (((min(var_0, var_9)) | (((min(var_2, var_12)))))))))));
    #pragma endscop
}
