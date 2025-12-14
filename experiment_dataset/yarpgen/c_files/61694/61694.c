/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((-32767 - 1), ((3179 ? 32750 : ((min(32750, 7387)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((((((min(0, 3179))) ? (min(1196768212, 0)) : 3179))) ? -32744 : (min(65535, 3707942890))))));
                    var_21 = (min(var_21, ((min(((((min(var_17, 0))) ? ((((arr_2 [i_2]) ? (arr_7 [i_2] [i_2] [i_0] [i_0]) : (arr_1 [i_0])))) : (min(var_3, 8889)))), (((((39548 ? 8754 : 1881518730))) ? (min(var_13, var_16)) : (((var_7 ? 2413448566 : 31098))))))))));
                }
            }
        }
    }
    var_22 = (min(var_22, ((min((min((((1686901157 ? var_2 : var_9))), ((var_0 ? var_5 : 388680084)))), (min((((56647 ? var_1 : var_9))), ((10893 ? var_0 : 16207)))))))));
    var_23 = ((((((((9223372036854775807 ? 3179 : 967362972491000707))) ? ((min(var_7, var_7))) : (min(var_16, -17324))))) ? (min((((-9223372036854775794 ? var_14 : 62427))), (min(317411301854057581, var_7)))) : ((min((min(var_17, -2061011839)), ((min(var_11, var_11))))))));
    #pragma endscop
}
