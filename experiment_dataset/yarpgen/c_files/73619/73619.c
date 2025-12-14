/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            arr_4 [i_1] [i_1] [i_0] = (1114301146 >> (127 - 105));
            var_21 = (min((arr_0 [i_0] [i_1]), ((min(-470548169, (min(var_6, 470548168)))))));
            var_22 = ((((min((arr_3 [i_0]), (((arr_0 [i_0] [i_0]) ? (arr_0 [i_1 - 1] [i_0]) : (arr_1 [i_0])))))) ? (max((arr_0 [i_1 - 1] [i_1 - 1]), (!var_1))) : var_8));
        }
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_23 = var_16;
            var_24 += min(((((((var_8 ? var_16 : (arr_5 [i_0] [i_0])))) ? (((arr_3 [i_0]) ? (arr_6 [i_0]) : (arr_5 [i_0] [i_0]))) : (((arr_1 [i_0]) * (arr_7 [i_0] [i_0] [i_0])))))), (((arr_0 [i_0] [i_0]) ? (((max(var_15, 255)))) : (min(var_18, (arr_0 [i_0] [i_0]))))));
            arr_8 [i_0] = (arr_7 [i_0] [i_0] [i_2]);
            var_25 = (470548168 ^ (((arr_1 [i_0]) ? (var_10 | var_10) : (min((arr_2 [i_0]), var_9)))));
        }
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_17 [i_0] [i_3] [i_4] [i_0] = 470548153;
                        arr_18 [i_0] = (arr_15 [i_0] [i_3] [i_3] [i_3] [i_5]);
                        var_26 = (~(((!(arr_3 [i_3 - 1])))));
                        var_27 = (arr_2 [i_3 - 2]);
                    }
                }
            }
            arr_19 [i_0] [i_3] [i_0] = (arr_10 [i_3]);
        }
        for (int i_6 = 4; i_6 < 17;i_6 += 1)
        {
            var_28 = (((arr_22 [i_6] [i_0]) ? (1 - var_5) : var_7));
            var_29 = ((min((max(var_18, (arr_13 [i_0] [i_0]))), (arr_6 [i_0]))));
            var_30 = ((667576894 <= (max((min(var_1, (arr_7 [i_0] [i_0] [i_0]))), ((min(121, (arr_13 [i_0] [i_6]))))))));
        }
        var_31 = 1;
        var_32 = (((!(arr_13 [i_0] [i_0]))));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    arr_31 [i_7] [i_8] [i_9] = 1;
                    var_33 = 113;
                    var_34 = arr_13 [i_7] [i_8];
                    arr_32 [i_9] [i_7] [i_7] [i_7] = 255;
                    var_35 = (min(var_35, ((((((var_17 ? ((13 >> (243 - 227))) : (min((arr_1 [i_7]), 0))))) ? 774096974 : (arr_24 [i_7] [i_8]))))));
                }
            }
        }
        arr_33 [i_7] = 77;
        arr_34 [i_7] = (arr_2 [i_7]);
        arr_35 [i_7] [i_7] = (min(-1, -470548172));
        var_36 -= (arr_23 [i_7]);
    }
    var_37 = var_17;
    #pragma endscop
}
