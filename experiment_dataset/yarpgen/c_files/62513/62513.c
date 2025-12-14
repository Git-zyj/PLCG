/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_2 << (((min((max(-1575882290895903360, var_2)), var_1)) + 21396))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (max(31, var_12));
        var_15 = (max(var_6, var_5));
        var_16 = var_7;
        var_17 += ((((((arr_2 [i_0] [i_0]) ? (max(1621006256, -1575882290895903360)) : var_3))) || ((min(-14233, 255)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_18 *= -2147483642;
        arr_9 [i_1] [16] &= 734961020;
        var_19 -= (((arr_0 [14]) ? 1 : ((((12282500553183942919 << (-1 + 49))) & (((max(14232, 1))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] [i_2] = (((arr_8 [i_2]) - 121));

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_20 = (min(var_20, (((104 ? (arr_7 [i_2]) : (arr_7 [i_3]))))));
            var_21 = ((var_11 ? 26 : 566208145));
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_22 = (arr_8 [i_2]);
            var_23 += ((59069 ? (arr_6 [i_4]) : var_3));
            var_24 = var_12;
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_25 -= ((+(((arr_6 [i_2]) / (arr_12 [i_5])))));
            var_26 = (max(var_26, (var_10 & var_11)));
            arr_26 [i_2] [i_5] = (((arr_24 [i_5] [i_5] [i_5]) ? 63 : ((0 ? (arr_24 [8] [i_5] [i_5]) : (arr_0 [i_5])))));
            var_27 = 7;
        }
    }
    #pragma endscop
}
