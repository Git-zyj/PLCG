/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((max(var_17, var_0))) ? (var_11 ^ var_16) : (min(var_8, var_14))))) ^ var_4));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 = (max((arr_0 [i_0] [i_0]), ((((arr_1 [i_0]) < (arr_1 [i_0]))))));
        var_21 = (min((arr_1 [i_0]), (((!(((arr_0 [i_0] [i_0]) || (arr_0 [i_0] [i_0]))))))));

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_22 = (arr_2 [i_1] [i_1]);

            for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
            {
                var_23 = ((((+(((arr_0 [i_0] [i_0]) ? (arr_4 [i_0] [i_1]) : (arr_4 [i_0] [i_1]))))) << (arr_4 [i_0] [i_0])));
                var_24 += (arr_6 [i_0] [i_1 + 1] [i_0]);
                arr_7 [i_1] [i_1] [i_1] = (arr_0 [i_0] [i_0]);
            }
            for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
            {
                var_25 = ((!(((+(((arr_5 [i_0] [i_0] [i_0] [i_3]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_1]))))))));
                arr_10 [i_1] [i_1] [i_3] = arr_5 [i_0] [i_1] [i_0] [i_3];
            }
            arr_11 [i_0] [i_1] = (((((48 ^ 1) & 17109764259325229377)) - (arr_3 [i_0] [i_1])));
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            arr_17 [i_4] [i_4] = ((-(((arr_15 [i_4] [i_4] [i_4]) + (arr_14 [i_5])))));
            arr_18 [i_4] = ((arr_16 [i_4] [i_4] [i_5]) ? (((arr_14 [i_4]) << (((arr_13 [i_4]) - 51941103)))) : ((((arr_14 [i_4]) > (arr_14 [i_4])))));
        }
        var_26 = (min((arr_13 [i_4]), (((arr_13 [i_4]) * (((arr_12 [i_4] [i_4]) * (arr_15 [i_4] [i_4] [i_4])))))));
        arr_19 [i_4] [i_4] = ((((((min(-108, 235))) * (min((arr_14 [i_4]), (arr_13 [i_4]))))) << (((max((((arr_12 [i_4] [i_4]) + (arr_15 [i_4] [i_4] [i_4]))), (((arr_12 [i_4] [i_4]) ? (arr_15 [i_4] [i_4] [i_4]) : (arr_12 [i_4] [i_4]))))) - 4209369447))));
        var_27 = (((arr_13 [i_4]) - ((-(arr_12 [i_4] [i_4])))));
        var_28 = (((((((arr_13 [i_4]) > (arr_13 [i_4]))) || ((((arr_14 [i_4]) - (arr_13 [i_4])))))) || (((((((arr_14 [i_4]) ? (arr_16 [i_4] [i_4] [i_4]) : (arr_14 [i_4])))) ? (-14857 + 1) : ((((arr_15 [i_4] [i_4] [i_4]) != (arr_13 [i_4])))))))));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] [i_6] = (arr_15 [i_6] [i_6] [i_6]);
        arr_25 [i_6] [i_6] = max(((((max((arr_22 [i_6]), (arr_22 [i_6])))) ? (arr_16 [i_6] [i_6] [i_6]) : (((arr_14 [i_6]) ? (arr_16 [i_6] [i_6] [i_6]) : (arr_23 [i_6] [i_6]))))), ((((max((arr_23 [i_6] [i_6]), (arr_21 [i_6] [i_6])))) ? (((arr_23 [i_6] [i_6]) ? (arr_14 [i_6]) : (arr_16 [i_6] [i_6] [i_6]))) : ((((arr_15 [i_6] [i_6] [i_6]) ? (arr_22 [i_6]) : (arr_20 [i_6] [i_6])))))));
        var_29 = (max(((-((((arr_15 [i_6] [i_6] [i_6]) && (arr_22 [i_6])))))), ((((((arr_20 [i_6] [i_6]) ? (arr_22 [i_6]) : (arr_23 [i_6] [i_6])))) ? (1 >> 1) : (max((arr_13 [i_6]), (arr_22 [i_6])))))));
        arr_26 [i_6] = (((((min((arr_22 [i_6]), (arr_12 [i_6] [i_6])))) ? (((arr_16 [i_6] [i_6] [i_6]) >> (((arr_16 [i_6] [i_6] [i_6]) - 719996697)))) : ((((arr_14 [i_6]) ? (arr_23 [i_6] [i_6]) : (arr_21 [i_6] [i_6])))))) ^ (((arr_16 [i_6] [i_6] [i_6]) >> ((((~(arr_14 [i_6]))) + 15)))));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            {
                var_30 = (min((((+(((arr_21 [i_7] [i_8]) ? (arr_31 [i_7]) : (arr_13 [i_7])))))), ((((max((arr_23 [i_7] [i_8]), (arr_12 [i_7] [i_8])))) ? -8916490575823887756 : (max((arr_30 [i_7] [i_8]), (arr_12 [i_7] [i_8])))))));
                arr_32 [i_7] [i_7] = (arr_14 [i_8]);
            }
        }
    }
    #pragma endscop
}
