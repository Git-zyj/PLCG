/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_12 < var_3);

    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((((!(arr_1 [i_0]))) ? (((4074503451 | (arr_0 [i_0 + 3])))) : 7));
        var_14 |= ((max((arr_2 [i_0 + 3] [i_0 - 1]), (arr_2 [i_0 - 1] [i_0 - 3]))) / var_10);
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_15 = 62648;
        var_16 = ((!((!(arr_3 [i_1])))));
    }
    for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (1759008094 * 3451443355);
        var_17 |= (!0);
    }
    #pragma endscop
}
