/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((max(6010728531087950820, 6010728531087950822)), var_14));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = (!-var_16);
        var_20 -= (min(((((arr_0 [i_0]) ? (arr_0 [0]) : (arr_0 [i_0])))), ((-((12436015542621600796 ? var_0 : 4294967295))))));
        arr_2 [1] [0] = ((((min(1, (arr_1 [10] [11])) ? ((13082441941656550430 ? (arr_0 [1]) : var_8)) : (arr_0 [1])))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_5 [3] = (((~(arr_4 [i_1]))));
        var_21 = (min((~var_12), ((min((arr_1 [2] [10]), (arr_1 [15] [4]))))));
    }
    #pragma endscop
}
