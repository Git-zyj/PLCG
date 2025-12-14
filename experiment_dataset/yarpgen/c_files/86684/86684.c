/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 2992130121;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_3 [2] [2] &= (+(max(var_7, (((arr_0 [i_0] [i_0 - 2]) ? var_10 : var_2)))));
        var_16 = ((((min((arr_1 [i_0 - 3]), (arr_1 [i_0 - 1]))))) & ((max(4294967293, 1302837174))));
        arr_4 [i_0] = var_11;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_17 = 4294967295;
        var_18 -= ((((~var_8) ? var_2 : (max((arr_5 [i_1] [i_1]), 3778981198)))) - -2992130122);
        var_19 = arr_5 [i_1] [i_1];
        var_20 = (max(var_20, ((2501358437 ? 3 : 1793608859))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_21 = (min(var_21, 4294967295));
        var_22 = ((!(arr_2 [i_2])));
        arr_9 [i_2] = (arr_5 [i_2] [i_2]);
    }
    var_23 = (((!var_5) || -78));
    var_24 = var_11;
    var_25 = min((((4294967277 < (-115 / var_10)))), ((var_12 ? var_1 : 2992130109)));
    #pragma endscop
}
