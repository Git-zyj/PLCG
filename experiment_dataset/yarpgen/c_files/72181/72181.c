/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_8 [i_0] [2] [i_0] [i_0] = 124;
                var_10 = (((((arr_0 [i_2]) + 9223372036854775807)) << (3562742896004189382 - 3562742896004189382)));
            }
            arr_9 [i_0] = (11 == var_0);
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_13 [i_0] = (((((var_4 + (arr_10 [i_0] [i_0])))) ? (arr_3 [i_0] [i_3]) : (arr_2 [i_0])));
            arr_14 [i_0] = ((-(arr_10 [i_0] [i_0])));
            arr_15 [i_0] [i_3] = 24207;
            var_11 = var_4;
        }
        var_12 = var_8;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_13 = var_8;
        arr_20 [i_4] = (30720 == 15255088711587068531);
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_14 = (((((((7 ? 65535 : -5062680559254459079))) ? -124 : -13417)) / ((~(max(var_4, (arr_21 [i_5] [11])))))));
        var_15 = var_8;
    }
    var_16 = var_9;
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {
                    arr_29 [i_6] = var_1;
                    var_17 = ((((max((min(var_2, 9223372036854775807)), ((((arr_17 [i_6]) ? (arr_18 [i_6]) : (arr_25 [i_6 + 3]))))))) / (min((min((arr_26 [i_8] [i_7] [i_8]), (arr_17 [i_8]))), ((min(163, var_7)))))));
                    var_18 = var_6;
                    arr_30 [i_6 + 4] [i_6 + 4] [i_6] [i_8] = (((arr_17 [i_6 + 3]) | var_9));
                    var_19 = (min((arr_22 [i_6 - 1]), (max((!var_9), ((-(arr_22 [i_8])))))));
                }
            }
        }
    }
    var_20 = (!var_8);
    #pragma endscop
}
