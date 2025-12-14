/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (0 && 10817913266920269910);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_11 = -4844653045790495511;
            arr_5 [i_0] = (((arr_2 [i_0] [i_0] [i_0]) & 5191841325344890941));
        }
        var_12 = (var_9 ^ (arr_4 [5] [i_0] [i_0]));
        var_13 = 629515563;
    }
    #pragma endscop
}
