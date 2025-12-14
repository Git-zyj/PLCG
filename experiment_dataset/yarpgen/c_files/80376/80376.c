/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 |= var_1;
    var_13 = (((min(var_7, -var_9)) == var_1));

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] |= (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] |= (-(((((0 ^ (arr_1 [2])))) + (arr_0 [i_2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] [i_1] [i_2] [i_3] [i_1] = (!1165968601318781759);
                                var_14 += ((((858500043769717375 << (65533 - 65532))) == 65533));
                                var_15 ^= ((((max((arr_4 [i_2 + 3]), 858500043769717396))) ? 858500043769717396 : (((((~(arr_15 [i_3] [i_1] [8])))) ? ((294530445676356538 | (arr_6 [i_3] [i_1] [i_3]))) : (((arr_10 [i_0] [5] [5] [3] [3] [3]) ? (arr_6 [i_0] [i_1] [i_2]) : (arr_11 [i_2 + 3] [i_3] [i_3] [i_3])))))));
                                arr_17 [i_0] [i_4] [i_2] [1] [i_4] [i_4] = (+(((arr_4 [i_4 - 3]) ? (arr_0 [i_3]) : ((-4157662457996931695 ? 858500043769717396 : (arr_10 [1] [i_4] [i_3] [i_0] [i_1] [i_0]))))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_0 + 3] [5] [i_2] = (min((!0), (max((arr_2 [6]), (arr_2 [0])))));
                    arr_19 [i_2] = (min(((max((arr_14 [i_0 - 2] [i_0 - 1] [i_0 + 2] [i_0 + 3] [i_2 + 3] [i_2 - 1]), 244))), (max((arr_14 [i_0 + 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_2 + 2] [i_2 + 1]), 6893375474317937365))));
                    arr_20 [i_2] [i_0] = 41352;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_16 ^= ((1 & (((arr_23 [i_0] [i_0 - 1] [i_0] [i_0]) | (arr_23 [i_6] [i_6] [i_6] [i_6])))));
                    var_17 ^= ((((((arr_15 [i_0] [i_0] [i_0]) ? (arr_25 [i_0] [i_5] [i_6]) : 0))) ? (52 / -1395754573051200393) : -2));
                }
            }
        }
    }
    for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
    {
        var_18 ^= (min(1165968601318781759, ((((arr_22 [i_7]) ? 0 : (((arr_23 [i_7] [i_7] [i_7] [i_7]) | 157)))))));
        arr_28 [i_7] = (((arr_1 [i_7]) == (max((arr_7 [i_7 + 1]), (((arr_14 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) + 0))))));
    }
    #pragma endscop
}
