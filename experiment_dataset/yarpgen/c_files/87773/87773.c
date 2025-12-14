/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_1 [i_0 + 2]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_2 + 1] [i_1] [i_0] [i_0] = (((!14708) ? (((max(var_10, var_14)))) : (((arr_6 [i_2 + 1] [i_2 + 3] [1] [i_0 + 4]) ? 0 : var_4))));
                    arr_9 [i_1] [i_1] = ((!((max(6961531809464229789, 18446744073709551615)))));
                }
            }
        }
        arr_10 [i_0] = var_2;
        arr_11 [i_0] = var_0;
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_16 = (((((!((!(arr_7 [15])))))) * (!6961531809464229789)));
        arr_14 [1] = (max(var_12, (arr_0 [i_3] [i_3])));
    }
    var_17 = ((((((((max(var_11, var_9))) >= var_0)))) <= 63));
    #pragma endscop
}
