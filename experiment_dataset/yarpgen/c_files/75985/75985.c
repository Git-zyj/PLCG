/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_19 = (max(var_19, var_13));
        var_20 = ((~(arr_0 [i_0 + 1])));
        arr_3 [i_0 + 3] [i_0] = -6;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = 1;
        var_21 = (~157);

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_22 = var_6;
            arr_9 [i_2 - 1] [i_2] = ((((max(var_11, ((((arr_5 [i_1]) || (arr_2 [i_1] [i_1]))))))) ? ((62177 ? (-9075664004576479792 == 7718704011844029446) : 9075664004576479785)) : ((((~51464) & -9075664004576479792)))));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_23 = (arr_5 [1]);
        var_24 ^= (arr_5 [i_3]);
    }
    var_25 = (((((var_5 ? 1 : 1))) == var_5));
    #pragma endscop
}
