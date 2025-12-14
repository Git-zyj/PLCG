/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-((var_0 ? ((var_0 ? 906716735 : 69)) : var_6))));
    var_12 = (min(var_12, var_4));
    var_13 = (min(var_13, var_4));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, (4294967295 + 0)));
                        var_15 = (arr_3 [i_0] [i_0]);
                        arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((((9223372036854775807 ? (arr_2 [i_0 - 2]) : var_0)) ^ ((min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 2]))))));
                    }
                }
            }
            var_16 = (min(var_16, (((((((arr_6 [i_0 - 2] [15] [i_0 + 1]) ? (arr_7 [i_0 + 1] [6] [i_0 - 2] [6]) : 63374))) && ((min(4294967295, (arr_11 [4] [i_1] [i_0 - 2] [4] [4] [i_1])))))))));
            var_17 = (min(var_7, (min((arr_11 [i_0] [i_0] [i_0 - 1] [i_1] [i_1] [i_1]), (arr_8 [i_0 + 1] [i_1] [19])))));
        }
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            var_18 = (min(((min(var_3, (min(69, 39423))))), (min(((min((arr_14 [i_0 + 2] [i_0 + 2]), var_10))), ((var_8 ? var_6 : 4294967281))))));
            var_19 = (min((min(((~(arr_6 [i_0] [i_0] [6]))), (arr_8 [10] [0] [i_0 - 2]))), ((((var_0 ^ (arr_8 [4] [8] [16])))))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_20 = (min((((!var_0) ? ((var_7 ? var_2 : var_8)) : (min(-69, var_6)))), (((!(var_1 || var_6))))));
                        arr_19 [i_0] [i_0 + 3] [i_0 + 1] [7] [7] [7] = 83;
                    }
                }
            }
        }
        arr_20 [16] [16] = (((var_10 ? (min(-6023844107032642257, 29127) : var_10))));
    }
    #pragma endscop
}
