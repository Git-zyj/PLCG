/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, -205711260));
    var_18 ^= (205711260 & 74);
    var_19 = var_5;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((((((max(-205711245, 1))) ? ((((arr_2 [i_0]) ? var_7 : var_4))) : ((-(arr_0 [i_0] [i_0])))))) ? (arr_2 [i_0]) : 21);
        arr_4 [i_0] [i_0] = ((!var_15) == ((219 ? var_9 : var_3)));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] = (arr_7 [i_1 - 1]);
                        var_20 = (min(var_20, ((((arr_12 [i_0] [i_1] [i_2] [i_1 - 1] [i_3]) ? (((arr_9 [i_1 - 1] [i_1 - 2]) >> ((min(1, (arr_8 [i_0] [i_1] [i_3])))))) : var_1)))));
                    }
                }
            }
        }
        var_21 |= ((74 == ((min((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0]))))));
        arr_14 [i_0] = (((~(var_7 | var_10))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_28 [i_4] [i_5] [i_5] [i_5] [i_5] [i_6] = min((arr_17 [i_4] [i_4]), 189);
                        arr_29 [i_4] [i_6] = arr_22 [i_4] [i_6] [i_6] [i_7];
                        var_22 = (((min(1, 1)) ? var_16 : (arr_16 [i_5])));
                    }
                }
            }
        }
        arr_30 [i_4] = (~29);
        var_23 = ((0 ? (((((var_6 ? (arr_27 [i_4] [12] [i_4] [i_4]) : (arr_23 [i_4] [i_4] [1])))) ? var_16 : (arr_23 [i_4] [i_4] [i_4]))) : (arr_26 [1] [i_4] [i_4] [i_4])));
        var_24 -= (min(var_8, ((1 ? var_1 : 1))));
    }
    #pragma endscop
}
