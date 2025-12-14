/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (max(-var_14, var_16));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 += ((((((-(arr_1 [i_0])) <= (!-7273455666555997081))))));
        var_19 = (min(var_19, (((~((7273455666555997080 ? (arr_1 [i_0]) : -26316)))))));
        var_20 = (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_21 = ((((min(((((arr_2 [i_1]) ? var_15 : (arr_2 [i_1])))), (max((-32767 - 1), 2452680664338062601))))) ? (min(23368, (arr_2 [i_1 - 1]))) : (max((arr_2 [i_1 - 1]), (arr_2 [i_1 - 1])))));
        var_22 = ((max((((arr_2 [i_1]) ? -7273455666555997082 : var_7)), 7273455666555997058)));
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_23 = ((+(((arr_4 [i_4]) + 8270614050929660051))));
                        var_24 = (((arr_14 [i_2] [i_4] [i_5]) || var_10));
                        arr_15 [23] [i_4] [i_3] [i_2] = ((var_5 - (arr_9 [i_2] [i_3] [i_4] [i_5])));
                        var_25 = (((arr_6 [i_2]) || (arr_4 [i_2])));
                    }
                }
            }
            var_26 = (((arr_8 [i_2]) ? (arr_8 [i_3]) : (arr_8 [i_2])));
        }
        for (int i_6 = 3; i_6 < 23;i_6 += 1)
        {
            var_27 = (arr_10 [i_2] [i_2] [i_2]);
            var_28 = (min(var_28, (((+((var_16 ? (arr_14 [i_2] [8] [i_6]) : (arr_4 [22]))))))));
        }
        var_29 = var_13;
    }
    var_30 = (((1 <= var_0) / ((var_8 ? ((((-32767 - 1) ? var_3 : var_2))) : var_11))));
    #pragma endscop
}
