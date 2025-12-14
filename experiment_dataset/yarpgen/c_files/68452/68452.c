/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((92599244893097204 / 65535), ((((((min(var_12, var_2)) + 2147483647)) << ((((var_6 ? var_3 : var_15)) - 18446744072350744521)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = (max(60, (((arr_6 [i_0] [i_1] [i_2]) ? ((((arr_5 [i_2] [i_1] [i_0]) ? var_12 : var_3))) : (max(13, var_15))))));
                    var_17 -= ((max(902715993415975069, -2050258710)));
                    arr_8 [i_2] [i_1] [i_0] = var_6;
                }
            }
        }
    }
    var_18 = (((((((61 ? var_4 : var_0)) / ((var_3 ? var_14 : -1404121798674631565))))) ? (-902715993415975090 / 3717921482309791156) : -var_14));
    var_19 = (~902715993415975069);
    var_20 = (!var_1);
    #pragma endscop
}
