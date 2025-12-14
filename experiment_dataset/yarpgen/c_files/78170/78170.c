/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = (~32768);
    var_16 = min((min(192, 470741752)), (((((var_7 ? 470741743 : var_10)) <= var_1))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((+((max((arr_1 [i_0]), (arr_2 [i_0] [i_0 + 2]))))));
        var_17 += (arr_2 [i_0 + 1] [i_0 + 2]);
        var_18 = ((-470741752 + 2147483647) >> (-470741753 + 470741753));
    }
    #pragma endscop
}
