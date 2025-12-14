/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 26366;
    var_18 = (max((min(var_5, var_15)), (((((max(var_3, 1))) ? 1534165024 : ((1 ? var_3 : 1)))))));
    var_19 = 1;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min((((~(((var_8 + 2147483647) << (4744847509125699548 - 4744847509125699548)))))), 4294967295));
        arr_4 [i_0] = (min(-1, ((var_3 ? 1 : (((((arr_0 [i_0]) != 1))))))));
        arr_5 [i_0] [i_0] = (((~var_14) < (min(var_9, 1))));
        arr_6 [i_0] = (((((~(~var_7)))) ? (~0) : (max((((1 ? 28 : (arr_1 [4] [i_0])))), var_15))));
        var_20 = (min((((arr_1 [3] [i_0]) ? (arr_1 [i_0] [i_0]) : ((-110 ? var_12 : 65527)))), 1));
    }
    #pragma endscop
}
