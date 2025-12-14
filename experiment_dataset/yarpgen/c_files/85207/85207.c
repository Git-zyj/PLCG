/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_16 = ((16 / (arr_2 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((((max((max(1, var_14)), -31964))) && (arr_3 [i_1 + 3])))));
                    arr_9 [i_0] [i_1] = 0;
                    arr_10 [i_0] [i_0] [i_0] [i_1] = (!((!(arr_2 [i_1 + 1] [i_1 + 3]))));
                }
            }
        }
        var_18 = -34;
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_19 = (min((arr_0 [i_3] [15]), ((~(arr_2 [i_3] [i_3])))));
        var_20 = (arr_3 [i_3]);
    }
    var_21 = ((((var_11 ? -10670225218296758016 : var_8)) - var_11));
    var_22 = (max(((var_14 ? ((max(var_0, var_13))) : 18446744073709551615)), (((!(((129 ? 1591615167 : var_10))))))));
    #pragma endscop
}
