/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~((25180 ? var_7 : (max(var_9, var_5))))));
    var_12 |= (-125 >= 6);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_3 [i_0]) ? ((((((arr_2 [i_0] [i_0]) ? var_3 : -90))) ? var_5 : var_10)) : ((((((var_4 ? -126 : (arr_0 [i_0])))) ? ((min(-107, 1))) : 29)))));
        arr_5 [i_0] = ((-(arr_3 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_13 [i_0] [i_0] [i_0] = (min(((-((((arr_7 [i_0]) <= -107))))), ((32767 ? ((((arr_10 [i_1]) < (arr_6 [12])))) : 125))));
                    arr_14 [i_2] |= (max((arr_7 [i_2]), (((!(arr_3 [i_1]))))));
                    var_13 += ((!(((max(4194304, 62))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_19 [i_3] [i_3] = (arr_10 [i_3]);
        arr_20 [i_3] = ((((((arr_0 [i_3]) ? (arr_10 [i_3]) : 127))) ? var_3 : (arr_9 [i_3] [i_3] [i_3])));
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        arr_23 [i_4] [i_4] = ((((((var_2 + (arr_1 [i_4]))))) ? (((3584 ? -72 : 6))) : (((((var_9 ? var_9 : (arr_6 [i_4])))) ? (var_2 * 120) : (((max(-125, 32767))))))));
        arr_24 [i_4] [1] |= ((!(!var_6)));
    }
    var_14 += ((var_5 <= ((~((var_6 ? 57344 : var_5))))));
    #pragma endscop
}
