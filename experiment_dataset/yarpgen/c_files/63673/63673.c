/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 13451;
    var_11 *= var_5;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (max((max(((((arr_1 [i_0] [i_0]) >= 11748764241040239180))), (((arr_0 [i_0]) >> (((arr_2 [i_0] [i_0]) - 3740466302)))))), ((11748764241040239173 ? 6697979832669312443 : 2101843227))));
        var_12 = var_5;
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_15 [i_1] [i_2] [i_1] = var_7;
                    arr_16 [i_1] = (arr_8 [i_3]);
                }
            }
        }
        var_13 = (max(var_13, ((((arr_9 [i_1]) ? (arr_9 [i_1]) : (arr_9 [i_1]))))));
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        var_14 = (arr_17 [i_4 + 1]);
        var_15 = (max(var_15, -1));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_16 = max((((11748764241040239173 <= 54917) ? (arr_24 [i_4] [i_4 - 1] [i_4] [1]) : (((arr_19 [i_4] [i_4 - 1] [i_4 + 1]) ? (arr_23 [i_5] [i_5] [22]) : 42325)))), (((arr_17 [i_4]) ? (arr_24 [i_4 - 1] [i_4 - 1] [1] [2]) : (arr_22 [i_6] [i_5] [i_4]))));
                    arr_25 [i_6] [i_4] [i_5] [i_6] |= (max((arr_23 [i_4 + 1] [i_4 + 1] [i_4]), (arr_23 [i_4] [i_5] [21])));
                    var_17 = (arr_23 [i_4] [i_5] [0]);
                    arr_26 [i_4] [i_5] = (((arr_24 [i_4] [i_4] [i_5] [i_6]) ? (((((162 ? (arr_24 [i_6] [i_4] [21] [i_4]) : (arr_19 [i_5] [i_5] [i_6])))))) : var_9));
                    arr_27 [i_4] [i_6] = (i_4 % 2 == 0) ? ((((((((var_1 >> (((arr_21 [i_4] [i_4] [i_4]) + 1571459960))))))) <= (arr_22 [i_4 + 1] [i_5] [i_6])))) : ((((((((var_1 >> (((((arr_21 [i_4] [i_4] [i_4]) - 1571459960)) + 390225245))))))) <= (arr_22 [i_4 + 1] [i_5] [i_6]))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                {
                    arr_32 [i_4 + 1] [i_7] [i_4] = (arr_17 [i_7]);
                    var_18 = (313741281 ? 2101843221 : 1);
                }
            }
        }
        var_19 = ((6812713903624229447 ? 11634030170085322169 : 0));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        arr_36 [i_9] = ((arr_21 [i_9] [i_9] [14]) ? 1 : 4179255752);
        var_20 = ((((((arr_22 [i_9] [i_9] [i_9]) - (arr_22 [i_9] [i_9] [i_9])))) ? (((arr_23 [i_9] [i_9] [i_9]) ? (arr_20 [4] [i_9]) : ((((arr_31 [i_9]) ? 0 : (arr_31 [i_9])))))) : ((min((!6697979832669312443), ((-15285 ? var_5 : (arr_18 [1]))))))));
        var_21 = (arr_21 [i_9] [i_9] [14]);
        arr_37 [i_9] = (!11748764241040239148);
    }
    #pragma endscop
}
