/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_18 -= 105;
                        var_19 = (arr_7 [i_0 - 1] [i_0]);

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_14 [21] [21] [i_2] [18] [i_0] = 873241996;
                            var_20 = ((-((100 ? (arr_13 [8] [1]) : (((arr_8 [i_4] [i_3] [i_2]) ? (arr_11 [19] [i_1] [i_0] [i_2] [i_0]) : 2))))));
                        }
                        var_21 = (min((((!(((-(arr_8 [i_1] [i_2] [i_2]))))))), ((~(arr_13 [i_2] [i_2])))));
                    }
                }
            }
        }
        arr_15 [i_0] = ((((max(((1391194321 ? (arr_4 [21] [i_0] [i_0]) : -105)), (arr_6 [i_0])))) ? (((arr_5 [i_0 + 1] [i_0]) ? (arr_5 [0] [i_0 - 1]) : (arr_5 [i_0] [i_0 - 1]))) : 152));
        arr_16 [1] &= 12;
    }
    var_22 = ((max(var_9, var_16)));
    var_23 = (((((var_4 ? (var_12 && -47) : var_3))) ? var_4 : var_16));
    #pragma endscop
}
