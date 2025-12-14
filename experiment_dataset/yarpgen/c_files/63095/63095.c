/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_15 *= (-127 - 1);
        arr_4 [i_0 - 1] [12] = ((((((var_3 - var_14) && (((var_5 * (arr_0 [12] [i_0]))))))) >> (var_14 + 110)));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = arr_1 [i_1];
        var_16 = -var_12;

        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_12 [i_1] [i_2] [i_2] = (min(((127 >> (140733193388032 - 140733193388027))), ((+((var_6 ? (arr_2 [i_1] [i_2]) : (arr_5 [i_1] [i_1])))))));
            var_17 |= (((min(((-(arr_3 [8] [9]))), -var_7)) + (((min(var_10, var_9))))));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {

                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    arr_23 [i_1] [i_4] [i_4] [i_1 + 1] [i_1] = arr_21 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_5 + 1];
                    arr_24 [13] [i_1] [i_4] [i_1 - 1] = var_1;
                }
                var_18 -= (arr_5 [i_1] [i_1]);
                var_19 -= -37;
            }
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_20 = (min(var_20, -107));
                var_21 -= ((-(arr_3 [i_1 - 1] [i_3])));
            }
            arr_28 [1] [i_1] [i_3] = (((arr_1 [i_1]) ? ((((var_5 > (arr_17 [i_1] [i_1] [i_1]))))) : ((-((-(arr_11 [i_1] [i_3] [i_1])))))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            arr_32 [i_1] [i_7] = -140733193388032;
            arr_33 [i_1] = ((-((((arr_30 [i_1] [i_1] [i_1 - 1]) || (arr_9 [i_1] [i_1]))))));
        }
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    {
                        arr_42 [4] [i_8] [i_1] [i_8] = ((25 >> (-6806078192915571719 + 6806078192915571724)));
                        arr_43 [i_10] [i_9] [i_10] &= var_12;
                    }
                }
            }
            var_22 -= var_2;
        }
    }
    var_23 = ((-((~(~var_4)))));
    #pragma endscop
}
