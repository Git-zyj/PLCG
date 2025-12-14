/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_14 = (max(var_14, (((var_10 ? var_12 : var_3)))));
        arr_2 [i_0] = -var_7;
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] = var_1;

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_15 = (max(var_15, (((!(((-((var_13 ? var_12 : var_0))))))))));
            arr_9 [i_1] [i_1] = (((((var_13 ? ((var_0 ? var_5 : var_12)) : var_6))) ? (~var_2) : -var_9));
            var_16 = ((((((((var_9 ? var_9 : var_8))) ? (!var_10) : var_5))) ? var_6 : ((((((var_11 ? var_11 : var_6))) ? (~18) : var_8)))));
        }
        arr_10 [i_1] = var_10;
        var_17 = (min(var_17, var_10));
        arr_11 [i_1 + 3] [i_1] = var_8;
    }
    var_18 = -var_3;
    var_19 = var_12;
    var_20 = (min(var_20, (~var_0)));
    var_21 = (min(var_21, (((~(((~var_11) ? var_5 : (~233))))))));
    #pragma endscop
}
