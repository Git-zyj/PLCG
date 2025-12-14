/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_0 - 2] [i_0] |= ((((min(((((arr_0 [i_1]) && 17722))), (arr_0 [5])))) ? 0 : (!4294967290)));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 3; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            var_12 |= var_4;
                            var_13 = (max(var_13, (((((~var_9) ? -138 : (min((arr_3 [1] [i_1] [i_0]), var_1))))))));
                            var_14 |= var_4;
                            var_15 |= 5;
                            var_16 |= (max((((0 && (arr_11 [i_4] [i_4 + 1] [i_2 - 1] [i_2 - 1])))), ((-(max(var_4, 1))))));
                        }
                        for (int i_5 = 3; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_1] [i_2 + 2] [i_3] [i_5] |= 8841;
                            var_17 = (min(var_17, 58584));
                        }
                        for (int i_6 = 3; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_6 + 3] [i_6 + 3] [i_6] [i_6 + 3] [i_6 + 3] = (!138);
                            arr_23 [i_0] [i_1] [i_2 + 2] [i_3] [i_6] [i_6] = ((66 ? 1 : ((~(arr_14 [i_6 + 1] [i_6] [i_6] [i_6 + 3] [i_3] [i_1] [i_1])))));
                            var_18 = ((~((((-(arr_18 [i_0] [i_1] [i_0] [1] [i_1]))) ^ var_2))));
                            arr_24 [i_2 + 1] [i_3] [i_2 - 1] [i_2 + 1] [2] [i_0] = (((!-392565550125916035) - (max(-1, 1))));
                        }
                        arr_25 [i_0 - 3] [i_0 - 3] [i_2] [i_0 - 3] = (+(((arr_7 [i_0 - 3] [i_0] [i_2 - 1]) ? 1 : var_6)));
                        arr_26 [i_2] [i_1] [i_0] |= (arr_20 [i_0 + 2] [i_1] [i_2] [i_0 + 2] [i_0]);
                        arr_27 [i_0] = ((!(((((max(1, 69))) | -97)))));
                        arr_28 [i_2] [i_1] |= 1757919382;
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            var_19 = (max(var_19, (min((min(var_9, ((var_3 ? var_11 : 382489937)))), (arr_11 [i_1] [i_2 + 1] [i_1] [i_1])))));
                            var_20 = ((((arr_20 [i_2] [i_2] [i_2 + 3] [i_2] [i_2]) < (arr_0 [i_0 - 1]))));
                            var_21 = (min(((((1 ? 2358470036 : 23)))), (arr_12 [i_0 - 2] [i_8] [i_0] [i_2 - 1] [i_8] [i_7])));
                            var_22 = (((arr_14 [i_2 + 3] [i_2 - 1] [i_2 + 3] [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 - 1]) ? (((arr_14 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 + 3] [i_2 - 1] [i_2 + 1] [i_2 + 3]) ^ (arr_14 [i_2 + 1] [i_2 + 3] [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1]))) : ((~(arr_14 [i_2 + 3] [i_2 + 1] [i_2] [i_2] [i_2] [i_2 + 1] [i_2 - 1])))));
                        }
                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            var_23 = (min(1, -1750366353));
                            arr_36 [i_0 + 1] [6] [6] [i_7] [i_9 + 1] = (min((min(3611665937, 0)), (((!(arr_0 [i_9 + 2]))))));
                            var_24 = ((min(((var_11 ? 6319790470207246003 : var_6), (arr_29 [i_0 - 1] [i_0 - 2] [i_0] [i_0])))));
                        }
                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 15;i_10 += 1)
                        {
                            arr_39 [i_2 + 3] [i_2] [i_2 + 3] [10] [i_2 + 1] [i_2 + 2] |= (((arr_29 [i_2 + 1] [i_1] [i_10 - 1] [i_0 - 3]) - ((15360 ? var_2 : -1757919383))));
                            var_25 |= (((arr_37 [i_0 + 3]) - (arr_37 [i_0 - 2])));
                        }
                        var_26 = (min(var_26, (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                    }
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        var_27 = (arr_16 [i_1] [i_0 - 2] [i_2] [i_2] [i_2 - 1]);
                        var_28 |= (max((min(var_6, 1)), (((1 > (((arr_31 [i_0 + 3] [i_0 + 3] [5] [i_0] [i_0 - 2]) * 1)))))));
                    }
                    arr_44 [1] [i_2] = (((arr_8 [i_2 + 3] [i_0 - 2] [i_0 + 3]) ? (((arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2]) - -1)) : var_6));
                    arr_45 [i_0] [i_0] [i_2 + 3] = (min((((-(arr_1 [i_0 + 3])))), (((arr_32 [i_2 + 2] [i_2 + 2] [i_1] [i_0 + 3]) ? (arr_18 [i_0] [i_0 - 3] [i_0 + 1] [i_2 + 2] [14]) : 248))));
                    arr_46 [i_0 + 1] [i_1] [i_2] |= (((((-2 * (((50175 / (arr_32 [i_0] [i_1] [i_1] [i_2]))))))) ? 1 : 8));
                }
            }
        }
    }
    var_29 = (((((((((min((-32767 - 1), 247)))) != 1416349322)))) < (min(var_11, var_4))));
    #pragma endscop
}
