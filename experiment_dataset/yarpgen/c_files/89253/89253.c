/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_11 |= (((arr_1 [i_0 + 1]) ? -26 : (arr_1 [i_0 - 2])));
        var_12 = (min(var_12, (((57946 + (arr_2 [i_0 + 1] [i_0 + 2]))))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((arr_4 [i_1 + 1]) ? ((var_2 ? 49968 : (var_0 * 0))) : ((var_4 ? (min(1147018712398212724, 0)) : ((var_8 / (arr_4 [i_1])))))));
        arr_7 [i_1] [i_1] = ((-((((arr_5 [i_1 - 2]) >= (arr_5 [i_1 - 2]))))));
    }
    var_13 = (max(var_13, (((~(~var_7))))));
    #pragma endscop
}
