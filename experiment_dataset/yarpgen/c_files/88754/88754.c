/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_1] = (min(((((arr_1 [i_1 + 2]) ? (arr_2 [i_1] [i_1 + 2]) : var_4))), var_5));
                var_16 = ((((!(arr_2 [i_1 + 4] [i_1 + 1]))) ? (((arr_2 [i_1 - 1] [i_1 + 1]) ? (arr_2 [i_1 + 2] [i_1 - 1]) : (arr_2 [i_1 + 1] [i_1 + 3]))) : (max((arr_2 [i_1 - 1] [i_1 - 1]), -1825859214))));
                var_17 = (min(var_17, ((min(((~(-2147483647 - 1))), ((min((arr_3 [i_1 + 2]), (arr_3 [i_1 + 4])))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = (((min(0, var_10)) * -95));
        arr_9 [i_2] [i_2] = -1768304704;
        var_18 = (min(var_12, (arr_3 [i_2])));
    }
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        var_19 = (((-4168277970844500724 ? 53333 : -92)) | 57756);
        var_20 = (min(var_20, (((max(((var_0 / (arr_0 [i_3 + 2]))), (arr_1 [i_3])))))));
        arr_13 [i_3] = ((((((!var_2) ? ((92 ? 18446744073709551615 : 220187372796977431)) : (arr_0 [i_3 - 1])))) ? (!-121) : (arr_3 [23])));
        var_21 = (min((arr_10 [14]), var_0));
    }
    for (int i_4 = 4; i_4 < 9;i_4 += 1)
    {
        arr_16 [5] = 7654280156277382113;
        var_22 = (max(var_22, (arr_11 [i_4])));
    }
    var_23 = (max(var_11, (max((!1), ((245531562320005707 ? var_12 : 999200620))))));
    #pragma endscop
}
