/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(165, ((max(((15 ? 11290 : var_7)), 62209)))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            var_12 = (max(var_12, (arr_3 [i_0 + 1] [i_0] [0])));
            var_13 = ((~(min((4294967295 + 17), (max((arr_2 [i_1] [i_1]), 53851))))));
        }
        var_14 = (max(var_14, 4294967295));
        var_15 = 79;
        var_16 = ((~((8 ? 254 : 4294967288))));
    }
    var_17 = var_6;
    #pragma endscop
}
