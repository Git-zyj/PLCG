/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_5;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_11 = (min(var_11, (((!((min(830157527, (8333716792720569573 / 19386)))))))));
        var_12 = (min(var_12, ((min(1006632960, 1)))));
        var_13 -= ((!((((((var_2 ? -19387 : 12031838797741175321))) ? ((min(-19386, 242))) : 187)))));
        arr_4 [i_0] = (min((((max(65535, (-9223372036854775807 - 1))) / 93)), ((min(68, (~var_0))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_8 [i_1] = (min(((min((max(1, 524288)), ((max(232, var_4)))))), ((var_9 ? 4798290068792782236 : ((min(var_9, var_5)))))));
        arr_9 [i_1] |= ((-(max((((1 ? 1 : 132))), 6047552268922817615))));
    }
    #pragma endscop
}
