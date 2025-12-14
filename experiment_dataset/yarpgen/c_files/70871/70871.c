/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_20 = (min(var_20, (((~((18001155062971725274 ? 1 : 1)))))));
                        var_21 -= ((-(((var_2 >> var_5) & var_19))));
                        var_22 = ((!(((var_16 + (((-18724 ? -30 : var_5))))))));
                    }
                }
            }
        }
        var_23 *= ((!(((4029624671 == 5456626760819360512) > 4058101461))));
        arr_11 [i_0] [i_0] = ((-(1548821034 != -5)));
    }
    var_24 = var_9;
    #pragma endscop
}
