/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_7;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] [i_0] &= 29246;
            arr_7 [3] [i_1] [i_1] = ((((min(var_15, var_14))) ? -14 : (min((max((arr_1 [i_0] [i_1]), (arr_3 [i_1]))), var_1))));

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_20 |= (((min((!var_5), var_0)) ? ((((arr_10 [i_1 + 1] [i_1 - 1] [i_1 + 1]) == -14))) : (arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])));
                var_21 = ((((min(((-17 ? 18446744073709551591 : var_5)), var_18))) ? (min((~16602754467662180704), var_4)) : var_12));
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_22 |= (min((arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1]), (max(((var_7 ? var_0 : var_11)), (arr_10 [i_4] [i_3] [i_1])))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_23 = (max(var_23, (((var_6 ? ((-(arr_0 [11]))) : (arr_12 [i_0] [i_1 + 1] [i_4]))))));
                            var_24 = (((arr_0 [i_1 + 1]) ? var_0 : (arr_0 [i_1 + 1])));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_25 &= 4599321138735043733;
                            arr_21 [i_0] [i_0] [i_0] [3] [i_0] [i_3] [i_0] = ((((((arr_19 [i_1] [i_1 + 1] [i_3] [i_3] [i_1]) ? (arr_19 [i_0] [i_1 + 1] [i_3] [i_4] [i_6]) : (arr_19 [i_0] [i_1 + 1] [i_6] [i_0] [i_3])))) ? (arr_20 [i_6] [i_4] [13]) : var_2));
                            var_26 = var_16;
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_27 = (arr_11 [i_0] [i_0]);
                            var_28 = (((arr_0 [i_0]) >> -var_13));
                            var_29 = (min(var_29, (((((min(var_17, var_9))) == (max((max(0, var_10)), (6895762157017088277 < 1146518054073079094))))))));
                        }
                        var_30 = var_3;
                    }
                }
            }
        }
        var_31 ^= (min(var_6, var_18));
        var_32 = ((var_13 ? ((((!var_15) ? ((max(var_18, var_14))) : (arr_12 [i_0] [0] [i_0])))) : ((max(var_2, (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        var_33 ^= (max((((var_3 % var_15) ? ((min((arr_0 [i_0]), (arr_0 [i_0])))) : ((122 ? var_5 : (arr_3 [i_0]))))), var_12));
    }
    var_34 = (min(var_34, ((max((min(((min(var_10, var_11))), var_15)), ((max(var_16, (max(var_4, var_0))))))))));
    #pragma endscop
}
