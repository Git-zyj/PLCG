/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((38 ? 181 : -86)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [11] = ((var_14 ? (arr_0 [i_0] [3]) : (4294967295 != var_13)));
        arr_3 [i_0] [i_0] = (((((var_14 ? (arr_1 [i_0]) : 70))) ? var_13 : 1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] = (!1);
        arr_8 [i_1] = var_9;
        var_18 = (((arr_0 [i_1] [i_1]) ? 10238177134873675787 : (arr_4 [i_1])));

        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_20 [i_1] [i_2] [i_3] [i_4] [i_5] [i_2] [2] &= -0;
                            arr_21 [i_1] [i_2] [i_2] [i_3] [i_4] [i_4] = var_0;
                        }
                    }
                }
            }
            var_19 = (((arr_11 [i_1]) != (arr_11 [i_1])));
        }
        var_20 = (((arr_14 [i_1] [i_1] [i_1] [i_1] [4]) | 8208566938835875844));
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_21 = ((((max(var_6, (!2870764652)))) ? ((min((arr_24 [i_6]), (arr_22 [i_6] [i_6])))) : 8208566938835875848));
        var_22 = (min((((!(arr_23 [i_6] [i_6])))), (((!1) ? (arr_23 [i_6] [i_6]) : -8208566938835875848))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        arr_27 [i_7] [i_7] = ((-(!18446744073709551602)));
        arr_28 [i_7] [i_7] = ((~(arr_26 [i_7])));
        var_23 = ((-8883938497014839791 ? 1 : 4294967295));
    }
    #pragma endscop
}
