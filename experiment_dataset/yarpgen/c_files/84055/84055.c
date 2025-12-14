/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (4294967295 < 0)));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_1 + 2] [i_0] [i_0] = ((((max((arr_5 [i_0] [i_0]), (arr_3 [i_0 - 2] [i_0 - 2])))) + (arr_5 [i_1 + 2] [i_0])));
            arr_7 [i_0] [i_1 + 1] [i_1] = ((63488 | (min((((arr_4 [i_0 - 1] [i_0 - 1] [i_0]) ? (arr_4 [i_1] [i_1 + 1] [i_0]) : (arr_0 [i_0]))), var_3))));
            var_11 ^= ((-(((!(arr_5 [6] [6]))))));
        }
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [0] [i_3 - 1] [i_4] [0] |= (min((arr_8 [6]), ((~(min(var_3, (arr_0 [10])))))));
                            var_12 = 33554431;
                        }
                    }
                }
                arr_19 [i_0] [i_0] [i_3 + 1] = ((((arr_8 [i_0]) - (((arr_8 [i_0]) - (arr_8 [i_0]))))));
                arr_20 [i_0] = ((((((arr_15 [i_3 + 1] [i_2] [i_3 + 3] [i_2 - 1]) + (arr_4 [i_3 + 2] [i_3 + 2] [i_0])))) ? ((((((arr_12 [i_0] [i_2 + 1] [i_3] [i_0]) <= -1965630200)) ? -var_5 : var_3))) : ((~(arr_17 [4] [3] [i_2 + 4] [i_2 - 1] [i_0])))));
            }
            var_13 = (min(var_9, var_0));
            arr_21 [i_0] [i_0] = ((!((-var_7 < (min(var_8, (arr_11 [i_0] [i_0] [i_2])))))));
        }
        arr_22 [i_0] = 65504;
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_14 = (min(var_14, var_1));
        var_15 = (min(var_15, ((((-((var_5 - (arr_3 [i_6] [1])))))))));
        var_16 -= (min((((max(23, 224)) - (-1 & var_0))), var_6));
    }
    var_17 = ((~((4294901792 & (((-32767 - 1) | 16617701774289083887))))));
    var_18 &= ((-((((!23) && (!var_2))))));
    #pragma endscop
}
