/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((!var_4) ? (min(((var_6 ? var_6 : var_9)), (1740858150 > 1740858122))) : (((((max(var_1, var_7))) ? var_4 : (!var_1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = ((((max(585595288, (arr_1 [i_1 + 1] [i_0])))) ? ((var_4 ? var_4 : (250630609 + var_7))) : var_1));
                arr_4 [i_0] [6] [6] &= ((~(((arr_2 [i_0 - 2] [i_0 - 2]) ? var_6 : (~var_7)))));
            }
        }
    }
    var_12 *= ((1740858150 ? 62829 : 32767));
    #pragma endscop
}
