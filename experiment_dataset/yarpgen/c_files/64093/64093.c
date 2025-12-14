/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = (27293 != 52);
        var_16 *= ((((190 / ((min((arr_2 [9]), var_2))))) & ((((!(arr_1 [i_0 + 2])))))));
        var_17 = (max((21 != 1383856817), (arr_2 [i_0])));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_10 [i_1] = (!12);
            var_18 = (arr_6 [4] [i_1 - 2]);
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_19 -= (arr_11 [i_3]);
            var_20 |= (((((12 ? 29674 : 156))) ? ((-(min((arr_5 [i_1] [i_3]), (arr_7 [i_3]))))) : ((((((arr_12 [i_1] [i_1]) ? var_8 : (arr_5 [i_1] [i_3])))) ? (arr_11 [i_1 + 1]) : (max((arr_6 [i_1] [i_1 - 1]), (arr_5 [i_1 + 1] [i_3])))))));

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_21 = ((~(arr_12 [i_1] [i_3])));
                    var_22 *= 8534835024711008073;
                    var_23 = (min(var_23, (((var_3 ? 29804 : (arr_12 [i_1 + 1] [i_1 - 1]))))));
                    var_24 = (min(var_24, (12978080787258390215 - 35861)));
                    arr_19 [i_1] [i_1] [i_4] = (arr_6 [i_5] [i_1 - 2]);
                }
                arr_20 [i_1] [i_1 + 2] [i_1] [i_1] = (arr_9 [i_1 + 2]);
                var_25 = (arr_15 [i_3] [i_3] [10] [i_4] [i_3]);
            }

            /* vectorizable */
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_26 = (((((9911909048998543525 ? var_11 : 254305743))) ? 2013661669 : (arr_11 [i_1 - 2])));
                    arr_26 [19] [i_1] [i_6] [i_1] = -2013661651;
                    var_27 = (max(var_27, (arr_4 [i_1] [i_1])));
                    var_28 = arr_23 [i_7] [i_6 + 1] [i_7] [i_6 + 1];
                }
                var_29 = ((arr_17 [i_3] [i_3] [i_3] [i_3]) >> (12150802911848877752 - 12150802911848877750));
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
        {
            arr_30 [i_1] [i_1] = (2553914649076115013 != 232);
            var_30 = -11050656850218383305;
        }
        var_31 = (((!(((~(arr_8 [11] [i_1])))))));
    }
    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        var_32 = (arr_16 [i_9] [i_9]);
        var_33 = (max((((((!(arr_7 [i_9])))))), (max(((17396310518981923819 ? (arr_11 [i_9]) : 9911909048998543525)), ((((arr_34 [i_9]) * (arr_15 [i_9] [i_9] [20] [i_9] [i_9]))))))));
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 19;i_10 += 1)
    {
        arr_37 [2] = ((-(arr_24 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1])));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                {
                    var_34 = (((arr_15 [i_10] [i_10] [i_12] [i_10] [i_12]) ? 926736446 : (arr_15 [i_10] [i_10 - 1] [i_10 - 2] [i_10] [i_10])));
                    arr_43 [2] [i_11] = ((((((arr_29 [i_12] [i_11]) & 5160397001906594854))) ? ((5160397001906594854 ? 13286347071802956750 : var_2)) : (!2553914649076115013)));
                }
            }
        }
    }
    var_35 = var_8;
    var_36 += var_7;
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            arr_53 [i_16] [i_13] [i_14] [i_13] [i_13] = ((((229 ? 76 : -4888011338168024228)) == -247303349));
                            arr_54 [i_13] [i_14] [i_13] = (max((((((arr_40 [i_13] [16] [i_13]) >= 11457740974292756155)) ? -2553914649076115013 : (min((arr_46 [i_14] [i_14]), (arr_9 [i_16]))))), ((min(((13286347071802956750 ? (arr_50 [i_13]) : var_12)), (arr_8 [18] [0]))))));
                        }
                    }
                }
                var_37 = max(13286347071802956761, 2952819000);
            }
        }
    }
    #pragma endscop
}
