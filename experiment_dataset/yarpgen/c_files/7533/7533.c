/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_2] [i_2] = ((~(arr_7 [i_2] [i_1])));
                    arr_10 [7] [i_2] [i_0] = (((arr_8 [i_0] [i_1] [i_1] [i_0]) ? (arr_3 [i_0] [i_1] [i_2]) : (arr_0 [i_0])));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_13 = ((-(((max((arr_5 [i_0] [i_0] [i_0] [i_0]), (arr_14 [i_2] [i_3] [i_2] [2] [i_1] [i_1] [i_2])))))));
                            arr_15 [i_2] [i_1] [i_1] = (((~0) ? (((arr_3 [i_0] [i_1] [i_1]) ? 2863738020032440737 : (arr_4 [i_3] [i_1]))) : (~1)));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_14 = (((((((((32 ? (arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_0]) : (arr_14 [i_2] [i_1] [i_2] [i_2] [i_3] [i_3] [0])))) || 18446744073709551599)))) % (((1 && var_8) ? (arr_5 [i_5] [0] [i_1] [i_0]) : var_9))));
                            arr_18 [i_0] [i_1] [i_2] = (((!(arr_5 [i_3] [i_2] [i_0] [i_0]))));
                            arr_19 [i_2] = 7906284317761513244;
                        }
                        var_15 += (arr_14 [i_3] [i_1] [2] [i_2] [i_3] [i_1] [i_3]);
                        arr_20 [i_2] [i_2] [i_2] [i_3] = ((+((((arr_7 [i_2] [i_2]) > (min((arr_11 [i_0] [i_1] [i_0] [i_3]), var_8)))))));
                    }
                }
            }
        }
    }
    var_16 = (min(var_16, var_10));

    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_17 = (--1313433792616680181);
        arr_23 [i_6] [8] |= ((40 ? (((((~(arr_2 [i_6])))) ? (max(25, 1152690513)) : var_9)) : (((((arr_12 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) & (arr_16 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))));
    }
    var_18 = (!var_10);
    #pragma endscop
}
