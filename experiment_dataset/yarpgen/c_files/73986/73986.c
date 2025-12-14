/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_15 = ((arr_0 [i_0]) / (arr_0 [i_0]));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 = ((var_8 << var_11) <= (arr_6 [i_0] [i_0]));
            var_17 = (min(var_17, 5313842091620845044));
            arr_7 [i_0] = 5313842091620845044;
        }
        arr_8 [i_0] [i_0] = (((var_0 || var_4) ? (!var_4) : 5313842091620845063));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((-2846077590452227248 ? (arr_2 [12]) : -5313842091620845025));
        var_18 = ((var_7 ? -113 : (arr_1 [2])));
        var_19 = (((arr_1 [10]) ? -2846077590452227259 : ((3 ? 10561068052792206902 : (arr_1 [16])))));
        var_20 ^= -var_14;
    }
    var_21 ^= (((((2846077590452227248 ? ((max(var_9, var_14))) : (var_5 / -5313842091620845045)))) && var_8));
    #pragma endscop
}
