/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(!10077129404156190499)));
    var_21 ^= var_14;
    var_22 = 10077129404156190483;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (min((arr_0 [i_0]), (((arr_1 [i_0]) != (max((arr_1 [i_0]), 8369614669553361113))))));
        arr_3 [i_0] [i_0] = -1;
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1 - 1] = (arr_5 [i_1]);
        var_23 |= ((arr_7 [i_1] [i_1]) ? ((-(arr_7 [i_1 + 1] [i_1]))) : ((-580709624 + ((((arr_5 [i_1]) != (arr_5 [i_1])))))));
        arr_9 [i_1] [i_1 - 1] = ((((((arr_4 [i_1 + 1]) != (((~(arr_7 [i_1 - 1] [i_1 - 1]))))))) != var_16));
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_24 ^= ((((~(arr_7 [i_2] [i_2 + 1]))) + ((28 ? (arr_10 [i_2 - 1]) : (arr_10 [i_2 - 1])))));
        var_25 = (((arr_12 [i_2]) ? 580709629 : (((3633161032 & 9223372036854775794) ^ (~1)))));
        arr_13 [i_2 - 1] [i_2 + 1] = (arr_4 [i_2]);
    }
    var_26 = ((var_15 ? var_15 : var_11));
    #pragma endscop
}
