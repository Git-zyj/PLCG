/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((!var_0) ? (max(var_9, var_1)) : var_0));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = (max(var_11, ((((arr_0 [i_0] [i_0]) ? (((~(arr_1 [i_0] [i_0])))) : (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((-(arr_0 [i_0] [i_0])));
        var_12 = ((!((((min(4266883510110159058, var_3)) + (((var_6 ? (arr_1 [6] [i_0]) : (arr_2 [i_0] [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_13 = (min(var_13, ((((17673744076712131506 / 1) != (223 != 2147450880))))));
        arr_8 [i_1] = (((((arr_0 [i_1] [i_1]) == var_0)) ? (((((!1) == (min((arr_0 [i_1] [i_1]), var_7)))))) : (((((-2580738852105474584 ? (arr_6 [i_1]) : 1))) ? (((arr_2 [i_1] [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_6 [i_1]))) : (((arr_6 [i_1]) | var_5))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_14 ^= ((!((((((var_5 ? var_5 : var_8))) ? ((min(26246, 1))) : ((((arr_10 [i_2]) != var_1))))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                {
                    var_15 = (min(var_15, ((min(((1124724634 ? 1 : 1)), ((+(((arr_14 [i_2]) ? 0 : (arr_1 [1] [i_3]))))))))));
                    arr_17 [i_2] [i_2] [i_2] [i_2] = (~1);
                    arr_18 [i_2] = ((~((((arr_15 [i_2] [i_4 + 2] [i_4] [i_4 + 1]) < var_0)))));
                    arr_19 [1] [i_2] = (((((arr_10 [i_4 + 1]) + 2147483647)) << (((((arr_10 [i_4 + 1]) ? (arr_6 [i_4 + 1]) : (arr_10 [i_4 - 1]))) - 1204805205))));
                    var_16 = ((((((min((arr_6 [i_4]), var_9))) ? (-9223372036854775807 - 1) : ((((!(arr_9 [i_2])))))))) % (((((var_7 ? var_0 : (arr_9 [i_4])))) ? ((1 ? 16344370829372061633 : 2066868756)) : (arr_13 [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4 - 1]))));
                }
            }
        }
    }
    var_17 = var_8;
    #pragma endscop
}
