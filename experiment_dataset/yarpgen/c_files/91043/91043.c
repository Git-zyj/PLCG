/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = ((((~(arr_1 [i_0]))) | var_3));
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_13 = var_5;
    }

    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_14 = (((((min(var_5, var_0))) ? 40 : 0)) >= (((((4 + (arr_3 [i_1] [i_1])))) ? ((min(var_6, (arr_3 [i_1] [i_1])))) : ((max(var_0, 57015))))));
        arr_5 [i_1] = (min(((((((arr_3 [i_1] [i_1]) ? var_9 : 9)) < (((arr_3 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_3 [i_1] [i_1])))))), (min((0 ^ -19457), (arr_4 [i_1] [i_1])))));
        var_15 ^= 75;
        arr_6 [i_1] = ((((min((arr_3 [i_1] [i_1]), var_7))) ? (arr_3 [16] [i_1]) : (arr_3 [17] [i_1])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_16 |= ((-(var_1 < 65535)));
            var_17 = (max(var_17, (arr_0 [14])));
            arr_10 [5] [5] = 0;
        }
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            var_18 = (min(var_18, ((min(((+((min((arr_9 [i_1] [i_3 - 1] [i_3 - 2]), var_11))))), var_9)))));
            var_19 &= -1;
        }
    }
    #pragma endscop
}
