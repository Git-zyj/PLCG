/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        var_15 = (((arr_5 [i_0] [i_0]) ? var_6 : ((var_8 ? (arr_11 [i_0] [i_3] [i_2] [i_3]) : var_1))));
                        arr_12 [i_0] [i_1] [i_2 - 1] [i_3 - 2] [i_1] = (var_7 != (4294967295 > 1));
                        var_16 = ((2062358936 ? (-1 || 2232608368) : (arr_0 [i_2 + 2])));
                        arr_13 [i_0] [i_1] [i_1] [i_1] = (((arr_1 [i_1 - 1] [i_1 + 3]) ? (arr_1 [i_1 + 1] [i_1 + 3]) : var_10));
                        var_17 += 58556;
                    }
                }
            }
            var_18 *= (((var_5 ? (arr_5 [i_0] [i_1 + 1]) : var_12)));
        }
        for (int i_4 = 1; i_4 < 8;i_4 += 1) /* same iter space */
        {
            var_19 = ((-((var_9 ? (arr_2 [i_4 + 2] [i_4 + 3]) : (((arr_0 [i_0]) & (arr_14 [i_0] [i_4])))))));
            arr_16 [i_0] [i_0] [i_4] = (((((-(arr_14 [i_4 + 1] [i_4])))) ? var_5 : var_4));
        }
        var_20 ^= ((max((arr_15 [i_0] [i_0]), (arr_5 [i_0] [i_0]))));
    }
    var_21 = ((((var_8 ? var_3 : var_11)) | var_13));
    #pragma endscop
}
