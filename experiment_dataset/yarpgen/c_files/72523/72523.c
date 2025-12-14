/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = var_13;
        arr_2 [i_0] = 12189121234899353404;
        arr_3 [24] = 9095914931672008190;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [10] |= ((!((min((var_2 * var_6), (!127))))));
        var_18 *= var_4;
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        var_19 *= ((-var_13 ? (((!var_0) ? var_14 : 9095914931672008190)) : ((((min(106, (arr_8 [4] [8])))) ? (min(38071, -4766499365720810945)) : var_13))));
        var_20 = var_4;
    }
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        arr_12 [i_3 + 2] [i_3 - 2] = ((-9095914931672008190 ? -9223372036854775791 : 1));
        arr_13 [i_3] = (arr_11 [i_3] [i_3]);
        arr_14 [i_3] = 49397;
    }
    #pragma endscop
}
