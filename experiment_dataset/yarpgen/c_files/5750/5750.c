/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((9151 ? (((max(255, 0)))) : 1640810446230332037));
    var_14 *= 1;

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        arr_2 [6] = (min((arr_0 [i_0] [i_0 - 2]), ((-(((arr_0 [i_0] [i_0 + 1]) ? var_5 : (arr_1 [i_0] [i_0])))))));
        var_15 = max(((min((arr_1 [i_0] [i_0 + 1]), (arr_1 [i_0 - 4] [i_0 - 4])))), (((arr_0 [i_0] [i_0 + 1]) ^ (arr_0 [i_0] [i_0 - 1]))));
    }
    #pragma endscop
}
