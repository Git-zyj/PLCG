/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 *= (min(var_1, ((((((var_16 + 2147483647) >> (var_17 - 22999))) / var_16)))));
    var_22 &= 16216192657240673604;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_23 = (min(var_23, (((min(((max((arr_3 [i_0] [i_1]), 2147483647))), (max(var_9, 6426138848911976058))))))));
                arr_5 [i_0] = (min(195, -72));
                var_24 = ((var_2 ? (min((((6806773979779351147 ? 4460078067807705802 : var_4))), (max(11639970093930200468, 16216192657240673617)))) : (((max((min(58, var_17)), (max(42455, var_7))))))));
            }
        }
    }
    #pragma endscop
}
