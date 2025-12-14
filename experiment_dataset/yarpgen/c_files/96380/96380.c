/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = 4621;
        var_17 = ((~(min(var_0, 18446744073709551615))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_18 &= (min((max(1099933251, (~110))), 64958));
        var_19 = (arr_2 [i_1 + 1]);
        var_20 -= (max(-21, (min((min(31, 12977639484332514671)), (5469104589377036945 < var_15)))));
        var_21 = 20;
        var_22 = ((-(min((~5469104589377036945), ((((((arr_5 [i_1]) + 2147483647)) >> 20)))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_23 = 31;
        arr_8 [i_2] = 205;

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_24 = ((((min(((-(arr_9 [9] [i_2]))), var_15))) ? ((((((arr_11 [i_2] [i_3] [i_3]) - var_13)) - -var_9))) : (((arr_7 [i_2]) + 1210519940))));
            var_25 = (min(var_25, (((2147483647 > (42 && 2323914701))))));
            arr_12 [i_2] = (((((var_12 << (var_3 >= var_3)))) ? -var_4 : 193));
        }
    }
    var_26 = var_15;
    var_27 = ((!((((((var_4 ? var_7 : 5106486844181228671))) ? var_1 : var_4)))));
    var_28 = (min(10990, var_7));
    #pragma endscop
}
