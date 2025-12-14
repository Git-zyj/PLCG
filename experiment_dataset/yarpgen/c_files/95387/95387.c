/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [2] [2] |= (arr_2 [i_0]);
        var_17 |= 6310261370937243175;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_18 = ((((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_4 [i_1]))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_19 = (((arr_6 [i_1] [i_1] [i_1]) < (((3750800317 << (-10 + 31))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_16 [i_1] [16] [i_1] [i_4] [i_5] = (!-0);
                            var_20 = (arr_14 [i_5] [i_4] [i_1] [i_1] [i_2] [i_1]);
                            arr_17 [i_1] [i_2] [i_2] [i_2] [i_2] = (max((arr_10 [i_3] [i_1] [i_3]), ((((arr_2 [i_2]) && ((((arr_1 [9]) << 0))))))));
                            arr_18 [i_1] [i_2] [i_3] [i_4] = ((1746849552279437989 ? -25206 : 1341017675));
                            arr_19 [i_3] [i_1] [i_3] [i_3] = (min(((~((max(-9, 29686))))), (arr_8 [i_1] [i_2] [i_1])));
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_21 = (arr_21 [i_6]);
        var_22 = ((~(((arr_20 [i_6] [i_6]) / (arr_20 [i_6] [i_6])))));
        var_23 |= 3513606076646508018;
        arr_22 [i_6] = 199;
        arr_23 [i_6] [i_6] = 29686;
    }
    var_24 = (max(var_24, (((!(((var_3 ? -4294967295 : -29686))))))));
    var_25 = (((((!(var_13 ^ 86)))) < var_7));
    var_26 = -var_11;
    #pragma endscop
}
