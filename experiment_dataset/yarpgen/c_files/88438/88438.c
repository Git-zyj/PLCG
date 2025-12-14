/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 |= ((((((-767674570843776038 ? var_13 : 767674570843776037)) ? var_8 : (((var_4 ? 610 : var_9)))))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0]) < (((32 | (arr_2 [i_0]))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_18 = var_4;
            var_19 = (arr_4 [i_0] [i_0] [i_1]);
            arr_6 [i_0] [i_0] [i_0] = (((arr_1 [i_0 - 3] [i_0 - 2]) || var_6));
        }
        var_20 = (arr_1 [i_0] [i_0 - 1]);
        arr_7 [i_0 - 1] [i_0] = (((((100760390 ? 1884355933 : 32))) ? 39803 : ((((min(127, var_7))) ? 65534 : (min((arr_2 [i_0 - 3]), var_7))))));
        arr_8 [i_0] [i_0] = (!2147483647);
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_21 = (min(var_21, 147));
        var_22 = ((~(min(var_5, (((arr_9 [18] [i_2]) ? 1448729562 : 32640))))));
        var_23 = (min((((arr_9 [i_2 + 2] [i_2]) ? (arr_9 [i_2 - 2] [i_2 - 1]) : 65535)), 538019021));
    }
    for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_24 ^= (((arr_10 [i_3 + 1]) / ((var_14 ? 597 : ((1006091707 ? var_1 : (arr_10 [i_3])))))));
        var_25 = (min(var_25, 538019021));
    }
    var_26 = var_11;
    #pragma endscop
}
