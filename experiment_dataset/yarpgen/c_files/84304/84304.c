/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (min(((((min(var_6, -65))) ? (!1) : (max(var_2, -130346089)))), ((-(-32767 - 1)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((-((-(arr_2 [i_0])))));
        var_19 -= (((var_11 ? var_1 : (arr_2 [i_0]))));
    }

    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_20 -= (((min((!0), (!var_15))) ? ((max((min((arr_0 [i_1] [i_1]), (arr_5 [i_1]))), (!var_14)))) : (max(((min(-130346103, (arr_2 [i_1])))), (min(8, (arr_1 [i_1])))))));
        arr_7 [i_1] = 10388693081139551163;
        var_21 = ((((min((~2080941049843107211), (min(var_1, -130346089))))) ? ((max(66, (-2147483647 - 1)))) : (max((((arr_5 [i_1]) ? (arr_5 [i_1]) : var_3)), -19))));
        var_22 = (max(var_22, (((!((min(((min((arr_4 [i_1] [i_1]), 3))), (min(-2356533036815857640, (-32767 - 1)))))))))));
    }
    var_23 = (((!var_1) ? 0 : ((max(((0 ? 130346099 : (-32767 - 1))), (!var_10))))));
    #pragma endscop
}
