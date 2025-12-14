/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((~var_6) ? (max(var_10, var_5)) : var_10))) ? ((((((max(var_7, 12001)))) == var_4))) : ((-((max(var_10, 53535)))))));
    var_13 = var_5;
    var_14 = ((((((((var_7 ? var_7 : var_3))) ? (34 ^ var_4) : (((max(var_1, 224))))))) ? var_11 : var_11));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_0] = ((-(arr_3 [i_0] [i_0] [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_9 [i_3] [i_1] [i_1] [i_0] = (arr_5 [i_0] [i_0] [i_1]);
                        var_15 = (max(var_15, (((var_10 ? var_0 : (arr_5 [i_3] [i_1 + 2] [i_3]))))));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_16 = (((arr_8 [i_0] [i_1] [i_2] [i_3] [i_3]) | (arr_11 [i_0] [i_0] [i_2] [i_3] [20])));
                            var_17 = (53552 != 53537);
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {

                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    var_18 |= var_1;
                    var_19 = (arr_16 [i_1 + 3] [i_1 + 1]);
                }
                var_20 = (((arr_12 [13] [4] [4] [i_5]) ? (arr_6 [i_1] [i_0] [i_0] [i_0]) : (((arr_5 [i_0] [i_1] [i_1]) ? var_6 : var_3))));
            }
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                arr_21 [i_1] [i_7] [i_1] [6] = ((15567832636931026978 ? 645663131 : (arr_6 [i_1] [i_0] [i_1] [i_7])));
                arr_22 [i_1] = ((-20726 ? (arr_16 [i_1 + 1] [i_7 - 1]) : (arr_3 [i_1] [i_1 + 1] [i_1])));
                var_21 = 19426;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_22 |= -117;
                            var_23 = ((-112 ? -15537 : -9050879005039022811));
                        }
                    }
                }
            }
            var_24 |= ((arr_25 [i_1 + 4] [18] [i_1]) < (arr_12 [i_0] [i_1 + 4] [i_1 + 4] [i_1 + 2]));
        }
        var_25 += (((max(147, (arr_25 [i_0] [4] [i_0])))));
        var_26 = (min(var_26, var_5));
        var_27 = (max((((max(var_0, var_8)) % (((max(var_7, var_1)))))), (((!((max(4208370567, -8489))))))));
    }
    #pragma endscop
}
