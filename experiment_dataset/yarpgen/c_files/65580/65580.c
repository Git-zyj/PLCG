/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((((~(-2147483647 - 1)))) ? 0 : ((((arr_1 [i_0]) < ((var_10 ? (arr_0 [i_0] [i_0]) : var_0)))))));
        var_13 &= (!(((~(arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_14 = (arr_0 [i_1] [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] [i_3] [i_3] = (((arr_5 [1] [14]) ? (arr_5 [i_1] [i_1]) : (arr_12 [i_1] [i_2] [i_3] [i_1])));
                        var_15 = (arr_6 [10] [i_4]);
                    }
                }
            }
        }
    }
    var_16 = var_7;
    var_17 = var_11;
    var_18 = (15 && 1);
    var_19 = ((~(var_7 | var_3)));
    #pragma endscop
}
