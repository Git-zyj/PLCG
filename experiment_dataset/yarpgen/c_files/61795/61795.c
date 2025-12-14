/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (min(var_4, -var_0))));
    var_13 = (max(var_13, var_3));
    var_14 = 250;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
        arr_5 [2] [8] = (arr_3 [9] [i_0]);
        var_15 = (min(var_15, ((min(var_7, (((((min((arr_0 [i_0]), var_10))) ? (arr_3 [i_0] [i_0]) : var_5))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_16 = (((arr_0 [i_1 - 1]) ? (((((arr_1 [21]) || var_4)))) : (arr_1 [i_1])));
        var_17 = (arr_0 [i_1 - 1]);

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            arr_11 [i_2] = arr_3 [i_2 + 3] [i_2 + 1];
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_18 = ((((((arr_3 [i_4] [i_2]) ? 26 : var_7))) ? (((arr_15 [i_2]) ^ (arr_7 [i_1] [i_2]))) : (((!(arr_0 [i_2 + 1]))))));
                        var_19 = (arr_12 [i_1]);
                        var_20 = (var_1 || var_7);
                        var_21 = (min(var_21, (((!(!1))))));
                        arr_16 [6] [6] [6] [i_3] [i_2] [6] = ((var_3 ? 1 : -15));
                    }
                }
            }
            var_22 = ((arr_13 [i_2] [1] [1] [i_2]) ? ((8433960705064936889 + (-9223372036854775807 - 1))) : (arr_15 [i_2]));
            var_23 ^= ((1 & (arr_0 [9])));
            arr_17 [i_2] [i_2] [i_2] = (((arr_10 [i_1] [i_1] [i_2]) <= (arr_12 [i_1])));
        }
        var_24 = (min(var_24, (arr_6 [i_1 - 1])));

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            arr_20 [i_5] = (((arr_15 [6]) && (arr_3 [i_1] [i_1 - 1])));
            var_25 = (((arr_10 [i_1 - 1] [i_1 - 1] [i_1]) & (arr_10 [i_1 - 1] [i_1 - 1] [i_1])));
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                var_26 = (((~1) ? (!18723) : (min((arr_24 [i_6] [i_6]), (arr_23 [i_6] [i_7])))));
                arr_26 [i_6] [i_7] = (arr_21 [i_7]);
            }
        }
    }
    #pragma endscop
}
