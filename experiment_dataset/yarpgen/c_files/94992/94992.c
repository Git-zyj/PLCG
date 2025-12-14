/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~((max(var_14, 208)))));
    var_20 = 4294967232;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0 - 1]);

        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    {
                        var_21 -= var_0;
                        arr_11 [i_3] [i_1] = (-1734776851 | 1734776850);
                    }
                }
            }
            arr_12 [i_1] [i_1] [i_0] = (min(((max(((var_12 ? 233 : (arr_0 [i_0] [i_1]))), ((~(arr_8 [i_0] [8] [8])))))), (max(163, 267770636))));
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        var_22 = (min(var_22, (~27625)));
        var_23 = ((1505268855 ? 267770636 : -68));
        arr_17 [i_4] = ((11 ? 32754 : var_9));
        arr_18 [i_4] [i_4 + 2] = (!var_9);
        var_24 = ((var_9 ? (arr_1 [i_4] [i_4 - 2]) : var_14));
    }
    #pragma endscop
}
