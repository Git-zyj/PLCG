/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (min(var_18, -88));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_19 ^= (((arr_0 [i_0]) ? (arr_4 [i_0] [i_1] [i_1]) : (arr_1 [i_1])));
            var_20 = (((arr_1 [i_0]) ? (1 / -4081191487165455882) : (((0 ? 1817795430 : 1)))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_21 = (~var_14);
            var_22 = (max(var_22, ((min(16385099398000487927, (arr_4 [i_0] [i_2] [i_2]))))));
            var_23 = (min(var_23, ((min((((65535 > (arr_0 [i_0])))), (arr_1 [i_2]))))));
        }
        arr_7 [i_0] = ((((((arr_5 [i_0]) ? (arr_6 [i_0]) : ((max((arr_2 [i_0]), 87)))))) ? ((~(max((arr_4 [i_0] [i_0] [i_0]), 11163795289762987696)))) : (!-16)));
        arr_8 [i_0] = ((-21808 ? 65535 : -119));
        var_24 = ((1 ? ((((62 ? 1752645993 : (arr_3 [i_0] [i_0]))) / ((((arr_5 [i_0]) | (arr_5 [i_0])))))) : (((((arr_3 [i_0] [i_0]) == ((var_6 ? var_9 : (arr_0 [i_0])))))))));
    }
    var_25 = ((((((var_9 ? var_4 : var_7)) <= var_5)) || (((-((var_12 ? var_16 : var_13)))))));
    var_26 = var_14;
    #pragma endscop
}
