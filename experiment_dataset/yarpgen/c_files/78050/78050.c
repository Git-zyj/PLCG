/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (max((arr_0 [i_0]), ((((arr_0 [i_0]) && (arr_0 [i_0]))))));
        var_19 += ((-1893180343 ? 1 : (!-5837721699089462811)));
    }
    var_20 = var_7;

    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_21 |= ((max((((var_1 ? var_1 : 2455015958))), ((2455015968 ? 1445 : (arr_6 [i_1]))))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_17 [i_1] [2] [i_2] = 4095;
                        var_22 = ((~(max(20, 4114))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = (((arr_0 [i_5]) * var_5));
        var_23 = (min(var_23, (arr_9 [12] [i_5])));
        var_24 = ((1055982944 ? 4095 : 5638));
        arr_21 [i_5] = (((((var_16 ? -87 : -1))) ? (arr_6 [i_5]) : 1055982953));
        var_25 *= (((12734421321546099497 ? -3859195298525260542 : 1311498917820001555)));
    }
    var_26 = var_11;
    var_27 = (var_7 > var_10);
    #pragma endscop
}
