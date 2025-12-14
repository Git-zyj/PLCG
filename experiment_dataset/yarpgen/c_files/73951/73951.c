/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((-7 ? 3484444639754737244 : 107)) ^ 2147483647))) ? ((((var_5 ? var_7 : var_9)) + var_0)) : ((max(((var_4 ? var_1 : (-2147483647 - 1))), (max((-2147483647 - 1), 2147483647)))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = ((((arr_1 [i_0]) + ((min(-8, var_0))))));
        var_15 += min(((-8 ? ((-(arr_2 [i_0]))) : 2147483647)), ((-65 - (arr_2 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] = (var_0 + 21);
        var_16 = (min(var_16, (((-((-((max((arr_4 [13]), (arr_3 [i_1] [i_1])))))))))));
    }
    #pragma endscop
}
