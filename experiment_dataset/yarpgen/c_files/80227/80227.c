/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 |= (((((var_4 % 15644949021000275663) >= ((min(63, 4263922306))))) || 894296233));
                    var_13 -= (min((~var_7), (arr_2 [i_0])));
                }
            }
        }
    }
    var_14 *= (min(((var_6 ? ((201 ? var_9 : var_1)) : ((min(var_1, var_6))))), ((-((var_7 ? var_5 : var_4))))));
    var_15 = (min(((((!var_10) == 224219990))), ((var_6 ? (min(var_8, 894296233)) : (((var_0 ? var_4 : var_8)))))));
    var_16 = (min(var_16, 894296201));
    #pragma endscop
}
