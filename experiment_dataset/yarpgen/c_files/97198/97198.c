/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_2;
    var_14 = ((!(((-var_7 - (min(14479260461997369667, var_10)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_15 = (66 + 1699671244496191422);
        var_16 = (max(var_16, var_1));
        arr_3 [i_0] [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] |= var_11;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [i_1] = (arr_8 [i_1]);
        var_17 = var_0;
        arr_10 [i_1] [i_1] = (((arr_7 [i_1] [i_1]) > ((min(11827, -11827)))));
    }
    var_18 = (max(var_12, var_7));
    var_19 = (min((((11856 << (65515 - 65499)))), (((10 >= (var_6 - 8))))));
    #pragma endscop
}
