/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(((0 ? 118 : var_10)), -9712))) ? ((((var_2 ^ 0) + var_6))) : (max(255, (((-32767 - 1) ? -647407655864274549 : 2147483636))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) % ((224 - ((-(arr_1 [i_0] [i_0])))))));
        arr_4 [i_0] = (min(var_4, 4294967295));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_7 [11] [11] = 224;
        arr_8 [5] = (-32767 - 1);
    }
    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (max(((245 << (var_1 - 641421403))), (((arr_0 [i_2]) ? (arr_5 [i_2 - 1] [i_2 - 2]) : (arr_10 [i_2 - 2])))));
        arr_12 [i_2] [i_2] = ((((var_4 - (arr_1 [i_2 + 3] [i_2 - 3]))) >> (((max(var_15, (arr_1 [i_2 - 2] [i_2 + 1]))) - 15516824529620540388))));
        arr_13 [i_2] = (max((arr_6 [i_2]), ((((min(32767, -1))) ? (((max(var_4, 245)))) : 0))));
        arr_14 [i_2] = 76;
        arr_15 [i_2] [i_2] = 2031539567;
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_19 [i_3] = ((192 ? -1 : 3072));
        arr_20 [1] [i_3] = (max(((((max(33538048, 192)) << (var_13 - 124)))), (((((var_1 ? var_18 : (arr_16 [i_3])))) ? ((1747851243381434866 / (arr_17 [i_3]))) : (((min((arr_16 [i_3]), (arr_16 [i_3])))))))));
    }
    var_20 = -8963;
    var_21 = (min(-1761380790743037796, var_0));
    #pragma endscop
}
