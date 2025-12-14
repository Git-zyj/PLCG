/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = (max((((3648546404 / (((var_1 ? var_6 : 1)))))), (min(8884094549963548406, (-32767 - 1)))));
    var_18 = ((0 ? 6 : 1));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_19 = (min(var_19, var_9));
        var_20 = (((arr_1 [i_0 - 3] [i_0 - 3]) ? var_3 : (arr_0 [i_0] [i_0])));
        arr_2 [i_0] = (((-32767 - 1) != 1));
    }

    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            var_21 = (max(var_21, (((((((((arr_7 [i_1] [i_2] [i_2]) ^ 23)) << (((arr_7 [i_1] [i_1] [i_1]) ? 1 : 152))))) | ((((((arr_3 [i_1]) ? (arr_4 [i_1]) : -2072102871))) ? ((max(var_1, var_11))) : (max(-5322464517499242032, 0)))))))));
            var_22 = var_6;
        }
        var_23 = (arr_7 [i_1] [i_1] [i_1]);
        arr_8 [i_1] = (((arr_5 [i_1] [i_1] [i_1]) || ((min(((var_0 ? (arr_5 [i_1] [i_1] [i_1]) : var_3)), (max((arr_6 [i_1] [i_1] [i_1]), -16083)))))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_11 [i_3] = ((-64 ? -76 : var_2));
            arr_12 [i_3] = (!var_8);
            var_24 = (max(var_24, (((~(((arr_6 [i_3] [i_1] [i_1]) * ((((arr_5 [i_1] [i_1] [i_1]) ? 104 : var_0))))))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_15 [2] [i_4] [i_1] = (((arr_5 [i_1] [i_1] [i_4]) | ((var_11 ? 122670128 : var_12))));
            arr_16 [i_4] [i_1] = (((arr_7 [i_1] [i_4] [i_4]) ? 21720 : (arr_3 [i_1])));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_19 [i_1] = (((arr_9 [i_5] [i_1] [i_1]) % ((((1313031079 != (arr_3 [i_1])))))));
            var_25 = ((((((max((arr_5 [i_1] [i_1] [i_1]), (arr_17 [i_5] [i_5] [i_5])))) ? (((127 - (-127 - 1)))) : ((534199907 ? var_11 : (arr_6 [i_5] [i_1] [i_1]))))) / (arr_3 [i_5])));
            arr_20 [0] = (arr_13 [i_1] [i_5] [i_5]);
        }

        for (int i_6 = 2; i_6 < 23;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 23;i_9 += 1)
                    {
                        {
                            arr_31 [i_7] [i_6 + 2] [i_9] [i_7] [i_9] [17] [i_6] = (arr_24 [i_8] [i_6 - 2] [i_7]);
                            var_26 = -152;
                            var_27 = ((0 - (((arr_25 [i_1] [i_7]) ? ((((arr_26 [i_7] [i_6] [i_7]) - 1))) : var_15))));
                        }
                    }
                }
            }
            arr_32 [i_1] [i_1] [i_6] = ((((max(-var_1, 2072102870))) ? var_13 : (arr_6 [i_1] [i_6] [i_6 + 1])));
        }
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
    {
        arr_36 [i_10] [12] = ((((min((((-32767 - 1) ? (arr_5 [0] [0] [i_10]) : 1)), (((arr_3 [i_10]) ? (arr_29 [i_10] [i_10] [i_10] [i_10]) : (arr_17 [i_10] [i_10] [i_10])))))) ? ((((arr_13 [i_10] [2] [i_10]) || (((0 ^ (arr_17 [i_10] [1] [i_10]))))))) : (((arr_6 [i_10] [i_10] [i_10]) ? (-7 == -7) : var_4))));
        var_28 = (((14 - -4) || (arr_22 [i_10])));
        var_29 = ((((((arr_17 [i_10] [i_10] [i_10]) ? (arr_29 [i_10] [i_10] [i_10] [i_10]) : (arr_29 [i_10] [i_10] [i_10] [i_10])))) ? ((max((arr_17 [i_10] [i_10] [i_10]), var_1))) : (arr_28 [i_10] [i_10] [i_10] [i_10])));
        var_30 = var_12;
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
    {
        var_31 *= min((((!(arr_22 [i_11])))), (min((arr_24 [i_11] [i_11] [i_11]), ((min(6189214203813500585, var_10))))));
        var_32 = (max((((((1 << (46 - 33))) < (-127 - 1)))), (arr_23 [i_11] [i_11] [20])));
    }
    #pragma endscop
}
