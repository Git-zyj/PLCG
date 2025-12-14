/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] |= (!826877671);

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            var_19 -= 5328;
                            var_20 = (max(var_20, ((max((arr_9 [16] [i_2 - 2] [i_3] [16]), 657828676)))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_21 = 1;
                            var_22 = (min((min((min((arr_14 [i_2] [i_2 + 2] [i_2] [6] [i_2] [i_2] [i_2 + 2]), var_15)), var_16)), (((!((((arr_14 [5] [i_5] [5] [i_5] [8] [4] [i_5]) ? 1411628147 : var_10))))))));
                            arr_15 [i_1 - 1] [i_1 + 1] [i_1 + 1] = ((((((arr_1 [i_1 - 1] [i_5]) <= 153))) < (min((arr_1 [i_5] [i_3]), 1411628125))));
                            var_23 = (max(var_23, ((((((~(arr_14 [i_0 + 1] [i_1 + 1] [i_3] [1] [i_3] [i_5] [i_1 - 1])))) ? (~657828686) : 1721538888)))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_0 - 1] [i_6] [8] = (0 ? var_4 : (arr_10 [i_2 + 2] [i_0 - 1]));
                            var_24 = 9223372036854775808;
                        }
                        var_25 = ((max((arr_7 [i_0] [i_1] [i_3]), var_7)));
                        var_26 -= ((((arr_1 [i_0] [i_0 - 1]) << ((-1507903960 ? var_17 : var_5)))));
                    }
                    var_27 *= var_3;
                    var_28 -= max(((~((((arr_0 [i_1 + 1] [i_2]) <= 15360))))), (((!(arr_7 [i_0] [i_2 - 3] [i_2])))));
                }
            }
        }
    }

    for (int i_7 = 2; i_7 < 11;i_7 += 1)
    {
        var_29 = (max(var_29, var_5));
        arr_25 [i_7] = ((~((((arr_11 [i_7] [i_7]) != 15377)))));
        arr_26 [i_7 - 1] = (min(((max((arr_24 [i_7] [i_7 + 1]), (arr_5 [i_7 + 1] [i_7] [i_7 - 2] [i_7 - 2])))), (min((arr_2 [i_7 - 2]), var_14))));
        var_30 ^= (min(((((min(28149, 1))) ? (arr_6 [i_7 - 1] [i_7 - 1]) : (arr_17 [i_7 - 2] [i_7] [i_7 + 1] [1]))), (((arr_1 [i_7] [i_7]) ? (~-94) : -2095103966))));
        arr_27 [i_7] &= (!var_14);
    }
    var_31 = (max(var_31, ((max(var_8, (!7286433720525418363))))));
    #pragma endscop
}
