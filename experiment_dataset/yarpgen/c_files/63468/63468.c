/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    arr_8 [i_0] = (max((arr_0 [i_0]), (arr_7 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 2])));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_10 = (max(var_10, (-127 - 1)));
                        arr_11 [i_3] [i_2] [8] [i_3] |= (((((~(arr_0 [i_3])))) ? (((!(arr_0 [i_3])))) : (((!(arr_0 [i_3]))))));
                    }
                }
                for (int i_4 = 2; i_4 < 7;i_4 += 1)
                {
                    var_11 += (max(((((arr_13 [i_4] [i_4] [i_4 + 4]) && (arr_13 [i_4] [8] [i_4 + 2])))), (min(31, -32756))));
                    arr_15 [i_0] = (((max((arr_13 [i_0] [7] [1]), (arr_13 [i_0] [i_0] [i_4]))) - (((arr_13 [i_0] [i_1] [i_4 + 4]) - (arr_13 [i_0] [i_1] [i_4])))));
                }
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    var_12 = ((((min((((arr_10 [i_1]) - 34765)), (arr_17 [i_0] [i_0] [i_5] [i_5 - 1])))) + (arr_14 [6])));
                    arr_18 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
                    var_13 = (max(var_13, -31));
                }
                var_14 = ((-(arr_13 [i_0] [i_0] [i_1])));

                /* vectorizable */
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    arr_22 [i_0] = -127;
                    arr_23 [2] [i_1] [i_6] [i_0] = -1;
                    arr_24 [i_0] [i_0] = (((((arr_10 [i_1]) - -3010387203032407000))) ? 65535 : (arr_19 [i_0] [i_0]));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    arr_33 [i_8] [i_8] [i_9] [i_8] = (max(((var_0 ? ((((arr_31 [i_7] [i_7]) ? 8191 : (arr_32 [13] [i_8] [i_7] [18])))) : ((-(arr_26 [i_9] [i_7]))))), (((((((arr_31 [9] [i_8]) ? (arr_25 [i_8] [i_7]) : 1))) ? (arr_31 [i_8] [i_8]) : (arr_30 [i_7] [i_8] [i_8] [i_9]))))));
                    arr_34 [7] [i_8] = ((((((arr_25 [i_7] [i_7]) + (arr_25 [i_9] [i_7])))) ? (arr_25 [i_7] [i_7]) : (max((arr_25 [i_7] [i_8]), (arr_25 [i_7] [i_7])))));
                }
            }
        }
    }
    var_15 = (((var_8 + 2147483647) << ((((max(158, 11980325828600133068))) - 11980325828600133068))));
    var_16 = 1;
    #pragma endscop
}
