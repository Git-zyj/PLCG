/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_9;
    var_17 = (((25197 ? (((3668411712143200903 ? 40719 : 61989))) : 9743642549813810640)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = ((((((((var_3 >> (var_6 + 3536473739002983862))))) + 2147483647)) >> ((((arr_3 [i_0 + 3] [i_0 + 3] [i_0 - 1]) || var_3)))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = (((~(arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_2 + 4] [i_3] [15]))));
                                var_20 = (((~(arr_14 [i_3] [i_0] [i_0]))));
                                var_21 |= arr_4 [i_2] [i_1];
                            }
                        }
                    }
                }
                var_22 = (max(var_22, ((((((max((arr_4 [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0 - 1]))))) == (arr_9 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
            }
        }
    }

    for (int i_5 = 3; i_5 < 17;i_5 += 1)
    {
        var_23 = ((!(arr_10 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 1])));
        var_24 = (min(var_24, ((((((+((min((arr_14 [12] [12] [12]), (arr_2 [i_5] [i_5]))))))) ? var_10 : (((((36445324525059888 ? 18973 : var_1))) ? (min((arr_7 [1] [1] [14]), var_12)) : ((((arr_10 [12] [i_5] [i_5] [9]) ? (arr_8 [16]) : (arr_12 [i_5] [i_5 - 1] [i_5] [12] [i_5] [i_5])))))))))));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_6] [i_7] = (((((!(arr_13 [i_5 - 3] [0] [1] [0] [i_5 - 3])))) / ((-(max((arr_9 [i_5] [i_5] [i_5] [i_6] [i_7] [i_7]), 471816535))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_25 = (min(((((arr_17 [i_9 - 1] [i_6 + 1] [i_5 - 1]) ? var_4 : (arr_4 [i_7 - 1] [i_6 - 3])))), var_0));
                                var_26 = (43937 + 78);
                                var_27 = (((((arr_13 [i_5] [1] [5] [i_9] [i_5 + 1]) > ((-3 / (arr_16 [i_5] [i_5]))))) ? var_13 : (!-var_15)));
                            }
                        }
                    }
                    var_28 = (((((7207618007842166336 | (arr_6 [16] [i_6] [16] [i_5])))) & ((min((min(var_4, (arr_10 [1] [i_5 - 2] [i_5] [i_5 - 2]))), (arr_24 [i_7 + 2] [i_5] [i_5] [i_5]))))));
                }
            }
        }
    }
    #pragma endscop
}
