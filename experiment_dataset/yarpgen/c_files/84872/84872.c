/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((arr_2 [i_0] [10]) ? var_9 : (min(166, var_6))))) ? (((-1217582027 == (var_10 | -1217582027)))) : ((-(arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = ((((arr_10 [i_0] [i_0] [i_0] [i_3] [i_4]) < ((((1217582034 <= (arr_11 [i_1] [i_1] [i_1] [i_3] [i_1]))))))) ? (arr_12 [i_4] [i_3] [i_2] [i_1] [i_4]) : (min(10996310954214310277, (arr_10 [i_4 + 2] [i_1] [i_3] [i_3] [4]))));
                                var_18 = (((min((arr_9 [11] [i_4 - 2]), (arr_9 [i_0] [i_4 + 1]))) < ((-((7255010298490781658 ? -32754 : 1073741824))))));
                                arr_14 [i_0] [i_1] [i_3] [i_4] [i_4 + 3] [i_2] [i_4] = (min(var_1, ((max(((max(0, 48))), 957509031)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_19 = (min(var_19, 255));
                                arr_23 [i_6] [i_2] [i_6] [i_6] = var_12;
                            }
                        }
                    }
                    arr_24 [0] [i_0] = (((-(((arr_9 [i_0] [1]) ? (arr_17 [i_0]) : (arr_7 [3] [i_1] [i_0] [3]))))) * (arr_1 [i_0]));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_31 [i_7] [i_7] [i_2] [i_7] [i_8] [i_7] = (((arr_5 [i_0]) - (min(-0, var_1))));
                                var_20 = (((-(max(7255010298490781664, -172706885)))) < 14114995010409063858);
                                var_21 -= (((max((min(-2208713871486642792, 0)), (min(7255010298490781682, var_11)))) == (((~(~var_6))))));
                            }
                        }
                    }
                    arr_32 [4] = ((((((arr_21 [i_0] [i_0] [i_1] [10] [i_2]) ? ((1048320 ? var_0 : (arr_6 [1] [1] [i_2]))) : (arr_0 [i_0])))) < (min(((min((-2147483647 - 1), 978498721))), (arr_8 [i_0] [0] [i_1] [i_2])))));
                }
            }
        }
        arr_33 [i_0] [i_0] = ((-1217582027 ? (((((var_15 ? (arr_16 [i_0] [i_0] [13]) : 15)) - (((arr_6 [i_0] [i_0] [14]) - (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : -6737636681947699850));
    }
    var_22 = var_12;
    #pragma endscop
}
