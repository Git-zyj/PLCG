/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -32765;

    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((max((arr_1 [i_0]), ((var_3 * (arr_0 [i_0 - 1]))))))));
        var_17 = 127;
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_18 = ((((min(var_7, var_8))) && ((!(arr_5 [i_1] [i_1 + 1])))));
        var_19 = (min((((((((arr_2 [i_1]) ? -32759 : (arr_0 [7])))) ? var_13 : ((-1311866125107416202 ? (arr_0 [i_1]) : -32765))))), ((~(min(var_3, (arr_4 [0])))))));
        var_20 = (max(var_20, (((var_1 ? (!var_0) : ((var_7 ? -var_0 : ((var_4 ? var_13 : var_9)))))))));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 19;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1 - 2] [i_1] = -0;
                    var_21 += (((((var_12 == var_4) ? (((min((arr_7 [i_1 + 1]), var_14)))) : var_12)) >= var_6));
                }
            }
        }
    }
    var_22 = (max((min(182, var_9)), -1119735418));
    #pragma endscop
}
