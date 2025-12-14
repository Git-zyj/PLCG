/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= 18446744073709551606;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = (((1770773427 <= -634977784038142550) ? var_7 : 2524193868));
        arr_3 [3] = ((!(((776086052 ? 72 : 4503599627370494)))));
        var_14 *= ((-634977784038142550 ? 4706508438794175844 : 13740235634915375764));
    }
    var_15 = ((6000831254832568105 ? 4503599627370493 : (~var_9)));
    #pragma endscop
}
