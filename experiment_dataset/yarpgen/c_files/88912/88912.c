/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = ((((min(((min(var_9, 255))), ((var_5 ? var_12 : -9546))))) % ((max(var_2, var_12)))));
    var_18 = (max((-32767 - 1), ((((min(var_6, 110))) ? -1078487966721319055 : (((var_1 ? var_8 : var_0)))))));
    var_19 &= max(((4891201287524588101 ? var_6 : var_9)), var_12);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((-((min((arr_6 [i_0 + 2]), var_0))))))));
                var_21 = (max(((((arr_0 [i_1 + 2] [i_1 + 1]) ? (arr_0 [i_1 + 2] [i_1 + 1]) : -1))), (~238549963)));
            }
        }
    }
    #pragma endscop
}
