/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [4] [4] |= -486503537;
        arr_3 [i_0] = ((~(((arr_1 [i_0 - 2]) ? (arr_1 [i_0 + 2]) : (arr_0 [i_0])))));
        arr_4 [i_0] = (arr_0 [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_17 -= (9596 ? ((((~(arr_12 [i_1] [i_1]))) * ((((arr_0 [24]) ? var_8 : (arr_15 [6] [i_3] [i_3])))))) : (((13105 ? 9596 : 52434))));
                                var_18 = (max(var_18, (arr_12 [i_1] [i_1])));
                            }
                        }
                    }
                    var_19 = (min(var_19, (min(-486503540, (((-32767 - 1) ? (((arr_12 [i_1] [i_1]) ? 7592011056457590874 : (arr_15 [10] [10] [i_3]))) : var_11))))));
                }
                arr_16 [i_2] [i_2] [i_1] = ((-1 * (486503536 / -486503537)));
                arr_17 [i_1] = ((-(arr_0 [12])));
            }
        }
    }
    var_20 = ((((-564780551 * 1784970106) ? (14 * var_0) : (2069692351 / 9596))));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    arr_25 [i_6] = ((((var_8 * (((arr_23 [i_6] [i_7] [i_6] [i_7]) * var_12)))) * (((((847051074 ? 42981 : (arr_21 [i_6] [i_6] [i_8])))) * (min((arr_20 [i_6] [i_6]), (arr_20 [i_8] [i_6])))))));
                    arr_26 [i_6] [i_6] [i_6] [i_6] = ((-((2069692351 ? (max(486503549, -486503549)) : 22548))));
                    var_21 = -1500576394;

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        arr_30 [i_6] [i_6] [i_6] [i_6] = ((((((((108 ? var_10 : (arr_18 [i_6] [i_7])))) ? (arr_23 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_6]) : ((((arr_19 [i_8]) ? -486503540 : 32767)))))) ? (arr_29 [i_6] [i_7] [i_6] [i_6] [i_6] [i_7]) : (((arr_18 [i_6] [i_6]) * (((var_10 ? (arr_28 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) : var_7)))))));

                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            arr_33 [i_10] = (((max((arr_21 [i_6] [i_7] [i_7]), (arr_27 [i_6] [i_8] [i_8])))) ? (~1681776309) : (arr_19 [i_7 + 2]));
                            arr_34 [i_10] [i_10] = (((~(((arr_20 [i_7] [i_7]) * (arr_23 [i_10] [i_9] [i_8] [i_7]))))));
                            var_22 = -1345395554469840714;
                            var_23 = ((min((22584 / 486503540), (arr_24 [i_6] [i_6] [i_6] [i_6]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
