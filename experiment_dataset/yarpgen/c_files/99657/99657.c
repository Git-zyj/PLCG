/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = ((~(((arr_1 [4] [i_0 + 2]) ? (min((arr_3 [9] [0]), -47)) : (arr_3 [i_0 + 3] [i_0 + 1])))));
                var_12 = ((((min((((!(arr_1 [i_0 + 2] [i_0])))), ((var_0 ? 71199467 : 16))))) ? ((((arr_2 [i_0 - 2] [i_0 + 3]) == (arr_2 [i_0] [i_1])))) : (arr_2 [i_0 - 1] [i_1])));
            }
        }
    }
    var_13 = ((var_10 ? (var_5 * var_0) : (((((max(var_1, var_10))) ? ((min(1, -6))) : (var_2 && var_6))))));
    var_14 = ((var_2 <= (!var_7)));

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_7 [i_2] = (((((-102 ? (((arr_4 [i_2] [i_2]) ? (arr_2 [i_2] [i_2]) : -3)) : (arr_6 [i_2] [i_2])))) ? var_5 : ((max(28403, 1182554086)))));
        var_15 = min(((min(-1, 14727))), var_0);

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_10 [i_2] [i_3] [2] = ((-(var_6 / 50837)));
            var_16 = (min(-14709, (((arr_3 [i_2] [i_3]) / var_10))));
        }
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            var_17 = (((((min(-21, 65))))) ? (~68719476735) : (((((min(50833, (arr_3 [i_2] [9])))) ? var_0 : var_9))));
            var_18 += (arr_4 [i_2] [3]);
        }
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_19 = (min(var_19, ((min(((13198 ? 31 : -113)), (((!(arr_17 [6] [i_5])))))))));
        var_20 = ((max((745248561 / var_1), (arr_16 [i_5] [i_5]))));

        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            var_21 |= ((~((((arr_19 [4]) ? var_2 : (arr_14 [i_6]))))));
            var_22 = ((max((arr_15 [i_5]), (((!(arr_14 [i_6])))))));
            var_23 = ((((max(12288, -17))) ? (min(var_8, (arr_17 [i_5] [i_6 - 2]))) : (arr_14 [i_6])));
        }
    }
    for (int i_7 = 3; i_7 < 14;i_7 += 1)
    {
        var_24 = 6;
        var_25 = (min((arr_20 [i_7] [i_7 - 1]), ((((min((arr_22 [i_7]), (arr_21 [i_7])))) | (arr_22 [i_7])))));
        var_26 = ((((536870911 ? (-1619431884 | 8) : ((-(arr_20 [i_7] [i_7]))))) * (((!((((arr_21 [i_7]) ? (arr_20 [i_7] [i_7]) : (arr_21 [i_7])))))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        arr_27 [i_8] = -1;
        var_27 = -48;
        var_28 = ((((var_2 ? var_4 : var_3))) ? (((arr_25 [i_8] [i_8]) ? var_2 : (arr_20 [i_8] [i_8]))) : (50792 / 1971507532));
        var_29 = var_8;
    }
    #pragma endscop
}
