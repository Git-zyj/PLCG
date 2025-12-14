/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((min((var_16 || var_16), (var_13 < var_5))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_19 = var_8;
                        var_20 |= (~13771234292411873476);
                        arr_9 [i_0] [i_3] [i_0] [i_1] [i_2] [i_3] = (arr_0 [i_3] [i_0]);
                    }
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        var_21 = (arr_6 [i_4 - 1] [i_4 + 2] [i_4 + 2]);
                        arr_13 [i_4] [i_0] [i_1] [i_0] [i_4] = ((~((((max(2385603883, 107))) ? (arr_4 [i_0] [i_1] [i_2]) : ((-(arr_5 [i_0] [i_1] [i_2] [i_4 + 3])))))));
                        var_22 = (((((arr_7 [i_0] [i_4] [i_2] [1] [i_4]) && (arr_8 [i_4 + 3] [i_4] [i_4] [i_4] [i_4]))) ? (((!(arr_7 [i_0] [i_4] [i_0] [i_0] [i_0])))) : (!-3458)));
                        var_23 = ((-(((arr_11 [i_0] [i_1] [i_4 - 2] [i_4 - 2] [i_4 - 2]) ? var_12 : (arr_11 [i_4] [i_4] [i_4 + 3] [i_2] [i_4 + 4])))));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_24 = (min(var_24, ((((((min(-3474, (arr_5 [3] [i_2] [i_0] [i_0]))) == (arr_11 [i_0] [i_1] [i_1] [i_2] [i_5]))) || (arr_0 [17] [i_0]))))));
                        var_25 = (arr_2 [i_0]);
                    }
                    var_26 = var_0;
                    var_27 = (((arr_7 [i_0] [i_2] [i_2] [i_2] [i_2]) ? (min((arr_7 [i_0] [i_2] [18] [i_0] [18]), (arr_7 [i_2] [i_2] [i_1] [i_2] [i_0]))) : (((arr_7 [i_0] [i_1] [i_0] [i_1] [i_0]) ? (arr_7 [10] [i_1] [i_1] [i_1] [i_1]) : (arr_7 [i_0] [i_1] [i_0] [i_2] [10])))));
                }
            }
        }
        var_28 -= (~(arr_1 [i_0]));

        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_29 += (!-6451690487697936258);
            var_30 = (var_12 / -3465);
        }
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_31 += ((((-3465 ? (~2047) : 2256685598)) | (!2194606424)));
        var_32 = var_15;
    }
    for (int i_8 = 1; i_8 < 18;i_8 += 1)
    {
        var_33 = (-1796308449 / -156237139);
        var_34 = ((((((arr_4 [i_8 - 1] [i_8 - 1] [i_8 - 1]) ? (arr_11 [i_8] [i_8] [i_8] [9] [5]) : (arr_11 [i_8] [i_8] [i_8] [i_8 + 1] [i_8 - 1])))) ? (arr_22 [i_8]) : ((var_17 ? ((((arr_1 [i_8]) | var_14))) : (min(var_10, (arr_4 [1] [1] [i_8])))))));
        var_35 = ((((((min((arr_21 [i_8]), (arr_11 [i_8] [i_8] [i_8] [i_8 - 1] [i_8])))) ? (arr_5 [i_8 - 1] [i_8 - 1] [9] [i_8 - 1]) : ((max((arr_6 [5] [10] [i_8 + 1]), (arr_12 [i_8] [i_8] [5] [i_8] [i_8] [8])))))) / var_9));
    }
    var_36 = var_12;
    #pragma endscop
}
