/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((min(var_8, var_9))), (max((max(41644, 7536612363183361846)), var_10))));
    var_13 = (min(var_6, var_9));
    var_14 ^= (min(33786, (min(var_8, var_5))));
    var_15 = (min(var_10, var_7));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_16 = (((min(var_8, 1059504775536872325)) - ((max((arr_0 [i_0 + 3] [i_0 + 3]), var_4)))));
        var_17 = var_7;
        var_18 = -29;
        var_19 = (min((((2305843009213693951 && (arr_0 [i_0 + 1] [i_0 + 1])))), (min(138, (arr_0 [i_0 - 1] [i_0 + 3])))));
    }
    #pragma endscop
}
