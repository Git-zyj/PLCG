/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_16));
    var_19 = var_9;
    var_20 = (1 >= 451676123);
    var_21 ^= (((max(var_6, (23234 & var_12))) >> (((((~1) ? var_9 : var_12)) - 1732734752))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_22 = ((+((((var_7 ? (arr_1 [i_0] [i_0]) : 22725)) + ((-(arr_1 [i_0] [i_0])))))));
        var_23 = (max((min((((arr_3 [i_0]) ? var_16 : 1109467079)), 22724)), (((237 ? (arr_3 [i_0]) : (arr_1 [i_0] [i_0]))))));
        var_24 = arr_1 [i_0] [i_0];
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_25 = (((((~(arr_6 [i_1])))) || (arr_5 [i_1] [i_1])));
        var_26 = ((arr_3 [i_1]) ? (min((!451676121), ((var_1 + (arr_2 [i_1]))))) : (((max((!3290441220), (arr_1 [i_1] [i_1]))))));
        var_27 = (min(var_27, ((((arr_2 [i_1]) != (min((max((arr_5 [i_1] [i_1]), (arr_3 [i_1]))), var_13)))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_28 = (((((((var_2 && (arr_3 [i_2])))) << (((arr_0 [i_2] [i_2]) + 130)))) - ((-((-126 ? (arr_6 [i_2]) : 1))))));
        var_29 = (max((arr_2 [i_2]), (max(((var_15 ^ (arr_2 [i_2]))), ((((arr_0 [i_2] [i_2]) & 327904254)))))));
    }
    for (int i_3 = 4; i_3 < 9;i_3 += 1)
    {
        var_30 ^= var_8;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    arr_19 [i_3] [i_3] [i_3] = (arr_8 [i_3] [i_3]);
                    var_31 = 34275;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            {
                                arr_24 [i_3] [i_4] [i_3] [i_5] [i_4] [i_3] [i_7] &= (((arr_23 [i_3] [i_7] [i_3] [i_7] [i_7]) || (((~(arr_23 [i_7] [i_7] [i_4] [i_6] [i_6]))))));
                                var_32 = ((((max(((((arr_0 [i_7] [i_5]) && (arr_3 [i_5])))), (arr_10 [i_5])))) ? (var_17 >= var_15) : (arr_17 [i_3] [i_3] [i_5])));
                                var_33 = (max(var_33, 327904279));
                                arr_25 [i_6] [i_7] [i_7] [i_6] [i_7] [i_6] [i_5] = ((((((((244 >> (var_6 - 182)))) == (min((arr_21 [i_7] [i_6] [i_6] [i_6] [i_3] [i_3]), (arr_20 [i_4] [i_5] [i_4] [i_3])))))) >> (13745 < -110941343)));
                                arr_26 [i_7] [i_6] [i_5] [i_6] [i_3] = ((((((arr_5 [i_5] [i_7]) | (((var_4 ? (arr_1 [i_7] [i_4]) : (arr_9 [i_7]))))))) / (((((-122 ? -92 : var_1))) + (5530990360483243044 + 327904279)))));
                            }
                        }
                    }
                    arr_27 [i_5] = (((((((-(arr_23 [i_3] [i_4] [i_3] [i_4] [i_5]))) + (((arr_8 [i_3] [i_3]) - -81))))) ? (arr_14 [i_3] [i_3]) : (((((arr_5 [i_3] [i_3]) + (arr_7 [i_3]))) + (arr_5 [i_3 - 3] [i_3 - 4])))));
                    var_34 = ((((((((((arr_0 [i_3] [i_3]) ? (arr_22 [i_3] [i_3]) : 216)) + 2147483647)) << (((-var_1 + 213) - 20))))) * ((-(14 - 1)))));
                }
            }
        }
    }
    #pragma endscop
}
