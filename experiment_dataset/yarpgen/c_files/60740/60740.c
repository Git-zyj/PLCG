/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_18 ^= (!(arr_2 [i_0 + 1] [i_1]));
            arr_4 [i_0] = ((var_6 % (arr_0 [i_0 - 1])));
            arr_5 [i_0 + 1] [1] = var_12;
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            arr_9 [11] [i_2] = 255;
            var_19 = (var_9 | var_6);
        }
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            var_20 = (max(var_20, (((-(((arr_1 [i_3]) / 1978270138777080283)))))));
            arr_12 [i_0] [i_0 - 1] [i_0 + 4] |= ((var_11 ? 8 : (arr_2 [i_0 + 4] [i_0 + 1])));
        }
        arr_13 [i_0] = ((var_2 ? var_2 : (arr_1 [i_0 + 3])));
        var_21 ^= 1;
    }
    #pragma endscop
}
