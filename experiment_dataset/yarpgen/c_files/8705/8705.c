/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = ((-(min((min((arr_0 [i_0]), var_18)), 1))));
        arr_3 [10] |= ((((((1 << (arr_2 [10])))) ? ((223 ? 1691713239956891837 : -26)) : 1317)));
        var_20 = ((((((var_11 == 76) == (((arr_1 [13]) << (arr_2 [i_0])))))) == ((min(var_10, ((((arr_1 [i_0]) < (arr_0 [i_0])))))))));
    }
    var_21 = var_13;

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] [i_1] |= (arr_5 [i_1]);
        arr_9 [9] = ((((((arr_4 [i_1]) << (((-1989256896 + 1989256898) - 2))))) ? (arr_4 [i_1]) : (arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_22 = (min(var_22, (((((((var_13 ? -227939520 : (arr_10 [i_2] [i_3]))))) ? (!var_6) : (arr_12 [i_2] [8]))))));
            var_23 = (((arr_12 [i_3] [i_3]) ? ((-(arr_11 [i_2]))) : (arr_12 [i_2] [i_3])));
        }
        var_24 = (min(var_24, (arr_11 [i_2])));
        var_25 *= (max((((var_10 ? (arr_11 [i_2]) : 227939520))), var_12));
        arr_14 [i_2] = (((var_2 <= -227939528) < 22986));
    }
    var_26 ^= (1957448601 == var_9);
    #pragma endscop
}
