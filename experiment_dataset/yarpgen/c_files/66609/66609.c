/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((~(max(var_4, 108)))))));
    var_16 = (!var_4);
    var_17 = (((((var_7 ? 33920 : 113)))) ? (((~var_9) ^ var_14)) : var_1);
    var_18 = ((+((var_13 ? (((var_4 + 9223372036854775807) >> var_2)) : ((var_0 ? var_10 : var_13))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (min(var_19, (((20275 ? 25 : 13854192525998267602)))));
        var_20 = ((((min((!var_7), (((arr_2 [i_0]) ? var_0 : 4679920533700503845))))) ? -156 : ((((arr_2 [i_0]) > (var_6 != 118))))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_21 = (-54 ? (min((min(232912171506376749, 409579491)), (arr_0 [i_1] [i_1 - 1]))) : (((-((var_8 ? (arr_1 [1] [11]) : var_7))))));
        arr_7 [i_1] [2] = (((((arr_5 [i_1 - 1]) == var_1)) ? var_10 : ((var_7 ? (arr_4 [i_1]) : (arr_5 [i_1 - 1])))));
        var_22 = (arr_4 [i_1]);
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((-(((((var_6 ? (arr_5 [i_2 + 1]) : var_0))) ? 4934737724647219013 : var_1))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_23 = arr_5 [i_2];
                                var_24 = (4346411179201237068 % 49);
                                var_25 ^= (min((arr_10 [i_6] [i_5 - 2]), (((((var_11 ? (arr_15 [i_2]) : var_8))) ? ((((arr_2 [i_3]) - (arr_18 [i_3] [i_6] [i_4] [i_2 + 1])))) : (((arr_13 [i_6]) ? (arr_6 [i_3]) : var_2))))));
                            }
                        }
                    }
                    var_26 = ((-(arr_14 [i_2 + 1] [i_2 + 2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_27 ^= var_6;
                                var_28 = (min(var_28, (((min((arr_20 [i_7 - 1] [i_7 + 1] [i_7] [i_3]), var_14))))));
                            }
                        }
                    }
                    arr_28 [i_2] [i_2] [i_2] [2] = (((min(var_0, (arr_19 [i_2] [i_2] [i_2] [i_4] [i_4]))) & var_12));
                    var_29 ^= 1;
                }
            }
        }
    }
    #pragma endscop
}
