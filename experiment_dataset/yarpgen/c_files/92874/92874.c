/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (((max((!var_9), (2473925214321460466 * var_15))) * ((((max(var_13, 15972818859388091152)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((((max((max(var_11, -767611849339348358)), var_3))) ? ((29698 ? -767611849339348358 : 1)) : (((161 ? 63 : 17)))));
        var_21 = (max(var_4, ((25436 ? (arr_0 [i_0]) : ((var_10 ? 17103 : var_15))))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = max((max((arr_3 [i_1 - 3] [i_1]), (arr_3 [i_1 + 1] [i_1 + 1]))), var_0);
        arr_7 [i_1] [i_1] = 21872;
    }
    var_22 *= (max(((min(1, var_10))), var_8));
    #pragma endscop
}
