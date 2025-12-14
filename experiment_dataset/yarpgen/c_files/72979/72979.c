/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_7, var_8));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((11236547884362183380 ? 8546580262403970039 : -16536)) & 0));
        var_18 = (3 == 8546580262403970038);
        var_19 = 0;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_20 = (-49941 || 18446744073709551596);
        var_21 = (min(-49946, ((~(62429 + 1)))));
    }
    #pragma endscop
}
