/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((min(var_18, var_11)) ? -69 : var_17))) ? ((((((1 ? -461400545 : -91))) <= ((-6001151221521643652 ? var_8 : var_1))))) : ((min(var_18, (!var_16))))));
    var_20 = ((((min(-1091661486, (60673 && var_7)))) ? var_3 : ((min(var_4, var_4)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [8] = -6001151221521643652;
        arr_4 [i_0] = 60673;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((((arr_6 [i_1]) ? 17296 : (arr_2 [i_1]))) < ((8490414685433660929 ? 238 : 4862))));
        arr_8 [20] [16] = ((var_13 ? (~var_0) : var_8));
        arr_9 [i_1] = (arr_5 [i_1]);
    }
    var_21 = -var_6;
    #pragma endscop
}
