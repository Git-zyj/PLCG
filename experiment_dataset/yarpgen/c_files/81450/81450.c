/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_17 = ((-(!-49775)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_1] = ((-1 != (arr_5 [i_0 + 1] [i_2 - 1] [i_1])));
                    arr_10 [i_0 - 1] [i_1] [i_2] [i_1] = 5;
                }
            }
        }
        var_18 = ((((-11972 <= (((arr_7 [i_0 + 2] [i_0] [i_0 + 1]) ? 53 : 8170584114498279577)))) ? (((!(((0 ? var_12 : 11971)))))) : (((((192 ? (arr_1 [i_0 + 1] [i_0]) : var_7)) < (!-11973))))));
        var_19 = (arr_3 [8] [8]);
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_15 [i_3] = min((((((((arr_14 [i_3] [i_3]) == var_1)))) - ((9223372036854775798 ? (arr_11 [i_3]) : 5830420072840781208)))), (arr_14 [i_3] [i_3]));
        var_20 = (((((((max(11943, (arr_3 [i_3] [i_3])))) << (((((arr_0 [i_3] [i_3]) + 74)) - 18))))) ? ((((!(arr_4 [i_3] [i_3]))) ? (min(var_0, (arr_13 [i_3]))) : (arr_1 [i_3] [i_3]))) : (((-(arr_3 [i_3] [i_3]))))));
        var_21 = var_6;
    }
    var_22 = (min(11973, -1));
    #pragma endscop
}
