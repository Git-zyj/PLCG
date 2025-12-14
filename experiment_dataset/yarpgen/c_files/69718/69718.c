/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = (max((min(var_0, (~693072861))), 9519));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (!-var_2);
        var_20 = (((arr_1 [i_0] [i_0]) ? var_2 : 18014398509481983));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_21 = (max(var_21, ((((((arr_3 [i_1]) ? 13835058055282163712 : (~0)))) ? ((((arr_3 [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))) : 3601894449))));
        var_22 = (max(7745874631029807428, (max((arr_4 [i_1] [i_1]), (max(572670598862137168, 6880891505089491906))))));
        arr_5 [i_1] [i_1] = (((((32736 ? 1 : (arr_3 [i_1])))) ? (arr_4 [i_1] [15]) : (arr_3 [i_1])));
        var_23 = (((((2482263156 ? 0 : 40145))) ? var_8 : 3));
        arr_6 [12] = ((1 ? 84513962 : 0));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_24 -= var_3;
        var_25 -= min((min(var_9, 18014398509481980)), 56733);
        arr_10 [i_2] = ((128 ? var_1 : (!-41)));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_26 = (max(var_26, var_13));
        var_27 = (max(var_27, (((-(min((arr_8 [i_3]), (min(var_9, (arr_13 [i_3] [i_3]))))))))));
    }
    var_28 |= var_0;
    #pragma endscop
}
