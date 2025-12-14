/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_5;
    var_15 = var_11;
    var_16 = (((~((var_8 ? -26781 : 1512832791527818338)))));
    var_17 = ((var_4 && (((var_13 ? (max(-1650519919, var_7)) : -var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = ((((min(-1330917243, var_4))) * (max((arr_6 [i_1 + 1] [i_1] [13]), ((var_7 ? var_10 : 11576677755099044679))))));
                arr_7 [i_0] [i_1] = var_0;
                var_19 = -1650519899;
            }
        }
    }
    #pragma endscop
}
