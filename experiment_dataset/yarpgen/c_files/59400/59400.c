/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~((min(4294967295, 4294967295))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = 0;
        var_21 *= ((-117 || ((min(1, (max(21164, var_7)))))));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (max(1, (max(((1 ? var_18 : 2289801090)), 243159442))));
        arr_7 [i_1] [i_1] = (min(var_11, -1501534302));
        arr_8 [i_1] = (max(-1581402864, 30));
        arr_9 [i_1] = (((~var_0) | (min((arr_1 [i_1 - 1] [i_1 + 1]), 4294967294))));
        var_22 = ((((max((min(1, 0)), (((!(arr_3 [i_1] [i_1]))))))) ? (((((min(2005166221, 243159470))) ? 2036536999 : (max(243159464, -819751097))))) : ((max(-103, 1)))));
    }
    var_23 &= -var_8;
    #pragma endscop
}
