/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_20 = ((((~(arr_1 [i_0 - 1] [i_0 + 2]))) < var_6));
        arr_3 [i_0] [i_0] = arr_1 [i_0 + 2] [i_0 + 2];
        var_21 = ((((!((max(1429560249039049684, var_9))))) ? (arr_0 [i_0]) : (min((((var_18 ? 1 : var_15))), (max(var_11, -1))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_22 -= (((max((max(17274702944348673775, 4294967295)), (((-45 | (arr_5 [22])))))) / (arr_4 [i_1])));
        arr_7 [i_1] = ((((max(((-4212928320819897180 ? 4294967289 : 18446744073709551615)), ((max(4212928320819897180, 4212928320819897180)))))) ? 18446744073709551615 : (!17)));
        arr_8 [i_1] = 6158354945525100141;
    }
    var_23 = 765011396;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_24 = (max(var_24, (((((arr_14 [i_4] [i_2]) ? (arr_14 [i_2] [i_3]) : var_17)) * 10437))));
                    var_25 *= (arr_11 [i_4]);
                    var_26 = (~var_9);
                }
            }
        }
    }
    #pragma endscop
}
