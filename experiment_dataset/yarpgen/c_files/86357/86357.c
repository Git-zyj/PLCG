/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(~var_8)));
    var_17 *= var_5;

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = ((!(((~(arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
            arr_7 [i_0] = (((max(var_10, var_5)) > 92));
            var_18 = (((max((var_15 & var_10), (arr_2 [i_0 + 1] [10]))) == (max((max(var_9, var_5)), (var_7 & -5796)))));
        }
        arr_8 [i_0 + 1] = (~-var_14);
        arr_9 [i_0 - 1] = (~var_12);
        arr_10 [i_0 - 1] = ((-var_5 ? ((((1 * var_3) && (var_1 == 5529796370732692214)))) : ((((((~(arr_4 [i_0 + 1]))) + 2147483647)) << (var_10 - 47612)))));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_15 [i_2] [i_2] = (min((var_7 * 5529796370732692207), ((((1 ^ 3635313961738072036) ? (arr_13 [i_2]) : (161 || var_8))))));
        var_19 ^= (((-(var_5 % 1))));
        var_20 = (((((min((arr_14 [i_2] [i_2]), (arr_1 [i_2 + 1])))) ? var_12 : -3635313961738072036)));
    }
    #pragma endscop
}
