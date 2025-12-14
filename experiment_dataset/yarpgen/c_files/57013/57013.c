/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((+(((2266500978839627938 - 206) ? (max(1729526662, var_16)) : (~122)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(((max(-18386, (max(var_8, 22212))))), (min((min(2776501427, 1836496751)), -25))));
        var_20 = (min(var_20, (((18446744073709551615 ? 3822463641 : 612092477)))));
        var_21 = (var_14 ^ 5);
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_22 |= ((!(!var_13)));
        var_23 = (max(var_23, ((max(2097151, ((max(var_17, ((var_1 ? var_7 : 26713))))))))));
        arr_6 [i_1] = ((!((((-1836496766 + 2147483647) >> (!var_10))))));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        arr_11 [i_2] = ((~(31 || var_11)));
        var_24 = (461456466 != 30599);
        arr_12 [i_2 - 3] = (((!87) ? (!-32) : (var_18 == var_4)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    arr_20 [i_2] [i_3] = ((((var_2 ? -1836496754 : 108)) & (var_7 ^ var_16)));
                    var_25 *= (-1836496777 / var_4);
                }
            }
        }
        var_26 *= ((var_16 ? -1836496756 : var_8));
    }
    var_27 = (min(var_3, var_17));
    #pragma endscop
}
