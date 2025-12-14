/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (((~(arr_0 [11]))) < (((3402544799 > (max(5360786920349953624, 15748010835253406397))))));
                var_13 ^= (~var_1);
            }
        }
    }
    var_14 -= (((((var_2 % (var_6 != var_7)))) ? (((min(18106351454841154820, var_8)))) : (-var_9 % var_4)));
    #pragma endscop
}
