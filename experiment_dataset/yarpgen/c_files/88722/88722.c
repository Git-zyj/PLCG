/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((var_8 | (min(var_3, (max(11278, var_4))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 += (-(arr_0 [i_0]));
        arr_2 [i_0] [i_0] = -var_7;
        arr_3 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_12 = ((-8952093486770920985 ? -21855 : 3938998015418636658));
        arr_6 [i_1] = (arr_4 [i_1]);
    }
    var_13 = var_0;
    var_14 = -var_6;
    #pragma endscop
}
