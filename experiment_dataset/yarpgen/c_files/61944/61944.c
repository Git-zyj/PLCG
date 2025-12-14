/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_10 = var_0;

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_10 [0] [i_1] [21] = -1037840058949514044;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            arr_18 [i_1] = (((arr_0 [11] [i_0]) / (arr_6 [9] [14] [i_1] [i_3])));
                            var_11 = (var_9 != 4294967295);
                            var_12 += ((var_1 ? (arr_12 [7] [i_1]) : (arr_12 [14] [20])));
                        }
                        var_13 = (-98 - var_8);
                    }
                    var_14 += ((var_9 > (((arr_7 [i_0]) ? var_0 : (arr_7 [i_2])))));
                    arr_19 [5] [12] [i_1] [18] = ((~(((((var_6 ? var_9 : var_2))) ? ((~(arr_14 [15]))) : var_1))));

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            arr_25 [5] [i_1] [3] [7] [6] = var_7;
                            arr_26 [20] [7] [i_1] = (((((((115 ? 0 : 123))) || (((arr_3 [1] [6]) >= (arr_20 [16] [21] [i_1] [9] [6]))))) ? (((-(-127 - 1)))) : ((((min(var_3, (arr_12 [18] [7])))) ? (((max(var_1, var_3)))) : (arr_11 [2] [21] [14] [21] [i_6 - 1] [1])))));
                        }
                        arr_27 [i_5] [2] [24] [18] |= (((((1343754029 ? (-127 - 1) : -31329))) ? (1343754029 * var_2) : ((var_6 ? 10857710659046865930 : var_9))));
                        var_15 = (min(var_15, ((((arr_11 [11] [9] [15] [11] [i_2] [15]) / ((-(arr_13 [8] [6] [i_5] [i_2] [i_5]))))))));
                    }
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_16 ^= min(((var_5 & (max(var_9, 116)))), (((max(var_5, var_4)))));
                    var_17 = (max(var_17, ((((arr_12 [7] [23]) != (((arr_6 [6] [4] [i_0] [22]) & (662669213259899916 << var_2))))))));
                }
                var_18 = (~-48);
            }
        }
    }
    var_19 = (((!var_2) ? ((((((var_6 ? var_7 : var_7))) ? var_5 : var_4))) : var_0));
    var_20 += var_6;
    var_21 -= (~((((max(2951213267, -124))) & (max(var_3, var_9)))));
    #pragma endscop
}
