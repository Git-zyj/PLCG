/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_0 ? 1329969539 : ((min(var_7, var_15))))) * (((-(var_2 / 2147483647))))));
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [1] = (((((4267052123 ? 4267052134 : -398472915))) ? (((((398472915 ? var_5 : var_2))) ? (arr_0 [i_0 - 3]) : var_6)) : 398472910));
                arr_6 [i_0] [i_1] = ((var_9 && (((4267052123 ? (arr_3 [i_0 - 4] [i_0 - 2]) : (arr_4 [i_0 + 1] [i_0 + 1]))))));
                var_19 = (--1);
                var_20 = (((((~-2147483643) == ((1071644672 ? var_8 : var_3)))) ? ((var_2 ? ((max(var_16, -18825))) : (27915198 || var_1))) : var_5));
            }
        }
    }
    #pragma endscop
}
