/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((511 ? 1152921504606846976 : 12713)));

    for (int i_0 = 4; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (((((((min(var_8, 9154607685937560052))) ? (arr_2 [i_0]) : (9292136387771991544 + 938023340))) * (9292136387771991550 / 13956))))));
        var_20 = (max(((var_17 ? (max(0, var_10)) : (!var_16))), ((min(-13957, 52825)))));
        var_21 = ((280435896 ? 555445115022016200 : -1152921504606847000));
        var_22 = ((((max(7978, (max(var_6, (-127 - 1)))))) ? ((-11517 ? 2984825941 : 1222443910)) : (((((var_3 * 17863) <= (min(10720410998091358775, -97))))))));
        var_23 ^= var_9;
    }
    for (int i_1 = 4; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_24 = (max(var_24, (arr_5 [i_1] [i_1])));
        var_25 = ((-((18 ? (arr_4 [i_1 + 1]) : (arr_1 [i_1 - 3] [i_1])))));
        var_26 ^= var_0;
        var_27 |= var_12;
    }
    #pragma endscop
}
