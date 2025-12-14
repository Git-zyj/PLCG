/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = var_16;
    var_20 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = ((!((var_5 != ((1 ? var_2 : var_15))))));
                    arr_10 [i_0] [i_0 - 1] [i_1] = (((!((max(var_10, var_7))))));
                    var_21 = (min(2973792198, -var_8));
                }
            }
        }
    }
    var_22 = (max(var_22, (((((min(((var_9 ? -9002844578645278587 : -120)), (var_4 || 47)))) ? ((var_11 ? (min(var_11, 12116)) : (min(948230100, 0)))) : var_17)))));
    #pragma endscop
}
