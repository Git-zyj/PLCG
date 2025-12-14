/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 = ((((!(arr_2 [i_2 + 1])))));
                    var_12 = ((max(-1375936249010851460, 1)));

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        var_13 = (max(var_13, (((max(var_10, -18))))));
                        var_14 = (((arr_7 [i_2 + 3] [i_3 + 1] [i_3 + 1]) % (arr_7 [i_2 + 2] [i_3 + 1] [i_3 + 1])));
                    }

                    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_15 += (arr_7 [i_2 - 3] [i_2 - 3] [i_2 + 4]);
                        var_16 = ((-((-(arr_8 [i_0] [i_1] [i_2 + 4] [i_4])))));
                        var_17 = (max(((((arr_1 [i_1] [i_4]) && ((((arr_0 [i_0]) % var_7)))))), (((arr_11 [i_0] [16] [i_1] [i_1] [8] [i_4]) ? ((1 ? 121 : 33256)) : 47))));
                        var_18 = (((-7 < (arr_7 [i_2 - 3] [i_2 - 2] [i_2 + 1]))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_19 *= ((~(arr_8 [i_2] [i_2 - 1] [i_2 - 4] [i_2 - 3])));
                            arr_20 [i_6] [i_1] &= var_7;
                        }

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_20 = (min(var_20, ((((arr_10 [6] [9] [i_2] [i_5] [i_0] [i_2 - 1]) ? 929821722 : var_10)))));
                            var_21 = (((-1410 < var_8) ? ((56 ? 254 : -752306582569311971)) : var_4));
                            arr_23 [i_7] [i_1] [i_2] [i_1] [i_0] = 187;
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(390207200922487831, 1));
    var_23 &= (min((min(var_5, -var_5)), var_7));
    var_24 = (min(var_24, ((max(var_6, var_2)))));
    var_25 = ((((max((1073741696 * var_8), var_9))) ? var_4 : (min(((var_4 ? var_8 : var_1)), var_7))));
    #pragma endscop
}
