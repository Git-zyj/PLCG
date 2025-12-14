/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = min((min(((((arr_1 [i_0]) < 1))), 32075)), (--4294967295));
        var_12 = ((((((arr_0 [i_0]) != 524256))) * ((((arr_1 [i_0]) && -524245)))));
        arr_3 [i_0] = 524244;
    }
    var_13 = (((min((((-524248 ? var_8 : 1))), var_9)) | var_1));
    var_14 = (min(var_14, var_5));
    var_15 = (max((min(var_7, ((min(524268, -524257))))), 3489002344));
    #pragma endscop
}
