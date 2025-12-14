/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_16 = 2139410839;
        arr_3 [i_0] [i_0] = (((arr_2 [i_0]) - ((-2147483647 ? var_9 : ((-(arr_0 [i_0])))))));
        var_17 = (min(var_17, ((max((((1867338454844723353 < (var_1 | var_9)))), (arr_1 [0]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = ((((7680 ? 4355 : 16579405618864828289)) / ((((4380 ^ 917471913) ^ (((arr_5 [i_1]) | 12)))))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_19 += ((((5 ? ((min((arr_4 [i_1] [i_2]), var_5))) : ((var_13 << (var_5 - 222))))) ^ ((min(27, 1)))));
            var_20 = (((arr_7 [i_1] [i_1] [i_1]) << 15));
            var_21 = (arr_7 [i_1] [i_2] [i_1]);
        }
        for (int i_3 = 2; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_11 [i_1] [i_1] [i_1] = ((~((((((-9223372036854775807 - 1) ? -1173261090 : -10950))) ? (~var_8) : -1684205951))));
            var_22 = (217 ^ 67043328);
        }
        for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
        {
            arr_14 [1] &= (arr_10 [i_1] [i_4 + 3]);
            var_23 = ((((((var_15 ? (arr_6 [i_1] [i_4]) : (arr_4 [i_4] [i_4]))))) && var_6));
            var_24 = ((~((((var_8 ? (arr_10 [i_1] [i_4]) : (arr_12 [1]))) | (~143)))));
            var_25 = var_9;
        }
    }
    var_26 = (!1082522789);
    #pragma endscop
}
