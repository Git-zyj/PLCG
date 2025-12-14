/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((22819 || ((((var_1 ? var_4 : var_3))))));
    var_17 = (~-var_14);
    var_18 = ((var_5 ? ((21187 ? 21187 : 12877)) : ((-((max(12900, var_11)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [9] [i_2] [i_1] [i_0] = (((((((max((arr_1 [i_0]), (arr_2 [i_1] [i_1])))) ? (15365796374532476244 || var_7) : ((-(arr_2 [i_1] [0])))))) ? ((min((((arr_5 [i_1] [1]) && var_10)), (((arr_0 [i_0]) < (arr_0 [i_1])))))) : ((((arr_8 [i_2] [i_1] [i_0]) != (arr_5 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] [i_0] [i_0] [5] [i_0] = ((((1308052555 ? 135 : 0)) & (((arr_12 [i_0] [i_1] [i_0]) + var_0))));
                                arr_18 [i_0] = (arr_4 [i_1] [i_1] [i_1]);
                                var_19 = max(var_8, var_2);
                                var_20 = (arr_12 [i_2] [i_2 - 1] [i_2]);
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        var_21 = (((((~(arr_14 [i_0] [i_5 + 1] [i_2] [9] [13] [13] [i_5 - 1])))) ^ (min((~255), (arr_7 [i_0] [i_5] [i_2 - 1] [i_5 + 2])))));
                        var_22 = (min((((-(arr_21 [i_0] [i_0] [i_2 - 1] [i_5 - 2])))), (arr_2 [i_0] [i_0])));
                    }
                    var_23 = (-26893 % var_11);
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 0;i_6 += 1)
    {
        arr_25 [i_6] [i_6] = ((-((min((arr_10 [i_6 + 1]), (arr_10 [i_6 + 1]))))));
        var_24 = (((!(arr_19 [i_6 + 1] [i_6 + 1] [7] [i_6 + 1]))));
    }
    #pragma endscop
}
