/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((~(max((var_8 == var_9), (min(var_3, var_12)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_19 = ((((((((arr_3 [5]) ? var_10 : var_14)) % var_12))) && ((max(((max(var_6, var_0))), (~227))))));
                    var_20 = (var_6 | var_6);
                    arr_10 [i_0] [i_0] [i_0] = (max((((var_2 && 51035) ? (min(var_0, var_3)) : (min(var_4, var_17)))), (51021 < var_13)));
                    var_21 = var_2;
                }
            }
        }
    }
    var_22 = ((var_8 ? (((var_0 && (51038 && -102)))) : (min(var_6, ((var_10 ? var_6 : 1))))));
    var_23 = (max(((2147483631 ? var_15 : -543332681)), var_15));
    var_24 = (((((((~14480) < var_4)))) < (max(((var_1 ? var_9 : var_15)), (min(var_1, var_14))))));
    #pragma endscop
}
