/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((32998 ? var_7 : (((~((var_8 ? 8811 : var_5)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 &= (var_5 == var_8);
                    arr_7 [i_0] = (((arr_6 [6] [i_1] [i_2 - 1]) || -8813));
                }
            }
        }
        arr_8 [i_0] [i_0] = (((arr_0 [i_0]) != ((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_10)))));
        var_16 = (min(var_16, (((!((((arr_5 [i_0] [i_0] [i_0]) & (arr_5 [i_0] [i_0] [i_0])))))))));
        var_17 = ((-8805 ? -32 : 21));
    }
    #pragma endscop
}
