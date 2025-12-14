/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = var_9;
        var_12 *= (arr_0 [8]);
        var_13 = (((arr_1 [i_0] [i_0]) & (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] = 0;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        var_14 = (((1641786429 ^ 3142414399937725588) && (arr_3 [i_4] [i_2])));
                        arr_17 [i_1] [i_2] [i_3] [i_4] [i_4] = -1635920913;
                    }
                }
            }
        }
        var_15 = (((126 ? -107 : -1641786429)) & (~0));
        var_16 = (min(181058817, (-2147483647 - 1)));
    }
    var_17 = (max(var_17, (((var_8 ? (max(var_4, ((min(var_1, var_9))))) : var_9)))));
    #pragma endscop
}
