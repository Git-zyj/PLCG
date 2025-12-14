/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((53 ? var_12 : var_9))) ? var_3 : var_0))) + -2796850396);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] = 172;

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_21 += (((arr_0 [i_2] [i_0 - 1]) ? -38 : (((arr_9 [i_0 - 1]) - (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1])))));
                    arr_10 [i_2] [i_1] [i_0] = min((max(((var_12 - (arr_2 [i_2] [i_1]))), (((1 + (arr_4 [i_0] [i_0] [i_2])))))), ((min(1060953581, 4294967295))));
                    arr_11 [i_0 + 1] [i_0 + 1] = ((((((arr_4 [i_0] [i_0 - 1] [i_0 - 2]) + 2796850396))) ? ((-(arr_7 [i_0 - 2] [i_0 - 1]))) : ((((arr_4 [1] [i_0 - 2] [i_0 - 2]) & var_17)))));
                    arr_12 [i_1] = ((((((arr_7 [i_2] [i_1]) ? 7825991709143308996 : (((~(arr_9 [i_1]))))))) ? ((((arr_9 [i_2]) * 1498116899))) : (arr_0 [i_0 - 2] [i_1])));
                }
            }
        }
    }
    var_22 = var_17;

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_15 [i_3] = 6851277420460604906;
        var_23 = (((arr_14 [i_3] [i_3]) ? (((arr_14 [i_3] [i_3]) ? var_4 : (arr_14 [i_3] [i_3]))) : ((max(var_6, (arr_14 [i_3] [i_3]))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            arr_20 [i_3] [i_3] = (((((arr_13 [i_3]) ? (arr_16 [i_3] [i_4] [i_3]) : -6851277420460604889)) - (arr_17 [i_4])));
            var_24 = (arr_16 [i_3] [13] [13]);
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_24 [i_3] = ((!(arr_17 [i_3])));
            var_25 = 770286869;
        }
        var_26 += ((((((!(arr_18 [i_3]))))) * 1879048192));
        arr_25 [i_3] [i_3] = ((((((arr_21 [i_3] [i_3] [i_3]) || (arr_21 [i_3] [i_3] [i_3])))) >> (((arr_18 [i_3]) ? (((770286869 ? 1 : 78))) : (arr_19 [14] [i_3])))));
    }
    #pragma endscop
}
